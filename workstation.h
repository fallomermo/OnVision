#ifndef WORKSTATION_H
#define WORKSTATION_H

#include <QMainWindow>

#include "Controle/settings.h"

namespace Ui {
class WorkStation;
}

class WorkStation : public QMainWindow
{
    Q_OBJECT

public:
    explicit WorkStation(QWidget *parent = nullptr);
    ~WorkStation();

private slots:
    void loadDefaultSettings();

private:
    Ui::WorkStation *ui;
    Settings *mSettings;
};

#endif // WORKSTATION_H
