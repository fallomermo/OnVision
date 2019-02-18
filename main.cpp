#include "workstation.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WorkStation w;
    w.show();

    return a.exec();
}
