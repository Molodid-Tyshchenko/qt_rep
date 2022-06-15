#include "mainwindow.h"

#include <QLabel>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QLabel label;
    label.setText("end");
    label.show();
    w.show();
    //Test t;     // testing the program
   // t.tests();

    //Monopoly m; // the game
  //  m.menu();
  //  m.startGame();
  //  m.updateGame();

    //return 0;
    return a.exec();
}
