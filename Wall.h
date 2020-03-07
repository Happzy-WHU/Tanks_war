#ifndef WALL_H
#define WALL_H
#include "pub.h"
#include <QRect>
#include <QImage>
#include <QPainter>
class TankClient;

class Wall
{
public:
    Wall(int x,int y,int w,int h,TYPE type,TankClient* tc,int liveValue);//Brick，Iron,River
    void drawWall(QPainter &p);
    inline QRect getRect(){return QRect(_x,_y,_w,_h);}//获得自身相交的矩形
    inline QRect getRect1(){return QRect(_x+1,_y+1,_w-2,_h-2);}
    void keyPress(int key);
    void keyRelease(int key);
    void moveWall();
    bool hitWall(Wall* w);
    bool hitWalls(QList<Wall*> ws);
    void change();
    bool makeSure();
    void remove();

    int _x,_y,_w,_h;
    Dir _dir;//移动方向
    bool _sure;//是否确认地图
    TYPE _type;//
    int _xtemp,_ytemp;
    int _v;
    bool _doChange;
    bool _live;
    bool _BU,_BD,_BL,_BR;
    TankClient* _tc;
    int _liveValue;
    static QList<QImage> WallImgs;
};

#endif // WALL_H
