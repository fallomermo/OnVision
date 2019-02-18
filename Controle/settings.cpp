#include "settings.h"

Settings::Settings(QObject *parent) : QObject(parent)
{}

QVariant Settings::loadSettings(const QString key, const QVariant value)
{
    QSettings settings(qApp->organizationName(), qApp->applicationName());
    return settings.value(key, value);
}

void Settings::saveSettings(const QString key, const QVariant value)
{
    QSettings settings(qApp->organizationName(), qApp->applicationName());
    settings.value(key, value);
}
