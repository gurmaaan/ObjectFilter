#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QCoreApplication::setApplicationName("Анализ распределения объектов на изображении");

    MainWindow mainWin;
    mainWin.show();

    return app.exec();
}
