#ifndef BULLET_H
#define BULLET_H
#include "pub.h"
#include <QRect>
#include <QList>
#include <QImage>
#include <QPainter>
class TankClient;
class Tank;
class Wall;

class Bullet
{
public:
    Bullet(int x,int y,int w,int h,Dir dir,TankClient* tc,Tank* t,int blvalue);
    void drawBullet(QPainter &p);
    void moveBullet();
    bool hitTank(Tank* t);
    void hitTanks(QList<Tank*> ts);
    bool hitWall(Wall* w);
    void hitWalls(QList<Wall*> ws);
    bool hitBullet(Bullet* b);
    void hitBullets(QList<Bullet*> bs);
    inline QRect getRect(){return QRect(_x,_y,_w,_h);}//获得自身相交的矩形

    int _x,_y,_w,_h;
    int _blvalue;
    Dir _dir;
    bool _live;
    Tank* _t;
    TankClient* _tc;
    bool _buf;
    bool _good;
    int _v;
    static QList<QImage> BulletImgs;
};

#endif // BULLET_H
