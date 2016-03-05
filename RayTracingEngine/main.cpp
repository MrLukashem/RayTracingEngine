#include "mainwindow.h"
#include "Utils/VectorF2D.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    VectorF2D vec;

    return a.exec();
}
