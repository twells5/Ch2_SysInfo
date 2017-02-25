#include "mainwindow.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    // Just a test comment.

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
