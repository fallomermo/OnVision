#include "workstation.h"
#include "ui_workstation.h"

WorkStation::WorkStation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WorkStation)
{
    loadDefaultSettings();
    ui->setupUi(this);
}

WorkStation::~WorkStation()
{
    mSettings->saveSettings("maximized", this->window()->isMaximized());
    delete ui;
}

void WorkStation::loadDefaultSettings()
{
    mSettings = new Settings(nullptr);
    (mSettings->loadSettings("maximized", this->window()->isMaximized()).toBool()) ? this->setWindowState(Qt::WindowMaximized) : this->setWindowState(Qt::WindowActive);
}
