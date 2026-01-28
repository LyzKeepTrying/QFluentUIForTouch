#include "fluent_table_widget.h"
#include "fluent_scroll_bar.h"

FluentTableWidget::FluentTableWidget(QWidget* parent)
    : QTableWidget(parent)
{

    auto apply_font = [this](){
        QFont font(QFluentUI::Font::default_text_font);
        font.setPixelSize(getFontSize());
        QWidget::setFont(font);
    };
    connect(this, &FluentTableWidget::FontSizeChanged, this, [=]{
        apply_font();
    });
    apply_font();

    auto apply_color = [this](){
        QPalette palette;
        palette.setColor(QPalette::Highlight, getHighLightColor());
        palette.setColor(QPalette::Text, getTextColor());
        palette.setColor(QPalette::Base, getBackGroundColor());
        palette.setColor(QPalette::AlternateBase, getAlternativeColor());
        setPalette(palette);
        const QString header_bg = getBackGroundColor().name(QColor::HexArgb);
        QFont font(QFluentUI::Font::default_text_font);
        font.setPixelSize(getFontSize());
        const QString font_family = font.family();
        const int font_size = font.pixelSize();
        horizontalHeader()->setStyleSheet(QString(R"(
            QHeaderView::section {
                background-color: %1;
                border: none;
                border-bottom: 1px solid #DADADA;
                font-family: "%2";
                font-size: %3px;
                font-weight: normal;
                padding: 4px 8px;
            }
        )").arg(header_bg).arg(font_family).arg(font_size));
    };
    connect(this, &FluentTableWidget::HighLightColorChanged, this, [=]{
        apply_color();
    });
    connect(this, &FluentTableWidget::TextColorChanged, this, [=]{
        apply_color();
    });
    connect(this, &FluentTableWidget::BackGroundColorChanged, this, [=]{
        apply_color();
    });
    connect(this, &FluentTableWidget::AlternativeColorChanged, this, [=]{
        apply_color();
    });
    apply_color();

    setFrameShape(QFrame::NoFrame);
    setEditTriggers(EditTrigger::NoEditTriggers);
    setAlternatingRowColors(true);
    setSelectionMode(QAbstractItemView::SingleSelection);
    setSelectionBehavior(QAbstractItemView::SelectRows);
    setShowGrid(true);
    setGridStyle(Qt::DashDotDotLine);
    horizontalHeader()->setVisible(true);
    horizontalHeader()->setHighlightSections(false);
    verticalHeader()->setHighlightSections(false);
    QAbstractItemView::setVerticalScrollMode(ScrollPerPixel);
    QAbstractItemView::setHorizontalScrollMode(ScrollPerPixel);
    FluentScrollBar* h_bar = new FluentScrollBar(this);
    h_bar->setOrientation(Qt::Horizontal);
    setHorizontalScrollBar(h_bar);
    FluentScrollBar* v_bar = new FluentScrollBar(this);
    v_bar->setOrientation(Qt::Vertical);
    setVerticalScrollBar(v_bar);

}

FluentTableWidget::~FluentTableWidget() = default;
