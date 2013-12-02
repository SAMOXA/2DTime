#include "Graphics/interface.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Interface w(10,10,50,50);
    w.show();
    return a.exec();
}
