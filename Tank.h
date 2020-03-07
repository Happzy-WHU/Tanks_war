#ifndef TANK_H
#define TANK_H
#include <QPainter>
#include "pub.h"
#include <QRect>
#include <QList>
#include <QImage>
#include <QKeyEvent>
#include <QTime>
class TankClient;
class Wall;
class Prop;
class Tank
{
public:
    Tank(int x,int y,int w,int h,TankClient* tc,bool good,int liveValue);
    void drawTank(QPainter &p);
    void keyRelease(int key);
    void keyPress(int key);
    void moveTank();
    bool TankHitTank(Tank* t);
    void TankHitTanks(QList<Tank*> ts);
    void fire();
    Dir searchE(Tank *t);
    Dir searchBuff(Prop *t);
    void fire(Dir tdir);
    void superFire();//开大招
    void psuperFire();
    bool TankHitWall(Wall * w);//检测坦克是否撞墙
    void TankHitWalls(QList<Wall*> ws);
    bool TankHitProp(Prop *p);
    void TankHitProps(QList<Prop *> ps);
    void TankHitBlackHole();
    bool TankHitW(Wall * w);
    void TankHitWs(QList<Wall*> ws);
    void TankLeaveBH();
    void compare();
    void ai();
    void check();
    void pfire();
    static void init();
    inline QRect getRect(){return QRect(_x,_y,_w,_h);}//获得自身相交矩形

    int _ms,_s,_m;
    int _dms,_ds,_dm;
    int _bs[7];//Frez,Rush,Burn,Power,Invin,(Rank),_blow,_burnt
    bool _firstFire,_firstsFire;
    int _x,_y,_w,_h;
    int _invini;
    int _tx,_ty;
    bool _BU,_BD,_BL,_BR;
    bool _is1;//是否是一号玩家
    Dir _dir;
    Dir _ptdir;
    TankClient* _tc;
    bool _good;
    bool _up;
    bool _fire;
    bool _superF;
    bool _live;
    bool _frez,_rush,_burn,_power,_invin,_rank,_black,_blow,_burnt;
    int _v;//速度
    int _step;//
    int _xtemp,_ytemp;//记录坦克上次的位置
    int _count;//记录大招次数
    int _liveValue,_maxLive;
    static QList<QImage> TankImgs;
    static QList<QImage> bTankImgs;
    static QList<QImage> uTankImgs;
    static QList<QImage> ubTankImgs;
};

#endif // TANK_H
