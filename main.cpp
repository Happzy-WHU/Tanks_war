#include <QApplication>
#include "TankClient.h"


int main(int argc , char** argv)
{
    QApplication app(argc,argv);
    TankClient tc;
    tc.show();
    return app.exec();
}
