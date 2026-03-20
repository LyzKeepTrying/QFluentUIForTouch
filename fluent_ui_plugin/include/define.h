#ifndef DEFINE_H
#define DEFINE_H

#define DECLARE_PROPERTY_SIGNAL(type, name, defaultValue) \
Q_PROPERTY(type name READ get##name WRITE set##name NOTIFY name##Changed) \
    private: \
    type m_##name = defaultValue; \
    public: \
    inline type get##name() const { return m_##name; } \
    static inline const char* get##name##PropertyName() { return #name; } \
    void set##name(const type& value) { \
        if (m_##name != value) { \
            m_##name = value; \
            update(); \
            emit name##Changed(value); \
        } \
    } \
    Q_SIGNALS: \
    void name##Changed(type value); \
    private:

#define DECLARE_PROPERTY(type, name, defaultValue) \
Q_PROPERTY(type name READ get##name WRITE set##name) \
    private: \
    type m_##name = defaultValue; \
    public: \
    inline type get##name() const { return m_##name; } \
    static inline const char* get##name##PropertyName() { return #name; } \
    void set##name(const type& value) { \
            m_##name = value; \
            update(); \
    } \
    private:

#define DECLARE_PROPERTY_OBJECT(type, name, defaultValue) \
Q_PROPERTY(type name READ get##name WRITE set##name DESIGNABLE false) \
    private: \
    type m_##name = defaultValue; \
    public: \
    inline type get##name() const { return m_##name; } \
    static inline const char* get##name##PropertyName() { return #name; } \
    void set##name(const type& value) { \
        m_##name = value; \
} \
    private:

#define DECLARE_PROPERTY_PRIVATE(type, name, defaultValue) \
Q_PROPERTY(type name READ get##name WRITE set##name DESIGNABLE false) \
    private: \
    type m_##name = defaultValue; \
    public: \
    inline type get##name() const { return m_##name; } \
    static inline const char* get##name##PropertyName() { return #name; } \
    void set##name(const type& value) { \
        m_##name = value; \
        update(); \
} \
    private:

#define DECLARE_PROPERTY_THEME(type, name, defaultValue) \
Q_PROPERTY(type name READ get##name WRITE set##name NOTIFY name##Changed) \
    private: \
    type m_##name = defaultValue; \
    public: \
    inline type get##name() const { return m_##name; } \
    static inline const char* get##name##PropertyName() { return #name; } \
    void set##name(const type& value) { \
        if (m_##name != value) { \
            m_##name = value; \
            emit name##Changed(value); \
            emit themeChanged(); \
            refreshEntireApp(); \
        } \
    } \
Q_SIGNALS: \
    void name##Changed(type value); \
    private:

#define DECLARE_PROPERTY_COLOR(CLASS, name, themeExpr) \
Q_PROPERTY(QColor name READ get##name WRITE set##name NOTIFY name##Changed) \
    private: \
    QColor m_##name; \
    bool m_##name##_inited = false; \
    public: \
    inline QColor get##name() const { return m_##name; } \
    void set##name(const QColor& value) { \
        if (m_##name != value) { \
            m_##name = value; \
            emit name##Changed(value); \
        } \
    } \
Q_SIGNALS: \
    void name##Changed(QColor value); \
    private: \
    void init##name##ThemeBinding() { \
        if (m_##name##_inited) return; \
        m_##name##_inited = true; \
        auto themeCenter = g_fluent_theme_center; \
        auto syncThemeValue = [this]() { \
                  this->set##name(themeExpr); \
          }; \
        QObject::connect(themeCenter, &FluentThemeCenter::themeChanged, this, syncThemeValue); \
        syncThemeValue(); \
} \
    struct name##AutoBinder { \
        name##AutoBinder(CLASS* self) { \
            QMetaObject::invokeMethod(self, [self]() { \
                    self->init##name##ThemeBinding(); \
            }, Qt::QueuedConnection); \
    } \
} m_##name##_autoBinder{this};

#endif // DEFINE_H


