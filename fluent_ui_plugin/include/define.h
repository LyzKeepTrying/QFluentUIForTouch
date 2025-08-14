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

#endif // DEFINE_H


