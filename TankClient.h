#ifndef TANKCLIENT_H
#define TANKCLIENT_H
#include <QMainWindow>
#include <QPainter>
#include <QRect>
#include <QPoint>
#include <QImage>
#include <QIcon>
#include <QPushButton>
#include <QKeyEvent>
#include "Tank.h"
#include "Bullet.h"
#include "Map.h"
#include <QAction>
#include <QSignalMapper>
#include <QMediaPlayer>
#include <QUrl>
#include <QDesktopServices>
#include "Prop.h"
class Explode;
class Wall;

class TankClient : public QMainWindow
{
    Q_OBJECT
public:
    TankClient(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void timerEvent(QTimerEvent *);
    void keyPressEvent(QKeyEvent *e);
    void keyReleaseEvent(QKeyEvent *e);
    void AllObject();
    void fireAll();
   // void setList(QList<QAction*> as,QMenu* m);
    ~TankClient();
    static const int GAME_WIDTH = 1320;
    static const int GAME_HEIGHT = 960;

    bool _start;
    bool _pause;
    bool _gameover,_victory;
    bool _superf;
    Tank* _mytank1;
    Tank* _mytank2;
    Prop* _center;
    Prop* _LU;
    Prop* _LD;
    Prop* _RU;
    Prop* _RD;
    QMediaPlayer* _myPlayer1;//start
    QMediaPlayer* _myPlayer2;//fire
    QMediaPlayer* _myPlayer2_;
    QMediaPlayer* _myPlayer3;
    QMediaPlayer* _myPlayer4;//explode
    QMediaPlayer* _myPlayer4_;
    int _score;//得分
    int _pstart;
    int _x1,_x2,_y1,_y2;
    int _x1t,_x2t,_y1t,_y2t;
    int _level;//关卡
    bool _finish;//是否结束编辑地图
    void init();
    void initBtn();
    void connectBtn();
    void initMenu();
    void makeProps();
    void makeBlackholes(QList<Wall*> ws);
    bool _edit;//编辑
    bool _edited;
    bool _double;
    bool _choose;
    bool _stop;
    int _timer1;
    int _timer2;//edit
    int _timer3;//其他道具
    int _timer4;//黑洞
    int _timer5;

//    Prop* _bh1;
//    Prop* _bh2;
//    int _ibhmax;//每局黑洞最大数
    int _testi;
    QTime _time;
    QSignalMapper * _mapper;
    QPushButton* _levels[22];
    Map _editmap;
    Map _maps[20];
    QList<Bullet*> _bullets;
    QList<Tank*> _etanks;
    QList<Wall*> _myWall;//
    QList<Explode*> _explodes;
    QList<QPushButton*> _button;
    QList<QIcon*> _levelIcons;
    QList<QIcon*> _MenuIcons;
    QList<Prop*> _props;
    QList<Prop*> _bh;
    static QList<QImage> LogoImgs;
    static QList<QImage> LevelImgs;
    static QList<QImage> MenuImgs;
//    int _step;
private slots:
    void pressStart();
    void pressRestart();
    void pressEdit();
    void pressNext();
    void pressChoose();
    void setLevel(int i);
    void changePlayer();
    void pressLastLevel();
    void pressNextLevel();
};

#endif // TANKCLIENT_H
