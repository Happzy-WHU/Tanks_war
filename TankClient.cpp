#include "TankClient.h"
#include <QPushButton>
#include "Tank.h"
#include "Bullet.h"
#include "Explode.h"
#include <QString>
#include "Wall.h"
#include <QDebug>
#include <QSize>
QList<QImage> TankClient::LogoImgs;
QList<QImage> TankClient::LevelImgs;
QList<QImage> TankClient::MenuImgs;
//QList<QImage> Tank::TankImgs;

TankClient::TankClient(QWidget *parent) : QMainWindow(parent)
{
    this->_start = false;
    this->_gameover = false;
    this->_victory = false;
    this->_finish = false;
    this->_stop = false;
    this->_edit = false;
    this->_double = false;
    this->_choose = false;
    this->_superf = true;
    this->_center = NULL;
    this->_LU = NULL;
    this->_LD = NULL;
    this->_RU = NULL;
    this->_RD = NULL;
    this->_testi = 0;
    this->_pstart = 0;
    this->_level = 1;
    this->_pause = false;
    this->_edited = false;
    this->_score = 0;
    this->_x1t = this->_x2t = this->_y1t = this->_y2t = 100;
    _mapper = new QSignalMapper();
    _myPlayer2 = new QMediaPlayer();
    _myPlayer2->setMedia(QUrl("qrc://res/images/fire.mp3"));
    _myPlayer2->setVolume(200);
    _myPlayer2_ = new QMediaPlayer();
    _myPlayer2_->setMedia(QUrl("qrc://res/images/fire2.mp3"));
    _myPlayer2_->setVolume(200);
    _myPlayer1 = new QMediaPlayer();
    _myPlayer1->setMedia(QUrl("qrc://res/images/start.mp3"));
    _myPlayer1->setVolume(80);
    _myPlayer3 = new QMediaPlayer();
    _myPlayer3->setMedia(QUrl("qrc://res/images/boom.mp3"));
    _myPlayer3->setVolume(80);
    _myPlayer4 = new QMediaPlayer();
    _myPlayer4->setMedia(QUrl("qrc://res/images/fire3.mp3"));
    _myPlayer4->setVolume(200);
    _myPlayer4_ = new QMediaPlayer();
    _myPlayer4_->setMedia(QUrl("qrc://res/images/fire3.mp3"));
    _myPlayer4_->setVolume(200);
    Tank::init();//将图片存入相应的数组
    setWindowTitle("坦克大战");
    //setStyleSheet("image:url(:/images/BG.gif)");//设置背景图片
    //setStyleSheet("image:url(:/images/grass.jpg)");
    setStyleSheet("image:url(:/images/BG.png)");
    setWindowIcon(QIcon(":/images/tank.png"));
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);//固定窗口大小
    move(100,20);//设置窗口左上角坐标
    this->init();
    AllObject();//
    initBtn();
    connectBtn();
    //创建按钮
    QPushButton* restartGame = new QPushButton(this);
    _button.push_back(restartGame);//添加按钮到list中
    QPushButton* startGame = new QPushButton(this);
    _button.push_back(startGame);
    QPushButton* editMap = new QPushButton(this);
    _button.push_back(editMap);
    QPushButton* exitGame = new QPushButton(this);
    _button.push_back(exitGame);
    QPushButton* nextLevel = new QPushButton(this);
    _button.push_back(nextLevel);
    QPushButton* chooseLevel = new QPushButton(this);
    _button.push_back(chooseLevel);
    QPushButton* changePlayers = new QPushButton(this);
    _button.push_back(changePlayers);
    QPushButton* last = new QPushButton(this);
    _button.push_back(last);
    QPushButton* next = new QPushButton(this);
    _button.push_back(next);

    _button[0]->setGeometry(480,270,377,120);//重新开始
    _button[1]->setGeometry(480,270,377,120);//开始游戏
    _button[2]->setGeometry(800,450,249,120);//编辑地图
    _button[3]->setGeometry(900,650,120,120);//退出游戏
    _button[4]->setGeometry(540,500,249,120);//下一关
    _button[5]->setGeometry(370,650,120,120);//选择关卡
    _button[6]->setGeometry(300,450,249,120);//模式选择
    _button[7]->setGeometry(295,650,75,120);//上一关.
    _button[8]->setGeometry(490,650,75,120);//下一关.
    initMenu();

    connect(_button[0],SIGNAL(clicked()),this,SLOT(pressRestart()));
    connect(_button[1],SIGNAL(clicked()),this,SLOT(pressStart()));
    connect(_button[2],SIGNAL(clicked()),this,SLOT(pressEdit()));
    connect(_button[3],SIGNAL(clicked()),this,SLOT(close()));
    connect(_button[4],SIGNAL(clicked()),this,SLOT(pressNext()));
    connect(_button[5],SIGNAL(clicked()),this,SLOT(pressChoose()));
    connect(_button[6],SIGNAL(clicked()),this,SLOT(changePlayer()));
    connect(_button[7],SIGNAL(clicked()),this,SLOT(pressLastLevel()));
    connect(_button[8],SIGNAL(clicked()),this,SLOT(pressNextLevel()));


    for(int i = 0 ; i < _button.size() ; i++)
    {
        _button[i]->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    }
    for(int i = 0 ; i < 22 ; i++)
    {
        _levels[i]->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    }
    _timer1 = startTimer(60);//每 x s  执行一次timerEvent
 //   _timer2 = startTimer(250);
    //QDesktopServices::openUrl(QUrl("qrc://res/images/help.html"));
    //QDesktopServices::openUrl(QUrl(":/images/help.html"));
   // QDesktopServices::openUrl(QUrl("E:/qt-workspace/Tanks_War/images/help.html"));
    QDesktopServices::openUrl(QUrl("./help.html"));
}
TankClient::~TankClient()
{}
void TankClient::pressLastLevel()
{
    if(_level>1)
    {
        _level--;
        this->init();
    }
    else if(_level == 1)
    {
        _level = 20;
        this->init();
    }
    _button[5]->setIcon(*_levelIcons[_level-1]);
}
void TankClient::pressNextLevel()
{
    if(_level<20)
    {
        _level++;
        this->init();
    }
    else if(_level == 20)
    {
        _level = 1;
        this->init();
    }
    _button[5]->setIcon(*_levelIcons[_level-1]);
}
void TankClient::initMenu()
{
    for(int i = 0 ; i < _button.size()+2 ; i++)
    {
        _MenuIcons.push_back(new QIcon());
    }
    _MenuIcons[0]->addFile(":/images/start.png");//开始
    _MenuIcons[1]->addFile(":/images/single.png");//danren
    _MenuIcons[2]->addFile(":/images/edit.png");//编辑
    _MenuIcons[3]->addFile(":/images/1.png");//选关
    _MenuIcons[4]->addFile(":/images/left.png");//左
    _MenuIcons[5]->addFile(":/images/right.png");//右
    _MenuIcons[6]->addFile(":/images/exit.png");//退出
    _MenuIcons[7]->addFile(":/images/nextlevel.png");//下一关
    _MenuIcons[8]->addFile(":/images/restart.png");//restart
    _MenuIcons[9]->addFile(":/images/double.png");//shuangren
    _MenuIcons[10]->addFile(":/images/continue.png");//继续游戏

    _button[1]->setIcon(*_MenuIcons[0]);
    _button[6]->setIcon(*_MenuIcons[1]);
    _button[2]->setIcon(*_MenuIcons[2]);
    _button[5]->setIcon(*_MenuIcons[3]);
    _button[7]->setIcon(*_MenuIcons[4]);
    _button[8]->setIcon(*_MenuIcons[5]);
    _button[3]->setIcon(*_MenuIcons[6]);
    _button[4]->setIcon(*_MenuIcons[7]);
    _button[0]->setIcon(*_MenuIcons[8]);
    for(int i = 0 ; i < _button.size() ; i++)
    {
        _button[i]->setIconSize(_button[i]->size());
        _button[i]->setFlat(true);
    }


}

void TankClient::changePlayer()
{
    _double = !_double;
    if(_double)
    {
        _button[6]->setIcon(*_MenuIcons[9]);
    }
    else
    {
        _button[6]->setIcon(*_MenuIcons[1]);
    }
}
void TankClient::initBtn()
{
    for(int i = 0 ; i < 22 ; i++)
    {
        _levelIcons.push_back(new QIcon());
        _levels[i] = new QPushButton(this);//"第"+QString::number(i+1)+"关",
        _levels[i]->hide();
        _levels[i]->setFlat(true);
    }
    for(int i = 0 ; i < 5 ; i++)
    {
        _levels[i]->setGeometry(220*(i+1)-50,50,120,120);
    }
    for(int i = 5 ; i < 10 ; i++)
    {
        _levels[i]->setGeometry(220*(i-4)-50,250,120,120);
    }
    for(int i = 10 ; i < 15 ; i++)
    {
        _levels[i]->setGeometry(220*(i-9)-50,450,120,120);
    }
    for(int i = 15 ; i < 20 ; i++)
    {
        _levels[i]->setGeometry(220*(i-14)-50,650,120,120);
    }
    _levels[20]->setGeometry(940,800,249,120);
    _levels[21]->setGeometry(160,800,249,120);
    _levelIcons[0]->addFile(":/images/1.png");
    _levelIcons[1]->addFile(":/images/2.png");
    _levelIcons[2]->addFile(":/images/3.png");
    _levelIcons[3]->addFile(":/images/4.png");
    _levelIcons[4]->addFile(":/images/5.png");
    _levelIcons[5]->addFile(":/images/6.png");
    _levelIcons[6]->addFile(":/images/7.png");
    _levelIcons[7]->addFile(":/images/8.png");
    _levelIcons[8]->addFile(":/images/9.png");
    _levelIcons[9]->addFile(":/images/10.png");
    _levelIcons[10]->addFile(":/images/11.png");
    _levelIcons[11]->addFile(":/images/12.png");
    _levelIcons[12]->addFile(":/images/13.png");
    _levelIcons[13]->addFile(":/images/14.png");
    _levelIcons[14]->addFile(":/images/15.png");
    _levelIcons[15]->addFile(":/images/16.png");
    _levelIcons[16]->addFile(":/images/17.png");
    _levelIcons[17]->addFile(":/images/18.png");
    _levelIcons[18]->addFile(":/images/19.png");
    _levelIcons[19]->addFile(":/images/20.png");
    _levelIcons[20]->addFile(":/images/return.png");
    _levelIcons[21]->addFile(":/images/sure.png");
    for(int i = 0 ; i < 22 ; i++)
    {
        _levels[i]->setIcon(*_levelIcons[i]);
        _levels[i]->setIconSize(_levels[i]->size());
    }

}
void TankClient::makeProps()
{
    int x = (int)(qrand()%84);
    int y = (int)(qrand()%60);
    int buf=(int)(qrand()%7);
    BUFF _mbuf=False;
    switch (buf) {
    case 0:_mbuf=Frez; break;
    case 1:_mbuf=Rush;break;
    case 2:_mbuf=Burn;break;
    case 3:_mbuf=Power; break;
    case 4:_mbuf=Invin;break;
    case 5:_mbuf=Rank;break;
    case 6:_mbuf=LiveUp;break;
    default: break;
    }
    Prop* p=new Prop(x*15,y*15,45,45,this,_mbuf);
    _props.push_back(p);
}

void TankClient::makeBlackholes(QList<Wall*> ws)
{
//    int _x1=(int)(qrand()%84);//黑洞1号横纵坐标
//    int _y1=(int)(qrand()%60);
//    int _x2=(int)(qrand()%84);//黑洞2号横纵坐标
//    int _y2=(int)(qrand()%60);
//    if((_x1>_x2?_x1-_x2:_x2-_x1)>=6&&(_y1>_y2?_y1-_y2:_y2-_y1)>=6)
//    {
//        if(_bh1 != NULL)
//        {
//            delete _bh1;
//            _bh1 = NULL;
//        }
//        if(_bh2 != NULL)
//        {
//            delete _bh2;
//            _bh2 = NULL;
//        }
//        _bh1 = new Prop(_x1*15,_y1*15,30,30,this,BlackHole);
//        _bh2 = new Prop(_x2*15,_y2*15,30,30,this,BlackHole);
//    }
    _x1 = (int)(qrand()%84);
    _x2 = (int)(qrand()%84);
    _y1 = (int)(qrand()%60);
    _y2 = (int)(qrand()%60);
    int k = 0;
    int m = 0;
    for(int i = 0 ; i < ws.size() ; i++)
    {
        if(ws[i]->_type==Iron||ws[i]->_type==River)
        {
            m++;
            if((((15*_y1>=ws[i]->_y+90||15*_y1<=ws[i]->_y-90)&&(15*_x1>=ws[i]->_x+90||15*_x1<=ws[i]->_x-90))||
                ((15*_y2>=ws[i]->_y+90||15*_y2<=ws[i]->_y-90)&&(15*_x2>=ws[i]->_x+90||15*_x2<=ws[i]->_x-90)))&&((_x1>_x2?_x1-_x2:_x2-_x1)>=6&&(_y1>_y2?_y1-_y2:_y2-_y1)>=6))
            {
                k++;
            }
        }
    }
    if(k==m)
    {
        while(_bh.size()>0)
        {
            _bh.removeOne(_bh[0]);
        }
        _x1t = _x1;
        _x2t = _x2;
        _y1t = _y1;
        _y2t = _y2;
        _bh.push_back(new Prop(15*_x1,15*_y1,60,60,this,BlackHole));
        _bh.push_back(new Prop(15*_x2,15*_y2,60,60,this,BlackHole));
    }
    else
    {
        if(_x1t == 100&& _x2t == 100 && _y1t == 100&& _y2t == 100)
        {
            return;
        }
        else
        {
            _x1 = _x1t;
            _y1 = _y1t;
            _x2 = _x2t;
            _y2 = _y2t;
        }
    }
    _testi++;
    qDebug()<<"OK"<<_testi;
}

void TankClient::pressChoose()
{
    _choose = true;
}
void TankClient::connectBtn()
{
    for(int j = 0 ; j < 22 ; j++)
    {
        connect(_levels[j],SIGNAL(clicked(bool)),_mapper,SLOT(map()));
        _mapper->setMapping(_levels[j],j);
    }
    connect(_mapper,SIGNAL(mapped(int)),this,SLOT(setLevel(int)));
}
void TankClient::setLevel(int i)
{
    if(i < 20)
    {
        this->_level = i+1;
        _button[5]->setIcon(*_levelIcons[i]);
        _button[5]->setIconSize(_button[5]->size());
        this->init();//其他关的内存
    }
    if(i == 21|| i == 20)
    {
        this->_choose = false;
    }
}
void TankClient::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    if(_edit)
    {
        for(int i = 0 ; i < _button.size() ; i++)
        {
            _button[i]->hide();//隐藏按钮
        }
        for(int i = 0 ; i < 22 ; i++)
        {
            _levels[i]->hide();
        }
        for(int i = 0 ; i < _editmap._myWall.size() ; i++)
        {
            _editmap._myWall[i]->drawWall(p);
        }
        return;
    }
    if(_choose)
    {
        for(int i = 0 ; i < _button.size() ; i++)
        {
            _button[i]->hide();//隐藏按钮
        }
        for(int i = 0 ; i < 22 ; i++)
        {
            _levels[i]->show();
        }
        return;
    }
    if(_start)//游戏开始
    {
        _timer5 = startTimer(2000);//ceshi
        _button[5]->setIcon(*_levelIcons[_level-1]);
        for(int i = 0 ; i < _props.size() ; i++)
        {
            _props[i]->drawProp(p);
        }
        for(int i = 0 ; i < 22 ; i++)
        {
            _levels[i]->hide();
        }
        for(int i = 0 ; i < _button.size() ; i++)
        {
            _button[i]->hide();//隐藏按钮
        }
        if(_edited)
        {
            for(int i = 0 ; i < _editmap._myWall.size() ; i++)//画加速带，岩浆
            {
                if(_editmap._myWall[i]->_type==Lava||_editmap._myWall[i]->_type==Ice)
                    _editmap._myWall[i]->drawWall(p);
            }
            for(int i = 0 ; i < _bh.size() ; i++)//画虫洞
            {
                _bh[i]->drawProp(p);
            }
            _mytank1->drawTank(p);//画主战坦克
            _mytank1->TankHitWalls(_editmap._myWall);//主战坦克和所有墙壁进行碰撞检测
            _mytank1->TankHitProps(_props);
            _mytank1->TankHitWs(_editmap._myWall);//检测是否卡在墙里
            _mytank1->TankLeaveBH();
            _mytank1->compare();
            _mytank1->TankHitBlackHole();//坦克碰撞黑洞检测
            if(_double)
            {
                _mytank2->drawTank(p);
                _mytank2->TankHitWalls(_editmap._myWall);
                _mytank2->TankHitBlackHole();
                _mytank2->TankHitWs(_editmap._myWall);
                _mytank2->TankHitProps(_props);
                _mytank2->TankLeaveBH();
                _mytank2->compare();
            }
            for(int i = 0 ; i < _etanks.size() ; i++)//画所有敌军坦克
            {
                _etanks[i]->compare();
                _etanks[i]->TankHitBlackHole();
                _etanks[i]->TankHitWs(_editmap._myWall);
                _etanks[i]->TankHitTank(_mytank1);
                if(_double&&_mytank2->_live)
                    _etanks[i]->TankHitTank(_mytank2);
                _etanks[i]->TankHitWalls(_editmap._myWall);//所有敌军坦克与墙壁进行碰撞检测
                _etanks[i]->TankHitProps(_props);
                _etanks[i]->drawTank(p);
            }
            for(int i = 0 ; i < _editmap._myWall.size() ; i++)//画其他墙壁
            {
                if(_editmap._myWall[i]->_type!=Lava&&_editmap._myWall[i]->_type!=Ice&&_editmap._myWall[i]->_type!=Grass)
                    _editmap._myWall[i]->drawWall(p);
            }
            for(int i = 0 ; i < _bullets.size() ; i++)//画所有子弹
            {
                _bullets[i]->hitBullets(_bullets);
                _bullets[i]->hitTanks(_etanks);//所有子弹与所有敌军坦克做碰撞检测
                _bullets[i]->hitTank(_mytank1);//所有子弹与主战坦克做碰撞检测
                if(_double&&_mytank2->_live)
                    _bullets[i]->hitTank(_mytank2);
                _bullets[i]->hitWalls(_editmap._myWall);//所有子弹与所有墙壁做碰撞检测
                _bullets[i]->drawBullet(p);
            }
            for(int i = 0 ; i < _editmap._myWall.size() ; i++)//画其他墙壁
            {
                if(_editmap._myWall[i]->_type==Grass)
                    _editmap._myWall[i]->drawWall(p);
            }

            for(int i = 0 ; i < _bh.size() ; i++)
            {
                _bh[i]->hitWalls(_editmap._myWall);//黑洞碰墙检测
            }
//            if(_bh1 != NULL)
//                _bh1->hitWalls(_editmap._myWall);           


        }
        else
        {
            if(_level==20)
            {
                killTimer(_timer4);
                while(_bh.size()>0)
                    _bh.removeOne(_bh[0]);
                if(_center==NULL)
                    _center = new Prop(21*30,15*30,60,60,this,BlackHole);
                if(_LU==NULL)
                    _LU = new Prop(0,0,60,60,this,BlackHole);
                if(_LD==NULL)
                    _LD = new Prop(0,30*30,60,60,this,BlackHole);
                if(_RU==NULL)
                    _RU = new Prop(42*30,0,60,60,this,BlackHole);
                if(_RD==NULL)
                    _RD = new Prop(42*30,30*30,60,60,this,BlackHole);
            }
            for(int i = 0 ; i < _maps[_level-1]._myWall.size() ; i++)//画加速带，岩浆
            {
                if(_maps[_level-1]._myWall[i]->_type==Lava||_maps[_level-1]._myWall[i]->_type==Ice)
                    _maps[_level-1]._myWall[i]->drawWall(p);
            }
            for(int i = 0 ; i < _bh.size() ; i++)//画虫洞
            {
                _bh[i]->drawProp(p);
            }
            if(_level==20)
            {
                _center->drawProp(p);
                qDebug()<<"center:"<<_center->_blacki;
                _LU->drawProp(p);
                _LD->drawProp(p);
                _RU->drawProp(p);
                _RD->drawProp(p);
            }

            _mytank1->drawTank(p);//画主战坦克
            _mytank1->TankHitWalls(_maps[_level-1]._myWall);//主战坦克和所有墙壁进行碰撞检测
            _mytank1->TankHitProps(_props);
            _mytank1->TankHitWs(_maps[_level-1]._myWall);//检测是否卡在墙里
            _mytank1->TankLeaveBH();
            _mytank1->compare();
            _mytank1->TankHitBlackHole();//坦克碰撞黑洞检测
            if(_double)
            {
                _mytank2->drawTank(p);
                _mytank2->TankHitWalls(_maps[_level-1]._myWall);
                _mytank2->TankHitBlackHole();
                _mytank2->TankHitWs(_maps[_level-1]._myWall);
                _mytank2->TankHitProps(_props);
                _mytank2->TankLeaveBH();
                _mytank2->compare();
            }
            for(int i = 0 ; i < _etanks.size() ; i++)//画所有敌军坦克
            {
                _etanks[i]->compare();
                _etanks[i]->TankHitBlackHole();
                _etanks[i]->TankHitWs(_maps[_level-1]._myWall);
                _etanks[i]->TankHitTank(_mytank1);
                if(_double&&_mytank2->_live)
                    _etanks[i]->TankHitTank(_mytank2);
                _etanks[i]->TankHitWalls(_maps[_level-1]._myWall);//所有敌军坦克与墙壁进行碰撞检测
                _etanks[i]->TankHitProps(_props);
                _etanks[i]->drawTank(p);
            }
            for(int i = 0 ; i < _maps[_level-1]._myWall.size() ; i++)//画其他墙壁
            {
                if(_maps[_level-1]._myWall[i]->_type!=Lava&&_maps[_level-1]._myWall[i]->_type!=Ice&&_maps[_level-1]._myWall[i]->_type!=Grass)
                    _maps[_level-1]._myWall[i]->drawWall(p);
            }
            for(int i = 0 ; i < _bullets.size() ; i++)//画所有子弹
            {
                _bullets[i]->hitBullets(_bullets);
                _bullets[i]->hitTanks(_etanks);//所有子弹与所有敌军坦克做碰撞检测
                _bullets[i]->hitTank(_mytank1);//所有子弹与主战坦克做碰撞检测
                if(_double&&_mytank2->_live)
                    _bullets[i]->hitTank(_mytank2);
                _bullets[i]->hitWalls(_maps[_level-1]._myWall);//所有子弹与所有墙壁做碰撞检测
                _bullets[i]->drawBullet(p);
            }
            for(int i = 0 ; i < _maps[_level-1]._myWall.size() ; i++)//画其他墙壁
            {
                if(_maps[_level-1]._myWall[i]->_type==Grass)
                    _maps[_level-1]._myWall[i]->drawWall(p);
            }

//            for(int i = 0 ; i < _bh.size() ; i++)
//            {
//                _bh[i]->hitWalls(_maps[_level-1]._myWall);//黑洞碰墙检测
//            }
//            if(_bh.size()>0)
//                _bh[0]->hitWalls(_maps[_level-1]._myWall);

        }
        for(int i = 0 ; i < _explodes.size() ; i++)//画所有爆炸
        {
            _explodes[i]->drawExplode(p);
        }

        if(!_mytank1->_live)//如果主战坦克挂了则显示gameover
        {
            if(_double&&!_mytank2->_live||!_double)
            {
               // if(_edited) _edited = false;
                for(int i = 0 ; i < _bullets.size() ; i++)
                {
                    _bullets[i]->_live = false;
                }
                for(int i = 0 ; i < _bh.size() ; i++)
                {
                    _bh[i]->_live = false;
                }
                while(_etanks.size()>0)
                    _etanks.removeOne(_etanks[0]);
                while (_props.size()>0)
                    _props.removeOne(_props[0]);
                this->_start = false;
                this->_score = 0;
                this->_gameover = true;
            }
        }
        if(_etanks.size()==0)//如果敌军坦克都挂了则显示victory
        {
           // if(_edited) _edited = false;
            while(_bullets.size()>0)
            {
                _bullets.removeOne(_bullets[0]);
            }
            for(int i = 0 ; i < _bh.size() ; i++)
            {
                _bh[i]->_live = false;
            }
            while(_etanks.size()>0)
                _etanks.removeOne(_etanks[0]);
            while (_props.size()>0)
                _props.removeOne(_props[0]);
            this->_start = false;
            this->_victory = true;
        }
        p.drawText(10,10,"关卡:"+QString::number(_level));
        p.drawText(10,30,"得分："+QString::number(_score));
        p.drawText(10,50,"敌坦数量："+QString::number(_etanks.size()));
        p.drawText(10,70,"剩余大招："+QString::number(_mytank1->_count));
    }
    else
    {
        for(int i = 0 ; i < 22 ; i++)
        {
            _levels[i]->hide();
        }
        if(_gameover)
        {
            p.drawImage(320,60,LogoImgs[1]);
        }
        else if(_victory)
        {
            p.drawImage(400,30,LogoImgs[2]);
        }
        else
        {
            p.drawImage(280,30,TankClient::LogoImgs[0]);
        }
        if(_gameover)
        {
            _button[0]->show();
            _button[1]->hide();
            _button[2]->hide();
            _button[3]->show();
            _button[4]->show();
            _button[5]->show();
            if(_edited)
                _button[5]->hide();
            killTimer(_timer3);
            killTimer(_timer4);
        }
        else if(_victory)
        {
            _button[0]->show();
            _button[1]->hide();
            _button[2]->hide();
            _button[3]->show();
            _button[4]->show();
            _button[5]->show();
            if(_edited)
                _button[5]->hide();
            killTimer(_timer3);
            killTimer(_timer4);
        }
        else
        {
            if(!_pause)
            {
                for(int i = 1 ; i < _button.size() ; i++)
                {
                    _button[i]->show();
                }
                _button[4]->hide();
                _button[0]->hide();
            }
            else if(_pause)
            {
                for(int i = 0 ; i < _button.size() ; i++)
                {
                    _button[i]->hide();
                }
                _button[1]->show();
                _button[3]->show();
            }
        }
    }
}
void TankClient::timerEvent(QTimerEvent *e)
{
    if(e->timerId() == _timer1)
    {
        update();
        return;
    }
    else if(e->timerId() == _timer2)//编辑
    {
        update();
        return;
    }
    else if(e->timerId() == _timer3)//道具
    {
        if(_props.size()>=5)
            return;
        else
        {
            makeProps();
            return;
        }
    }
    else if(e->timerId() == _timer4)//虫洞
    {
        makeBlackholes(_maps[_level-1]._myWall);
        //qDebug()<<"bh";
        return;
    }
    else if(e->timerId() == _timer5)
    {
        qDebug()<<"执行了";
        killTimer(_timer5);
    }
}

void TankClient::keyPressEvent(QKeyEvent *e)
{
    if(_edit)
    {
        killTimer(_timer1);
        _timer2 = startTimer(1000);
        if(e->key() == Qt::Key_N)
        {
            qDebug()<<"N";
            if(_editmap._myWall.size()==0)
            {
                Wall * temp = new Wall(0,0,30,30,Brick,this,30);
                _editmap._myWall.push_back(temp);
            }
            else if(_editmap._myWall.size()>0 && (_editmap._myWall[_editmap._myWall.size()-1]->_sure))
            {
                Wall * temp = new Wall(_editmap._myWall[_editmap._myWall.size()-1]->_x,_editmap._myWall[_editmap._myWall.size()-1]->_y,30,30,Brick,this,30);
                _editmap._myWall.push_back(temp);
            }
            update();
            return;
        }
        else if(e->key() == Qt::Key_Return||e->key() == Qt::Key_Enter)
        {
            this->_finish = true;
            this->_edit = false;
            this->_edited = true;
            killTimer(_timer2);
            _timer1= startTimer(60);
            _mytank1->keyPress(Qt::Key_F2);

//            this->_finish = true;
//            this->_edit = false;
//            this->_start = true;
//            this->_edited = true;

            return;
        }
        else
        {
            if(_editmap._myWall.size()>0 && !(_editmap._myWall[_editmap._myWall.size()-1]->_sure))
            {
                _editmap._myWall[_editmap._myWall.size()-1]->keyPress(e->key());
            }
            update();
            return;
        }

    }
    if(_mytank1->_live||_mytank2->_live)
    {
        if(_double&&_mytank2->_live&&(e->key()==Qt::Key_Up||e->key()==Qt::Key_Down||e->key()==Qt::Key_Left||e->key()==Qt::Key_Right||e->key()==Qt::Key_O||e->key()==Qt::Key_P))
            _mytank2->keyPress(e->key());
        else if(_mytank1->_live&&(e->key()==Qt::Key_W||e->key()==Qt::Key_S||e->key()==Qt::Key_A||e->key()==Qt::Key_D||e->key()==Qt::Key_J||e->key()==Qt::Key_K||e->key()==Qt::Key_F1||e->key()==Qt::Key_F2||e->key()==Qt::Key_Escape))
            _mytank1->keyPress(e->key());
        else if(!_mytank1->_live&&(e->key()==Qt::Key_F1||e->key()==Qt::Key_F2||e->key()==Qt::Key_Escape))
            _mytank1->keyPress(e->key());
    }
    else
    {
        switch (e->key())
        {
        case Qt::Key_F1: _mytank1->keyPress(Qt::Key_F1);break;
        case Qt::Key_Escape: _mytank1->keyPress(Qt::Key_Escape);break;
        default:break;
        }
    }
}
void TankClient::keyReleaseEvent(QKeyEvent *e)
{
    if(_edit)
    {
        if(_editmap._myWall.size()==0) return;
        _editmap._myWall[_editmap._myWall.size()-1]->keyRelease(e->key());
        update();
        return;
    }
    if(_mytank1->_live||_mytank2->_live)
    {
        if(e->key()==Qt::Key_Up||e->key()==Qt::Key_Down||e->key()==Qt::Key_Left||e->key()==Qt::Key_Right||e->key()==Qt::Key_O||e->key()==Qt::Key_P)
            _mytank2->keyRelease(e->key());
        else//(e->key()==Qt::Key_W||e->key()==Qt::Key_S||e->key()==Qt::Key_A||e->key()==Qt::Key_D||e->key()==Qt::Key_J||e->key()==Qt::Key_K)
            _mytank1->keyRelease(e->key());
    }
}
void TankClient::pressStart()
{
    if(_pstart==0)
    {
        while(_etanks.size()>0)
            _etanks.removeOne(_etanks[0]);
        delete _mytank1;
        delete _mytank2;
        _mytank1 = NULL;
        _mytank2 = NULL;
        AllObject();
    }
    _mytank1->keyPress(Qt::Key_F2);
//    _timer3 = startTimer(3000);
//    _timer4 = startTimer(3000);
}
void TankClient::pressRestart()
{
    //_pstart = 0;
    _mytank1->keyPress(Qt::Key_F1);
//    _timer3 = startTimer(3000);
//    _timer4 = startTimer(3000);
}
void TankClient::pressEdit()
{
    _edit = true;
}
void TankClient::pressNext()
{
    for(int i = 0 ; i < _maps[_level-1]._myWall.size() ; i++)
    {
        _maps[_level-1]._myWall[i]->_live = false;
    }
    delete _mytank1;
    delete _mytank2;
    while(_bh.size()>0)
        _bh.removeOne(_bh[0]);
    if(_level == 20)
    {
        _level = 1;
        delete _center;
        delete _LU;
        delete _LD;
        delete _RU;
        delete _RD;
        _center = NULL;
        _LU = NULL;
        _LD = NULL;
        _RU = NULL;
        _RD = NULL;
    }
    else
        _level++;
    if(_edited)
    {
        _level = 1;
        _edited = false;
    }
    _timer3 = startTimer(3000);
    _timer4 = startTimer(3000);
    AllObject();
    this->init();
    _start = true;
    _victory = false;
}
void TankClient::AllObject()
{

    if(_level != 20)
    {
        _mytank1 = new Tank(20*30,31*30,30,30,this,true,2700);//创建主战坦克对象
        _mytank1->_is1 = true;
        for(int i = 0 ; i < 10+_level/2 ; i++)//创建敌军坦克对象
        {
            Tank* t = new Tank(40+50*i,20,30,30,this,false,900);
            _etanks.push_back(t);
        }
        _mytank2 = new Tank(22*30,31*30,30,30,this,true,2700);//创建二号玩家
    }
    else
    {
        _mytank1 = new Tank(0,930,30,30,this,true,2700);//创建主战坦克对象
        _mytank1->_is1 = true;
        _etanks.push_back(new Tank(5*30,6*30,30,30,this,false,900));
        _etanks.push_back(new Tank(7*30,6*30,30,30,this,false,900));
        _etanks.push_back(new Tank(6*30,7*30,30,30,this,false,900));
        _etanks.push_back(new Tank(5*30,8*30,30,30,this,false,900));
        _etanks.push_back(new Tank(7*30,8*30,30,30,this,false,900));

        _etanks.push_back(new Tank(5*30,21*30,30,30,this,false,900));
        _etanks.push_back(new Tank(7*30,21*30,30,30,this,false,900));
        _etanks.push_back(new Tank(6*30,22*30,30,30,this,false,900));
        _etanks.push_back(new Tank(5*30,23*30,30,30,this,false,900));
        _etanks.push_back(new Tank(7*30,23*30,30,30,this,false,900));

        _etanks.push_back(new Tank(37*30,8*30,30,30,this,false,900));
        _etanks.push_back(new Tank(39*30,8*30,30,30,this,false,900));
        _etanks.push_back(new Tank(38*30,9*30,30,30,this,false,900));
        _etanks.push_back(new Tank(37*30,10*30,30,30,this,false,900));
        _etanks.push_back(new Tank(39*30,10*30,30,30,this,false,900));

        _etanks.push_back(new Tank(37*30,23*30,30,30,this,false,900));
        _etanks.push_back(new Tank(39*30,23*30,30,30,this,false,900));
        _etanks.push_back(new Tank(38*30,24*30,30,30,this,false,900));
        _etanks.push_back(new Tank(37*30,25*30,30,30,this,false,900));
        _etanks.push_back(new Tank(39*30,25*30,30,30,this,false,900));
        _mytank2 = new Tank(1290,930,30,30,this,true,2700);//创建二号玩家
    }

}
void TankClient::init()
{
    switch (_level)
    {
    case 1: set1(this);break;
    case 2: set2(this);break;
    case 3: set3(this);break;
    case 4: set4(this);break;
    case 5: set5(this);break;
    case 6: set6(this);break;
    case 7: set7(this);break;
    case 8: set8(this);break;
    case 9: set9(this);break;
    case 10: set10(this);break;
    case 11: set11(this);break;
    case 12: set12(this);break;
    case 13: set13(this);break;
    case 14: set14(this);break;
    case 15: set15(this);break;
    case 16: set16(this);break;
    case 17: set17(this);break;
    case 18: set18(this);break;
    case 19: set19(this);break;
    case 20: set20(this);break;
    default: break;
    }
}

