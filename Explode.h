#ifndef EXPLODE_H
#define EXPLODE_H
#include <QList>
#include <QPainter>
#include <QImage>
class TankClient;

class Explode
{
public:
    Explode(int x,int y, TankClient* tc);
    void drawExplode(QPainter &p);
    int _x,_y;
    bool _live;
    int _dis[10];
    int _i;
    TankClient * _tc;
    static QList<QImage> ExplodeImgs;
};

#endif // EXPLODE_H
