#include "prefab_widgets/input_dialog.h"
#include "ui_input_dialog.h"
#include <QApplication>
#include <QObject>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QPushButton>

#include "fluent_line_edit.h"
#include "fluent_spin_box.h"
#include "fluent_double_spin_box.h"
#include "fluent_text.h"
#include "fluent_push_button.h"

InputDialog::InputDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::InputDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    setWindowModality(Qt::ApplicationModal);
    setAttribute(Qt::WA_TranslucentBackground);
}

InputDialog::~InputDialog()
{
    delete ui;
}

bool InputDialog::getInputs(const QVector<QPair<QString, QString>>& inputs, QVector<QVariant>& values)
{
    QWidget* mainWindow = QApplication::activeWindow();
    if (!mainWindow) return false;

    // 创建半透明覆盖层
    QWidget* overlay = new QWidget(mainWindow);
    overlay->setGeometry(mainWindow->rect());
    overlay->setStyleSheet("background-color: rgba(0, 0, 0, 80);");
    overlay->setAttribute(Qt::WA_TransparentForMouseEvents, false);
    overlay->show();
    overlay->raise();

    // 创建输入对话框
    InputDialog dialog(mainWindow);
    QVBoxLayout* mainLayout = new QVBoxLayout(dialog.ui->fluentGroupBox);

    QVector<QWidget*> inputWidgets;

    for (const auto& input : inputs) {
        QString description = input.first;
        QString type = input.second;

        FluentText* label = new FluentText(&dialog);
        label->setText(description);
        label->setFontSize(14);
        label->setFixedSize(80, 40);
        label->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

        QWidget* widget = nullptr;

        if (type == "QString") {
            widget = new FluentLineEdit();
        } else if (type == "int") {
            widget = new FluentSpinBox();
        } else if (type == "float") {
            widget = new FluentDoubleSpinBox();
        } else {
            // 默认当作QString
            widget = new FluentLineEdit();
        }

        widget->setFixedSize(240, 40);

        QHBoxLayout* hLayout = new QHBoxLayout();
        hLayout->addWidget(label);
        hLayout->addWidget(widget);
        mainLayout->addLayout(hLayout);
        mainLayout->setContentsMargins(20, 20, 20, 20);

        inputWidgets.append(widget);
    }

    // 添加按钮
    QHBoxLayout* buttonLayout = new QHBoxLayout();
    FluentPushButton* okButton = new FluentPushButton("确定");
    okButton->setFixedSize(100, 40);
    FluentPushButton* cancelButton = new FluentPushButton("取消");
    cancelButton->setFixedSize(100, 40);
    buttonLayout->addWidget(okButton);
    buttonLayout->addWidget(cancelButton);
    mainLayout->addLayout(buttonLayout);

    // 根据inputs数量动态设置窗口高度
    int numInputs = inputs.size();
    int baseHeight = 130; // 基础高度，包括margins和按钮
    int heightPerInput = 60; // 每行输入的高度估算
    int totalHeight = baseHeight + (numInputs * heightPerInput);
    dialog.setFixedHeight(totalHeight);
    dialog.ui->fluentGroupBox->setFixedHeight(totalHeight - 20);

    connect(okButton, &QPushButton::clicked, &dialog, &QDialog::accept);
    connect(cancelButton, &QPushButton::clicked, &dialog, &QDialog::reject);

    // 连接对话框关闭信号，移除覆盖层
    QObject::connect(&dialog, &QDialog::finished, overlay, &QWidget::deleteLater);

    int result = dialog.exec();
    if (result == QDialog::Accepted) {
        for (QWidget* w : inputWidgets) {
            if (QLineEdit* le = qobject_cast<QLineEdit*>(w)) {
                values.append(le->text());
            } else if (QSpinBox* sb = qobject_cast<QSpinBox*>(w)) {
                values.append(sb->value());
            } else if (QDoubleSpinBox* dsb = qobject_cast<QDoubleSpinBox*>(w)) {
                values.append(dsb->value());
            }
        }
        return true;
    } else {
        return false;
    }
}
