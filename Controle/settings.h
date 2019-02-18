#ifndef SETTINGS_H
#define SETTINGS_H

#include <QObject>
#include <QVariant>
#include <QSettings>
#include <QApplication>

class Settings : public QObject
{
    Q_OBJECT
public:
    explicit Settings(QObject *parent = nullptr);
    QVariant loadSettings(const QString key, const QVariant value = QVariant());
    void saveSettings(const QString key, const QVariant value = QVariant());
};

#endif // SETTINGS_H
