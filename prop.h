#ifndef PROP_H
#define PROP_H
#include "Tank.h"
#include "Bullet.h"
#include "Wall.h"
#include "pub.h"
class TankClient;


class Prop
{
public:
    Prop(int x,int y,int w,int h,TankClient* tc,BUFF buf);
    void drawProp(QPainter & p);
    bool hitWall(Wall *w);
    void hitWalls(QList<Wall *> ws);
//    static void makeProps();
//    static void makeBlackholes();
    inline QRect getRect(){return QRect(_x,_y,_w,_h);}//获得自身相交矩形
    inline QRect getRect1(){return QRect(_x+9,_y+9,42,42);}

    int _x,_y,_w,_h;//坐标
    int _blacki;//黑洞动态
    bool _live;
    TankClient* _tc;
    BUFF _buf;
    static QList<QImage> PropImgs;
    int _x1,_y1,_x2,_y2;//每局每次两个黑洞的坐标



};

#endif // PROP_H
