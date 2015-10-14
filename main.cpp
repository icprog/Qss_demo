#include <QtGui/QApplication>
#include "mainwindow.h"
#include "dialog.h"
#include<QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file("qss/mainframe.qss");
    file.open(QFile::ReadOnly);
    a.setStyleSheet(file.readAll());
    file.close();

    MainWindow w;
    w.show();
    Dialog d;
    d.show();
    return a.exec();
}
