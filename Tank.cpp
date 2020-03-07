#include "Tank.h"
#include "pub.h"
#include "Bullet.h"
#include "TankClient.h"
#include "Explode.h"
#include "Wall.h"
#include <QDebug>
#include "Prop.h"
#include <cmath>
QList<QImage> Tank::TankImgs;
QList<QImage> Tank::bTankImgs;
QList<QImage> Tank::uTankImgs;
QList<QImage> Tank::ubTankImgs;

Tank::Tank(int x,int y,int w,int h,TankClient* tc,bool good,int liveValue)
{
    this->_x = x;
    this->_y = y;
    this->_w = w;
    this->_h = h;
    this->_invini = 0;
    this->_is1 =false;
    _BU=_BD=_BL=_BR=false;
    this->_tc = tc;
    this->_firstFire = true;
    this->_firstsFire = true;
    _dir = STOP;
    _ptdir = U;
    this->_up = false;
    this->_frez=false;
    this->_rush=false;
    this->_burn=false;
    this->_power=false;
    this->_invin=false;
    this->_rank=false;
    this->_blow = false;
    this->_burnt = false;
    this->_black=true;
    this->_good = good;
    this->_fire = false;
    this->_live = true;
    this->_step = 0;
    this->_superF = false;
    this->_xtemp = this->_ytemp = 0;
    this->_count = 30;
    this->_liveValue = liveValue;
    this->_maxLive = liveValue;
    this->_v = 5;
    for(int i = 0 ; i < 7 ; i++)
    {
        _bs[i] = 60;
    }
}
void Tank::drawTank(QPainter &p)
{
    if(!_live)
    {
        _tc->_etanks.removeOne(this);
        return;
    }
    if(_dir!=STOP)
        _ptdir = _dir;//坦克头朝向
    if(_good)
    {
        if(_is1)//1p
        {
            if(!_rank)
            {
                if(!_blow)
                {
                    switch (_ptdir)
                    {
                    case U: p.drawImage(QRect(_x,_y,30,30),TankImgs[0]);break;
                    case D: p.drawImage(QRect(_x,_y,30,30),TankImgs[1]);break;
                    case L: p.drawImage(QRect(_x,_y,30,30),TankImgs[2]);break;
                    case R: p.drawImage(QRect(_x,_y,30,30),TankImgs[3]);break;

                    case LU: p.drawImage(QRect(_x,_y,30,30),TankImgs[4]);break;
                    case LD: p.drawImage(QRect(_x,_y,30,30),TankImgs[5]);break;
                    case RU: p.drawImage(QRect(_x,_y,30,30),TankImgs[6]);break;
                    case RD: p.drawImage(QRect(_x,_y,30,30),TankImgs[7]);break;
                    default:break;
                    }
                }
                else
                {
                    switch (_ptdir)
                    {
                    case U: p.drawImage(QRect(_x,_y,30,30),bTankImgs[0]);break;
                    case D: p.drawImage(QRect(_x,_y,30,30),bTankImgs[1]);break;
                    case L: p.drawImage(QRect(_x,_y,30,30),bTankImgs[2]);break;
                    case R: p.drawImage(QRect(_x,_y,30,30),bTankImgs[3]);break;

                    case LU: p.drawImage(QRect(_x,_y,30,30),bTankImgs[4]);break;
                    case LD: p.drawImage(QRect(_x,_y,30,30),bTankImgs[5]);break;
                    case RU: p.drawImage(QRect(_x,_y,30,30),bTankImgs[6]);break;
                    case RD: p.drawImage(QRect(_x,_y,30,30),bTankImgs[7]);break;
                    default:break;
                    }
                }
            }
            else
            {
                if(!_blow)
                {
                    switch (_ptdir)
                    {
                    case U: p.drawImage(QRect(_x,_y,30,30),uTankImgs[0]);break;
                    case D: p.drawImage(QRect(_x,_y,30,30),uTankImgs[1]);break;
                    case L: p.drawImage(QRect(_x,_y,30,30),uTankImgs[2]);break;
                    case R: p.drawImage(QRect(_x,_y,30,30),uTankImgs[3]);break;

                    case LU: p.drawImage(QRect(_x,_y,30,30),uTankImgs[4]);break;
                    case LD: p.drawImage(QRect(_x,_y,30,30),uTankImgs[5]);break;
                    case RU: p.drawImage(QRect(_x,_y,30,30),uTankImgs[6]);break;
                    case RD: p.drawImage(QRect(_x,_y,30,30),uTankImgs[7]);break;
                    default:break;
                    }
                }
                else
                {
                    switch (_ptdir)
                    {
                    case U: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[0]);break;
                    case D: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[1]);break;
                    case L: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[2]);break;
                    case R: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[3]);break;

                    case LU: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[4]);break;
                    case LD: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[5]);break;
                    case RU: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[6]);break;
                    case RD: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[7]);break;
                    default:break;
                    }
                }
            }
        }
        else//2p
        {
            if(!_rank)
            {
                if(!_blow)
                {
                    switch (_ptdir)
                    {
                    case U: p.drawImage(QRect(_x,_y,30,30),TankImgs[8]);break;
                    case D: p.drawImage(QRect(_x,_y,30,30),TankImgs[9]);break;
                    case L: p.drawImage(QRect(_x,_y,30,30),TankImgs[10]);break;
                    case R: p.drawImage(QRect(_x,_y,30,30),TankImgs[11]);break;

                    case LU: p.drawImage(QRect(_x,_y,30,30),TankImgs[12]);break;
                    case LD: p.drawImage(QRect(_x,_y,30,30),TankImgs[13]);break;
                    case RU: p.drawImage(QRect(_x,_y,30,30),TankImgs[14]);break;
                    case RD: p.drawImage(QRect(_x,_y,30,30),TankImgs[15]);break;
                    default:break;
                    }
                }
                else
                {
                    switch (_ptdir)
                    {
                    case U: p.drawImage(QRect(_x,_y,30,30),bTankImgs[8]);break;
                    case D: p.drawImage(QRect(_x,_y,30,30),bTankImgs[9]);break;
                    case L: p.drawImage(QRect(_x,_y,30,30),bTankImgs[10]);break;
                    case R: p.drawImage(QRect(_x,_y,30,30),bTankImgs[11]);break;

                    case LU: p.drawImage(QRect(_x,_y,30,30),bTankImgs[12]);break;
                    case LD: p.drawImage(QRect(_x,_y,30,30),bTankImgs[13]);break;
                    case RU: p.drawImage(QRect(_x,_y,30,30),bTankImgs[14]);break;
                    case RD: p.drawImage(QRect(_x,_y,30,30),bTankImgs[15]);break;
                    default:break;
                    }
                }
            }
            else
            {
                if(!_blow)
                {
                    switch (_ptdir)
                    {
                    case U: p.drawImage(QRect(_x,_y,30,30),uTankImgs[8]);break;
                    case D: p.drawImage(QRect(_x,_y,30,30),uTankImgs[9]);break;
                    case L: p.drawImage(QRect(_x,_y,30,30),uTankImgs[10]);break;
                    case R: p.drawImage(QRect(_x,_y,30,30),uTankImgs[11]);break;

                    case LU: p.drawImage(QRect(_x,_y,30,30),uTankImgs[12]);break;
                    case LD: p.drawImage(QRect(_x,_y,30,30),uTankImgs[13]);break;
                    case RU: p.drawImage(QRect(_x,_y,30,30),uTankImgs[14]);break;
                    case RD: p.drawImage(QRect(_x,_y,30,30),uTankImgs[15]);break;
                    default:break;
                    }
                }
                else
                {
                    switch (_ptdir)
                    {
                    case U: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[8]);break;
                    case D: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[9]);break;
                    case L: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[10]);break;
                    case R: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[11]);break;

                    case LU: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[12]);break;
                    case LD: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[13]);break;
                    case RU: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[14]);break;
                    case RD: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[15]);break;
                    default:break;
                    }
                }
            }
        }
    }
    else//etanks
    {
        if(!_rank)
        {
            if(!_blow)
            {
                switch (_ptdir)
                {
                case U: p.drawImage(QRect(_x,_y,30,30),TankImgs[16]);break;
                case D: p.drawImage(QRect(_x,_y,30,30),TankImgs[17]);break;
                case L: p.drawImage(QRect(_x,_y,30,30),TankImgs[18]);break;
                case R: p.drawImage(QRect(_x,_y,30,30),TankImgs[19]);break;

                case LU: p.drawImage(QRect(_x,_y,30,30),TankImgs[20]);break;
                case LD: p.drawImage(QRect(_x,_y,30,30),TankImgs[21]);break;
                case RU: p.drawImage(QRect(_x,_y,30,30),TankImgs[22]);break;
                case RD: p.drawImage(QRect(_x,_y,30,30),TankImgs[23]);break;
                default:break;
                }
            }
            else
            {
                switch (_ptdir)
                {
                case U: p.drawImage(QRect(_x,_y,30,30),bTankImgs[16]);break;
                case D: p.drawImage(QRect(_x,_y,30,30),bTankImgs[17]);break;
                case L: p.drawImage(QRect(_x,_y,30,30),bTankImgs[18]);break;
                case R: p.drawImage(QRect(_x,_y,30,30),bTankImgs[19]);break;

                case LU: p.drawImage(QRect(_x,_y,30,30),bTankImgs[20]);break;
                case LD: p.drawImage(QRect(_x,_y,30,30),bTankImgs[21]);break;
                case RU: p.drawImage(QRect(_x,_y,30,30),bTankImgs[22]);break;
                case RD: p.drawImage(QRect(_x,_y,30,30),bTankImgs[23]);break;
                default:break;
                }
            }
        }
        else
        {
            if(!_blow)
            {
                switch (_ptdir)
                {
                case U: p.drawImage(QRect(_x,_y,30,30),uTankImgs[16]);break;
                case D: p.drawImage(QRect(_x,_y,30,30),uTankImgs[17]);break;
                case L: p.drawImage(QRect(_x,_y,30,30),uTankImgs[18]);break;
                case R: p.drawImage(QRect(_x,_y,30,30),uTankImgs[19]);break;

                case LU: p.drawImage(QRect(_x,_y,30,30),uTankImgs[20]);break;
                case LD: p.drawImage(QRect(_x,_y,30,30),uTankImgs[21]);break;
                case RU: p.drawImage(QRect(_x,_y,30,30),uTankImgs[22]);break;
                case RD: p.drawImage(QRect(_x,_y,30,30),uTankImgs[23]);break;
                default:break;
                }
            }
            else
            {
                switch (_ptdir)
                {
                case U: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[16]);break;
                case D: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[17]);break;
                case L: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[18]);break;
                case R: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[19]);break;

                case LU: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[20]);break;
                case LD: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[21]);break;
                case RU: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[22]);break;
                case RD: p.drawImage(QRect(_x,_y,30,30),ubTankImgs[23]);break;
                default:break;
                }
            }
        }
    }
    if(_invin)
    {
        if(_invini == 0)
            p.drawImage(QRect(_x,_y,_w,_h),QImage(":/images/invin0.png"));
        else if(_invini == 1)
            p.drawImage(QRect(_x,_y,_w,_h),QImage(":/images/invin1.png"));
        _invini++;
        _invini%=2;
    }
    p.setPen(Qt::yellow);//黄色画笔
    p.setBrush(Qt::black);//黑色画刷

    p.drawRect(_x,_y,30,5);
    p.setBrush(Qt::red);
    p.drawRect(_x,_y,30*_liveValue/_maxLive,5);//画坦克生命值
    moveTank();//改变坦克位置
    if(!_good)
        ai();
    pfire();
    psuperFire();
    if(_burnt) _liveValue -= 1;
}
bool Tank::TankHitTank(Tank *t)
{
    if(_live&&getRect().intersects(t->getRect()))
    {
        if(_good !=t->_good)
        {
            _x=_xtemp;
            _y=_ytemp;
            t->_x=t->_xtemp;
            t->_y=t->_ytemp;
            return true;
        }
    }
    return false;
}
void Tank::TankHitTanks(QList<Tank *> ts)
{
    for(int i=0;i<ts.size();i++)
        {
            if(TankHitTank(ts[i]))
                return;
        }

}
void Tank::keyPress(int key)
{
    switch (key)
    {
    case Qt::Key_W: _BU=true;qDebug()<<"W";break;
    case Qt::Key_Up: _BU = true;qDebug()<<"UP";break;
    case Qt::Key_S: _BD=true;qDebug()<<"S";break;
    case Qt::Key_Down: _BD=true;qDebug()<<"DOWN";break;
    case Qt::Key_A: _BL=true;qDebug()<<"A";break;
    case Qt::Key_Left: _BL=true;qDebug()<<"LEFT";break;
    case Qt::Key_D: _BR=true;qDebug()<<"D";break;
    case Qt::Key_Right: _BR=true;qDebug()<<"RIGHT";break;
    case Qt::Key_J: _fire = true;qDebug()<<"J";break;
    case Qt::Key_O: _fire = true;qDebug()<<"O";break;
    case Qt::Key_K:  _superF = true;break;
    case Qt::Key_P:_superF = true;break;
    case Qt::Key_F2:
        {            
            _tc->_start = !_tc->_start;
            _tc->_pause = !_tc->_pause;/*!_tc->_pause;*/
            if(!_tc->_start)//暂停/继续
            {
                _tc->_button[1]->setIcon(*(_tc->_MenuIcons[10]));
                _tc->killTimer(_tc->_timer3);
                _tc->killTimer(_tc->_timer4);//有点问题
            }            
            else
            {                
                _tc->_button[1]->setIcon(*(_tc->_MenuIcons[0]));
                _tc->_timer3 = _tc->startTimer(3000);
                _tc->_timer4 = _tc->startTimer(3000);//有点问题
            }
            if(_tc->_pstart == 0&&_tc->_start)
                _tc->_myPlayer1->play();
            _tc->_pstart++;
            break;
        }
    case Qt::Key_F1:
        {//重启游戏
            while(_tc->_bullets.size())
                _tc->_bullets.removeOne(_tc->_bullets[0]);
            while(_tc->_etanks.size())
                _tc->_etanks.removeOne(_tc->_etanks[0]);
            while(_tc->_maps[_tc->_level-1]._myWall.size())
                _tc->_maps[_tc->_level-1]._myWall.removeOne(_tc->_maps[_tc->_level-1]._myWall[0]);
            while (_tc->_bh.size()>0)
                _tc->_bh.removeOne(_tc->_bh[0]);
            while (_tc->_props.size())
                _tc->_props.removeOne(_tc->_props[0]);
            if(_tc->_level == 20)
            {
                if(_tc->_center!=NULL&&_tc->_LU!=NULL&&_tc->_LD!=NULL&&_tc->_RU!=NULL&&_tc->_RD!=NULL)
                {
                    delete _tc->_center;
                    delete _tc->_LU;
                    delete _tc->_LD;
                    delete _tc->_RU;
                    delete _tc->_RD;
                    _tc->_center = NULL;
                    _tc->_LU = NULL;
                    _tc->_LD = NULL;
                    _tc->_RU = NULL;
                    _tc->_RD = NULL;
                }
            }
            delete _tc->_mytank1;
            delete _tc->_mytank2;
            _tc->_mytank1 = NULL;
            _tc->_mytank2 = NULL;
            _tc->init();
            _tc->AllObject();
            _tc->killTimer(_tc->_timer3);
            _tc->killTimer(_tc->_timer4);
            _tc->_start = true;
            _tc->_gameover = false;
            _tc->_victory = false;
            _tc->_myPlayer1->play();
            _tc->_timer3 = _tc->startTimer(3000);
            _tc->_timer4 = _tc->startTimer(3000);
            break;
        }
    case Qt::Key_Escape:exit(0);break;
    default:break;
    }
    if(_BU&&!_BD&&!_BL&&!_BR) _dir = U;
    else if(!_BU&&_BD&&!_BL&&!_BR) _dir = D;
    else if(!_BU&&!_BD&&_BL&&!_BR) _dir = L;
    else if(!_BU&&!_BD&&!_BL&&_BR) _dir = R;

    else if(_BU&&!_BD&&_BL&&!_BR) _dir = LU;
    else if(!_BU&&_BD&&_BL&&!_BR) _dir = LD;
    else if(_BU&&!_BD&&!_BL&&_BR) _dir = RU;
    else if(!_BU&&_BD&&!_BL&&_BR) _dir = RD;
    else _dir = STOP;
}
void Tank::keyRelease(int key)
{
    switch (key)
    {
    case Qt::Key_W: _BU=false;break;
    case Qt::Key_Up: _BU=false;break;
    case Qt::Key_S: _BD=false;break;
    case Qt::Key_Down: _BD=false;break;
    case Qt::Key_A: _BL=false;break;
    case Qt::Key_Left: _BL=false;break;
    case Qt::Key_D: _BR=false;break;
    case Qt::Key_Right: _BR=false;break;
    case Qt::Key_J:
        _fire = false;
 //       _firstFire = true;
        //250ms后firstfire为ture
        break;
    case Qt::Key_K:_superF = false;break;
    case Qt::Key_P:_superF = false;break;
    case Qt::Key_O:
        _fire = false;
        //250ms后firstfire为ture
        break;
    default:break;
    }
    if(_BU&&!_BD&&!_BL&&!_BR) _dir = U;
    else if(!_BU&&_BD&&!_BL&&!_BR) _dir = D;
    else if(!_BU&&!_BD&&_BL&&!_BR) _dir = L;
    else if(!_BU&&!_BD&&!_BL&&_BR) _dir = R;

    else if(_BU&&!_BD&&_BL&&!_BR) _dir = LU;
    else if(!_BU&&_BD&&_BL&&!_BR) _dir = LD;
    else if(_BU&&!_BD&&!_BL&&_BR) _dir = RU;
    else if(!_BU&&_BD&&!_BL&&_BR) _dir = RD;
    else _dir = STOP;
}
void Tank::moveTank()
{
    _xtemp = _x;
    _ytemp = _y;
    if((!_rush&&!_blow)||(_rush&&_blow))
    {
        switch (_dir)
        {
        case U: _y-=_v;break;
        case D: _y+=_v;break;
        case L: _x-=_v;break;
        case R: _x+=_v;break;

        case LU: _x-=_v;_y-=_v;break;
        case LD: _x-=_v;_y+=_v;break;
        case RU: _x+=_v;_y-=_v;break;
        case RD: _x+=_v;_y+=_v;break;
        }
    }
    else if(_rush&&!_blow)
    {
        switch (_dir)
        {
        case U: _y-=_v+5;break;
        case D: _y+=_v+5;break;
        case L: _x-=_v+5;break;
        case R: _x+=_v+5;break;

        case LU: _x-=_v+5;_y-=_v+5;break;
        case LD: _x-=_v+5;_y+=_v+5;break;
        case RU: _x+=_v+5;_y-=_v+5;break;
        case RD: _x+=_v+5;_y+=_v+5;break;
        }
    }
    else if(!_rush&&!_burnt&&_blow)
    {
        switch (_dir)
        {
        case U: _y-=_v-2;break;
        case D: _y+=_v-2;break;
        case L: _x-=_v-2;break;
        case R: _x+=_v-2;break;
        case LU: _x-=_v-2;_y-=_v-2;break;
        case LD: _x-=_v-2;_y+=_v-2;break;
        case RU: _x+=_v-2;_y-=_v-2;break;
        case RD: _x+=_v-2;_y+=_v-2;break;
        }
    }
    else
    {
        switch (_dir)
        {
        case U: _y-=_v;break;
        case D: _y+=_v;break;
        case L: _x-=_v;break;
        case R: _x+=_v;break;

        case LU: _x-=_v;_y-=_v;break;
        case LD: _x-=_v;_y+=_v;break;
        case RU: _x+=_v;_y-=_v;break;
        case RD: _x+=_v;_y+=_v;break;
        }
    }
    if(_x<=0) _x = 0;
    if(_y<=0) _y = 0;
    if(_x>=TankClient::GAME_WIDTH-_w) _x = TankClient::GAME_WIDTH-_w;
    if(_y>=TankClient::GAME_HEIGHT-_h) _y = TankClient::GAME_HEIGHT-_h;
//    if(!_good)//简单AI
//    {
//        if(qrand()%20>18) fire();//0-20
//        if(_step == 0)
//        {
//            _dir = Dir(qrand()%9);//0-9
//            _step = qrand()%15+10;//10-25
//        }
//        _step--;
//    }
//        for(int i = 0 ; i < _tc->_props.size() ; i++)
//        {
//            if(searchBuff(_tc->_props[i])==STOP)
//            {
//                 return;//0-20
//            }
//            else
//            {
//                 _dir =searchBuff(_tc->_props[i]);
//            }
//        }
//        if(_step == 0)
//        {
//            _dir = Dir(qrand()%9);//0-9
//            _step = qrand()%15+10;//10-25
//        }
//        _step--;    
}
void Tank::ai()
{
    if(_tc->_double)
    {
        if(_tc->_mytank1->_live&&!_tc->_mytank2->_live)
        {
            if(searchE(_tc->_mytank1)!=STOP&&qrand()%10>7)
            {
                    _dir =searchE(_tc->_mytank1);
            }
            else
            {
                if(_step == 0)
                {
                    _dir = Dir(qrand()%9);//0-9
                    _step = qrand()%15+10;//10-25
                }
                _step--;
            }
            if(qrand()%20>18) fire();
        }
        else if(_tc->_mytank2->_live&&!_tc->_mytank1->_live)
        {
            if(searchE(_tc->_mytank2)!=STOP&&qrand()%10>7)
            {
                    _dir =searchE(_tc->_mytank2);
            }
            else
            {
                if(_step == 0)
                {
                    _dir = Dir(qrand()%9);//0-9
                    _step = qrand()%15+10;//10-25
                }
                _step--;
            }
            if(qrand()%20>18) fire();
        }
        else if(_tc->_mytank1->_live&&_tc->_mytank2->_live)
        {
            int x1 = (_x-_tc->_mytank1->_x)*(_x-_tc->_mytank1->_x)+(_y-_tc->_mytank1->_y)*(_y-_tc->_mytank1->_y);
            int x2 = (_x-_tc->_mytank2->_x)*(_x-_tc->_mytank2->_x)+(_y-_tc->_mytank2->_y)*(_y-_tc->_mytank2->_y);
            if(x1 <= x2)
            {
                if(searchE(_tc->_mytank1)!=STOP&&qrand()%10>7)
                {
                        _dir =searchE(_tc->_mytank1);
                }
                else
                {
                    if(_step == 0)
                    {
                        _dir = Dir(qrand()%9);//0-9
                        _step = qrand()%15+10;//10-25
                    }
                    _step--;
                }
                if(qrand()%20>18) fire();
            }
            else
            {
                if(searchE(_tc->_mytank2)!=STOP&&qrand()%10>7)
                {
                        _dir =searchE(_tc->_mytank2);
                }
                else
                {
                    if(_step == 0)
                    {
                        _dir = Dir(qrand()%9);//0-9
                        _step = qrand()%15+10;//10-25
                    }
                    _step--;
                }
                if(qrand()%20>18) fire();
            }
        }
    }
    else
    {
        if(searchE(_tc->_mytank1)!=STOP&&qrand()%10>7)
        {
                _dir =searchE(_tc->_mytank1);
        }
        else
        {
            if(_step == 0)
            {
                _dir = Dir(qrand()%9);//0-9
                _step = qrand()%15+10;//10-25
            }
            _step--;
        }
        if(qrand()%20>18) fire();
    }
    for(int i = 0 ; i < _tc->_props.size() ; i++)
    {
        if(STOP==searchBuff(_tc->_props[i]))
            continue;
        else
        {
            if(qrand()%10>7)
                _dir = searchBuff(_tc->_props[i]);
            break;
        }
    }
}
Dir Tank::searchE(Tank *t)
{
    int x = t->_x-_x;
    int y = t->_y-_y;
    if((abs(x)<=150)&&(abs(y)<=150))
    {                
        if(abs(x)<=15)
        {
             if(y<0)  return U;  //上方有敌人
             else  return D;  //下方有敌人
        }
        else if(abs(y)<=15)
        {
            if(x<0)  return L;    //左方有敌人
            else return R;   //右方有敌人
        }
        else if(x<0)
        {
             if(y<0)  return LU;  //左上方有敌人
             else  return LD;  //右上方有敌人
        }
        else if(x>0)
        {
             if(y<0)  return RU;  //左下方有敌人
             else  return RD;  //右下方有敌人
        }
    }
    else
        return STOP;
}
Dir Tank::searchBuff(Prop *p)
{
    int x = p->_x-_x;
    int y = p->_y-_y;
    if((abs(x)<=60)&&(abs(y)<=60))
    {
        if(abs(x)<=15)
        {
             if(y<0)  return U;  //上方有敌人
             else  return D;  //下方有敌人
        }
        else if(abs(y)<=15)
        {
            if(x<0)  return L;    //左方有敌人
            else return R;   //右方有敌人
        }
        else if(x<0)
        {
             if(y<0)  return LU;  //左上方有敌人
             else  return RU;  //右上方有敌人
        }
        else if(x>0)
        {
             if(y<0)  return LD;  //左下方有敌人
             else  return RD;  //右下方有敌人
        }
    }
    else
        return STOP;
}

void Tank::compare()
{
    int s = QTime::currentTime().second();
    if(_bs[0]>49&&_bs[0]<60)//Frez.
    {
        if(s<=10&&60-_bs[1]+s>=10)
        {
            _frez = false;
            _bs[0] = 60;
        }
    }
    else if(_bs[0]>=0&&_bs[0]<=49)
    {
        if(s-_bs[0]>=10)
        {
            _frez = false;
            _bs[0] = 60;
        }
    }
    if(_bs[1]>49&&_bs[1]<60)//Rush
    {
        if(s<=10&&60-_bs[1]+s>=10)
        {
            _rush = false;
            _bs[1] = 60;
        }
    }
    else if(_bs[1]>=0&&_bs[1]<=49)
    {
        if(s-_bs[1]>=10)
        {
            _rush = false;
            _bs[1] = 60;
        }
    }
    if(_bs[2]>49&&_bs[2]<60)//Burn
    {
        if(s<=10&&60-_bs[1]+s>=10)
        {
            _burn = false;
            _bs[2] = 60;
        }
    }
    else if(_bs[2]>=0&&_bs[0]<=49)
    {
        if(s-_bs[2]>=10)
        {
            _burn = false;
            _bs[2] = 60;
        }
    }
    if(_bs[3]>49&&_bs[3]<60)//Power
    {
        if(s<=10&&60-_bs[1]+s>=10)
        {
            _power = false;
            _bs[3] = 60;
        }
    }
    else if(_bs[3]>=0&&_bs[3]<=49)
    {
        if(s-_bs[3]>=10)
        {
            _power = false;
            _bs[3] = 60;
        }
    }
    if(_bs[4]>49&&_bs[4]<60)//Invin
    {
        if(s<=10&&60-_bs[1]+s>=10)
        {
            _invin = false;
            _bs[4] = 60;
        }
    }
    else if(_bs[4]>=0&&_bs[4]<=49)
    {
        if(s-_bs[4]>=10)
        {
            _invin = false;
            _bs[4] = 60;
        }
    }
    if(_bs[5]>49&&_bs[5]<60)//_blow
    {
        if(s<=10&&60-_bs[1]+s>=10)
        {
            _blow = false;
            _bs[5] = 60;
        }
    }
    else if(_bs[5]>=0&&_bs[5]<=49)
    {
        if(s-_bs[5]>=10)
        {
            _blow = false;
            _bs[5] = 60;
        }
    }
    if(_bs[6]>56&&_bs[6]<60)//_burnt
    {
        if(60-_bs[6]+s>=3&&s<=5)
        {
            _burnt = false;
            _bs[6] = 60;
        }
    }
    else if(_bs[6]>=0&&_bs[6]<=56)
    {
        if(_burnt) _liveValue -= 1;
        if(s-_bs[6]>=3)
        {
            _burnt = false;
            _bs[6] = 60;
        }
    }
}
bool Tank::TankHitProp(Prop *p)
{
    if(_live&&getRect().intersects(p->getRect()))
    {                
        switch (p->_buf) {
        case Frez: _frez=true;p->_live=false;_bs[0] = QTime::currentTime().second();break;
        case Rush: _rush=true;p->_live=false;_bs[1] = QTime::currentTime().second();break;
        case Burn: _burn=true;p->_live=false;_bs[2] = QTime::currentTime().second();break;
        case Power:_power=true;p->_live=false;_bs[3] = QTime::currentTime().second();break;
        case Invin:_invin=true;p->_live=false;_bs[4] = QTime::currentTime().second();break;
        case LiveUp:
            _liveValue += 300;
            p->_live=false;
            if(_liveValue>_maxLive)
                _liveValue = _maxLive;
            break;
        case Rank:
            p->_live=false;
            if(!_rank)
            {
                _maxLive+=1800;
                _liveValue =_maxLive;
            }
            _rank=true;
            break;
        case BlackHole:break;
        default:break;
        }
        return true;//这里？是否是false？
    }
    return false;
}
void Tank::TankHitProps(QList<Prop *> ps)
{
    for(int i=0;i<ps.size();i++)
    {
        if(TankHitProp(ps[i]))
            return ;
    }
}
void Tank::TankLeaveBH()
{
    if(_tc->_level!=20)
    {
        if(_tc->_bh.size()!=2)
            return;
        if(!(getRect().intersects(_tc->_bh[0]->getRect1())||getRect().intersects(_tc->_bh[1]->getRect1())))
            _black = true;
    }
    else
    {
        if(!(getRect().intersects(_tc->_center->getRect1())||getRect().intersects(_tc->_LU->getRect1())||getRect().intersects(_tc->_LD->getRect1())||
             getRect().intersects(_tc->_RU->getRect1())||getRect().intersects(_tc->_RD->getRect1())))
            _black = true;
    }
}
void Tank::TankHitBlackHole()
{
//    if(_tc->_bh1 == NULL || _tc->_bh2 == NULL)
//        return;
    if(_tc->_level!= 20)
    {
        if(_tc->_bh.size()!=2)
            return;
        if(_black&&TankHitProp(_tc->_bh[0])&&_x>=_tc->_bh[0]->_x+10&&_x<=_tc->_bh[0]->_x+50&&_y>=_tc->_bh[0]->_y+10&&_y<=_tc->_bh[0]->_y+50)
        {
    //
            _x=_tc->_bh[1]->_x+15;
            _y=_tc->_bh[1]->_y+15;
    //                if(_tc->_edited)
    //                {
    //                    for(int i = 0 ; i < _tc->_editmap._myWall.size() ; i++)
    //                    {
    //                        if(_tc->_editmap._myWall[i]->_type==Iron||_tc->_editmap._myWall[i]->_type==River)
    //                        {
    //                            if(getRect().intersects(_tc->_editmap._myWall[i]->getRect()))
    //                            {
    //                                _x = x;
    //                                _y = y;
    //                            }
    //                        }
    //                    }
    //                }
            _black=false;
        }
        else if(_black&&TankHitProp(_tc->_bh[1])&&_x>=_tc->_bh[1]->_x+15&&_x<=_tc->_bh[1]->_x+45&&_y>=_tc->_bh[1]->_y+15&&_y<=_tc->_bh[1]->_y+45)
        {
            _x=_tc->_bh[0]->_x+15;
            _y=_tc->_bh[0]->_y+15;
            _black=false;
        }
    }
    else
    {
        if(_black&&TankHitProp(_tc->_center)&&_x>=_tc->_center->_x+10&&_x<=_tc->_center->_x+50&&_y>=_tc->_center->_y+10&&_y<=_tc->_center->_y+50)
        {
            int x = (int)(qrand()%4);
            switch (x) {
            case 0:
                _x=_tc->_LU->_x+15;
                _y=_tc->_LU->_y+15;
                _black = false;
                break;
            case 1:
                _x=_tc->_LD->_x+15;
                _y=_tc->_LD->_y+15;
                _black = false;
                break;
            case 2:
                _x=_tc->_RU->_x+15;
                _y=_tc->_RU->_y+15;
                _black = false;
                break;
            case 3:
                _x=_tc->_RD->_x+15;
                _y=_tc->_RD->_y+15;
                _black = false;
                break;
            default:
                break;
            }
        }
        else if(_black&&((TankHitProp(_tc->_LU)&&_x>=_tc->_LU->_x+10&&_x<=_tc->_LU->_x+50&&_y>=_tc->_LU->_y+10&&_y<=_tc->_LU->_y+50)
                ||(TankHitProp(_tc->_LD)&&_x>=_tc->_LD->_x+10&&_x<=_tc->_LD->_x+50&&_y>=_tc->_LD->_y+10&&_y<=_tc->_LD->_y+50)
                ||(TankHitProp(_tc->_RU)&&_x>=_tc->_RU->_x+10&&_x<=_tc->_RU->_x+50&&_y>=_tc->_RU->_y+10&&_y<=_tc->_RU->_y+50)
                ||(TankHitProp(_tc->_RD)&&_x>=_tc->_RD->_x+10&&_x<=_tc->_RD->_x+50&&_y>=_tc->_RD->_y+10&&_y<=_tc->_RD->_y+50)))
        {
            _x=_tc->_center->_x+15;
            _y=_tc->_center->_y+15;
            _black = false;
        }
    }
}

void Tank::pfire()
{
    if(_fire&&_firstFire)//是第一次
    {
        _m = QTime::currentTime().minute();
        _s = QTime::currentTime().second();
        _ms = QTime::currentTime().msec();
        int mw = 9,mh = 9;
        int mx = _x + _w / 2 - mw / 2;
        int my = _y + _h / 2 - mh / 2;
        if(_rank)
        {
            Bullet* m = new Bullet(mx,my,mw,mh,_ptdir,_tc,this,450);
            _tc->_bullets.push_back(m);
        }
        else
        {
            Bullet* m = new Bullet(mx,my,mw,mh,_ptdir,_tc,this,300);
            _tc->_bullets.push_back(m);
        }
        if(_is1)
            _tc->_myPlayer2->play();
        else
            _tc->_myPlayer2_->play();
        _firstFire = false;
        return;
    }
    if(_fire&&!(_firstFire))//不是第一次
    {
        int m = QTime::currentTime().minute();
        int s = QTime::currentTime().second();
        int ms = QTime::currentTime().msec();
        if(((s!=_s)&&(1000-_ms+ms)>=400)&&_m==m||((ms-_ms)>=400&&_s==s))
        {
            _m = m;
            _s = s;
            _ms = ms;
            int mw = 9,mh = 9;
            int mx = _x + _w / 2 - mw / 2;
            int my = _y + _h / 2 - mh / 2;
            if(_rank)
            {
                Bullet* m = new Bullet(mx,my,mw,mh,_ptdir,_tc,this,450);
                _tc->_bullets.push_back(m);
            }
            else
            {
                Bullet* m = new Bullet(mx,my,mw,mh,_ptdir,_tc,this,300);
                _tc->_bullets.push_back(m);
            }
            if(_is1)
                _tc->_myPlayer2->play();
            else
                _tc->_myPlayer2_->play();
            _firstFire = false;
            return;
        }
        else if(_m != m)
        {
            _m = m;
            _s = s;
            _ms = ms;
            int mw = 9,mh = 9;
            int mx = _x + _w / 2 - mw / 2;
            int my = _y + _h / 2 - mh / 2;
            if(_rank)
            {
                Bullet* m = new Bullet(mx,my,mw,mh,_ptdir,_tc,this,450);
                _tc->_bullets.push_back(m);
            }
            else
            {
                Bullet* m = new Bullet(mx,my,mw,mh,_ptdir,_tc,this,300);
                _tc->_bullets.push_back(m);
            }
            if(_is1)
                _tc->_myPlayer2->play();
            else
                _tc->_myPlayer2_->play();
            _firstFire = false;
            return;
        }
    }
}
void Tank::psuperFire()
{
    if(_count<=0)
    {
        _count = 0;
        return;
    }
    if(_superF&&_firstsFire)//是第一次
    {
        _dm = QTime::currentTime().minute();
        _ds = QTime::currentTime().second();
        _dms = QTime::currentTime().msec();
        superFire();
        _count--;
        if(_is1)
            _tc->_myPlayer4->play();
        else
            _tc->_myPlayer4_->play();
        _firstsFire = false;
        return;
    }
    if(_superF&&!(_firstFire))//不是第一次
    {
        int m = QTime::currentTime().minute();
        int s = QTime::currentTime().second();
        int ms = QTime::currentTime().msec();
        if(((s!=_ds)&&(1000-_dms+ms)>=400)&&_dm==m||((ms-_dms)>=400&&_ds==s))
        {
            _dm = m;
            _ds = s;
            _dms = ms;
            superFire();
            _count--;
            if(_is1)
                _tc->_myPlayer4->play();
            else
                _tc->_myPlayer4_->play();
            _firstsFire = false;
            return;
        }
        else if(_dm != m)
        {
            _dm = m;
            _ds = s;
            _dms = ms;
            superFire();
            _count--;
            if(_is1)
                _tc->_myPlayer4->play();
            else
                _tc->_myPlayer4_->play();
            _firstsFire = false;
            return;
        }
    }
}
void Tank::fire()
{
    int mw,mh;
    mw = 9;
    mh = 9;
    int mx = _x + _w / 2 - mw / 2;
    int my = _y + _h / 2 - mh / 2;
    if(_rank)
    {
        Bullet* m = new Bullet(mx,my,mw,mh,_ptdir,_tc,this,450);
        _tc->_bullets.push_back(m);
    }
    else
    {
        Bullet* m = new Bullet(mx,my,mw,mh,_ptdir,_tc,this,300);
        _tc->_bullets.push_back(m);
    }
}
void Tank::fire(Dir tdir)
{
    int mw,mh;
    mw = 9;
    mh = 9;
    int mx = _x + _w / 2 - mw / 2;
    int my = _y + _h / 2 - mh / 2;
    if(_rank)
    {
        Bullet* m = new Bullet(mx,my,mw,mh,tdir,_tc,this,450);
        _tc->_bullets.push_back(m);
    }
    else
    {
        Bullet* m = new Bullet(mx,my,mw,mh,tdir,_tc,this,300);
        _tc->_bullets.push_back(m);
    }
}
void Tank::superFire()//朝八个方向开火
{
    for(int i = 0 ; i < 8 ; i++)
    {
        fire(Dir(i));
    }
}
bool Tank::TankHitW(Wall *w)
{
    if(_good&&_live&&(w->_type==Iron||w->_type==River)&&getRect().intersects(w->getRect1()))
    {
        _live = false;
        return true;
    }
    else
        return false;
}
void Tank::TankHitWs(QList<Wall *> ws)
{
    for(int i = 0 ; i < ws.size() ; i++)
    {
        if(TankHitW(ws[i]))
            return;
    }
}
bool Tank::TankHitWall(Wall *w)//检测坦克和墙壁是否碰撞
{
    if(_live&&getRect().intersects(w->getRect()))
    {
        if(w->_type == Grass)
        {
            return false;
        }
        else if(w->_type == Lava&&_good&&_tc->_start)
        {
            _liveValue-=1;
            if(_liveValue<=0)
                _live = false;
        }
        else if(w->_type == Ice)
        {
            switch(w->_dir)
            {
            case U: _y-=5;break;
            case D: _y+=5;break;
            case L: _x-=5;break;
            case R: _x+=5;break;
            default:break;
            }
            return true;
        }
        else if(w->_type == Lava&&!_good)
        {
            return false;
        }
        else
        {
//            switch (_dir) {
//            case U:_x = _xtemp;_y = w->_y+30;break;
//            case D:_x = _xtemp;_y = w->_y-30;break;
//            case L:_x = w->_x+30;_y = _ytemp;break;
//            case R:_x = w->_x-30;_y = _ytemp;break;

//            case LU:
//                _tx = _x-w->_x>0 ? _x-w->_x:w->_x-_x;
//                _ty = _y-w->_y>0 ? _y-w->_y:w->_y-_y;
//                if(_tx == _ty)
//                {
//                    _x = w->_x+30;
//                    _y = w->_y+30;
//                }
//                else if(_tx < _ty)
//                {
//                     _x -= (_y-w->_y-30);
//                    _y = w->_y+30;
//                }
//                else
//                {
//                    _y -= (_x-w->_x-30);
//                    _x = w->_x+30;
//                }
//                break;
//            case LD:
//                _tx = _x-w->_x>0 ? _x-w->_x:w->_x-_x;
//                _ty = _y-w->_y>0 ? _y-w->_y:w->_y-_y;
//                if(_tx == _ty)
//                {
//                    _x = w->_x+30;
//                    _y = w->_y-30;
//                }
//                else if(_tx < _ty)
//                {
//                    _x -= (w->_y-_y-30);
//                    _y = w->_y-30;
//                }
//                else
//                {
//                    _y += (_x-w->_x-30);
//                    _x = w->_x+30;
//                }
//                break;
//            case RU:
//                _tx = _x-w->_x>0 ? _x-w->_x:w->_x-_x;
//                _ty = _y-w->_y>0 ? _y-w->_y:w->_y-_y;
//                if(_tx == _ty)
//                {
//                    _x = w->_x-30;
//                    _y = w->_y+30;
//                }
//                else if(_tx < _ty)
//                {
//                     _x += (_y-w->_y-30);
//                    _y = w->_y+30;
//                }
//                else
//                {
//                    _y -= (w->_x-_x-30);
//                    _x = w->_x-30;
//                }
//                break;
//            case RD:
//                _tx = _x-w->_x>0 ? _x-w->_x:w->_x-_x;
//                _ty = _y-w->_y>0 ? _y-w->_y:w->_y-_y;
//                if(_tx == _ty)
//                {
//                    _x = w->_x-30;
//                    _y = w->_y-30;
//                }
//                else if(_tx < _ty)
//                {
//                     _x += (w->_y-_y-30);
//                    _y = w->_y-30;
//                }
//                else
//                {
//                    _y += (w->_x-_x-30);
//                    _x = w->_x-30;
//                }
//                break;
//            default:break;
//            }
            _x = _xtemp;
            _y = _ytemp;
            return true;
        }
    }
    return false;
}
void Tank::TankHitWalls(QList<Wall *> ws)
{
    for(int i = 0 ; i < ws.size() ; i++)
    {
        if(TankHitWall(ws[i]))
            return;
    }
}
void Tank::init()//将图片存入list中
{
//    TankImgs.push_back(QImage(":/images/etU.gif"));
//    TankImgs.push_back(QImage(":/images/etD.gif"));
//    TankImgs.push_back(QImage(":/images/etL.gif"));
//    TankImgs.push_back(QImage(":/images/etR.gif"));
//    TankImgs.push_back(QImage(":/images/etLU.gif"));
//    TankImgs.push_back(QImage(":/images/etLD.gif"));
//    TankImgs.push_back(QImage(":/images/etRU.gif"));
//    TankImgs.push_back(QImage(":/images/etRD.gif"));

    TankImgs.push_back(QImage(":/images/GO1U.gif"));//
    TankImgs.push_back(QImage(":/images/GO1D.gif"));
    TankImgs.push_back(QImage(":/images/GO1L.gif"));
    TankImgs.push_back(QImage(":/images/GO1R.gif"));
    TankImgs.push_back(QImage(":/images/GO1LU.gif"));
    TankImgs.push_back(QImage(":/images/GO1LD.gif"));
    TankImgs.push_back(QImage(":/images/GO1RU.gif"));
    TankImgs.push_back(QImage(":/images/GO1RD.gif"));//
    TankImgs.push_back(QImage(":/images/GR1U.gif"));//
    TankImgs.push_back(QImage(":/images/GR1D.gif"));
    TankImgs.push_back(QImage(":/images/GR1L.gif"));
    TankImgs.push_back(QImage(":/images/GR1R.gif"));
    TankImgs.push_back(QImage(":/images/GR1LU.gif"));
    TankImgs.push_back(QImage(":/images/GR1LD.gif"));
    TankImgs.push_back(QImage(":/images/GR1RU.gif"));
    TankImgs.push_back(QImage(":/images/GR1RD.gif"));//
    TankImgs.push_back(QImage(":/images/P1U.gif"));//
    TankImgs.push_back(QImage(":/images/P1D.gif"));
    TankImgs.push_back(QImage(":/images/P1L.gif"));
    TankImgs.push_back(QImage(":/images/P1R.gif"));
    TankImgs.push_back(QImage(":/images/P1LU.gif"));
    TankImgs.push_back(QImage(":/images/P1LD.gif"));
    TankImgs.push_back(QImage(":/images/P1RU.gif"));
    TankImgs.push_back(QImage(":/images/P1RD.gif"));//

    uTankImgs.push_back(QImage(":/images/GO2U.gif"));//
    uTankImgs.push_back(QImage(":/images/GO2D.gif"));
    uTankImgs.push_back(QImage(":/images/GO2L.gif"));
    uTankImgs.push_back(QImage(":/images/GO2R.gif"));
    uTankImgs.push_back(QImage(":/images/GO2LU.gif"));
    uTankImgs.push_back(QImage(":/images/GO2LD.gif"));
    uTankImgs.push_back(QImage(":/images/GO2RU.gif"));
    uTankImgs.push_back(QImage(":/images/GO2RD.gif"));//
    uTankImgs.push_back(QImage(":/images/GR2U.gif"));//
    uTankImgs.push_back(QImage(":/images/GR2D.gif"));
    uTankImgs.push_back(QImage(":/images/GR2L.gif"));
    uTankImgs.push_back(QImage(":/images/GR2R.gif"));
    uTankImgs.push_back(QImage(":/images/GR2LU.gif"));
    uTankImgs.push_back(QImage(":/images/GR2LD.gif"));
    uTankImgs.push_back(QImage(":/images/GR2RU.gif"));
    uTankImgs.push_back(QImage(":/images/GR2RD.gif"));//
    uTankImgs.push_back(QImage(":/images/P2U.gif"));//
    uTankImgs.push_back(QImage(":/images/P2D.gif"));
    uTankImgs.push_back(QImage(":/images/P2L.gif"));
    uTankImgs.push_back(QImage(":/images/P2R.gif"));
    uTankImgs.push_back(QImage(":/images/P2LU.gif"));
    uTankImgs.push_back(QImage(":/images/P2LD.gif"));
    uTankImgs.push_back(QImage(":/images/P2RU.gif"));
    uTankImgs.push_back(QImage(":/images/P2RD.gif"));//

    bTankImgs.push_back(QImage(":/images/frGO1U.gif"));//
    bTankImgs.push_back(QImage(":/images/frGO1D.gif"));
    bTankImgs.push_back(QImage(":/images/frGO1L.gif"));
    bTankImgs.push_back(QImage(":/images/frGO1R.gif"));
    bTankImgs.push_back(QImage(":/images/frGO1LU.gif"));
    bTankImgs.push_back(QImage(":/images/frGO1LD.gif"));
    bTankImgs.push_back(QImage(":/images/frGO1RU.gif"));
    bTankImgs.push_back(QImage(":/images/frGO1RD.gif"));//
    bTankImgs.push_back(QImage(":/images/frGR1U.gif"));//
    bTankImgs.push_back(QImage(":/images/frGR1D.gif"));
    bTankImgs.push_back(QImage(":/images/frGR1L.gif"));
    bTankImgs.push_back(QImage(":/images/frGR1R.gif"));
    bTankImgs.push_back(QImage(":/images/frGR1LU.gif"));
    bTankImgs.push_back(QImage(":/images/frGR1LD.gif"));
    bTankImgs.push_back(QImage(":/images/frGR1RU.gif"));
    bTankImgs.push_back(QImage(":/images/frGR1RD.gif"));//
    bTankImgs.push_back(QImage(":/images/frP1U.gif"));//
    bTankImgs.push_back(QImage(":/images/frP1D.gif"));
    bTankImgs.push_back(QImage(":/images/frP1L.gif"));
    bTankImgs.push_back(QImage(":/images/frP1R.gif"));
    bTankImgs.push_back(QImage(":/images/frP1LU.gif"));
    bTankImgs.push_back(QImage(":/images/frP1LD.gif"));
    bTankImgs.push_back(QImage(":/images/frP1RU.gif"));
    bTankImgs.push_back(QImage(":/images/frP1RD.gif"));//

    ubTankImgs.push_back(QImage(":/images/frGO2U.gif"));//
    ubTankImgs.push_back(QImage(":/images/frGO2D.gif"));
    ubTankImgs.push_back(QImage(":/images/frGO2L.gif"));
    ubTankImgs.push_back(QImage(":/images/frGO2R.gif"));
    ubTankImgs.push_back(QImage(":/images/frGO2LU.gif"));
    ubTankImgs.push_back(QImage(":/images/frGO2LD.gif"));
    ubTankImgs.push_back(QImage(":/images/frGO2RU.gif"));
    ubTankImgs.push_back(QImage(":/images/frGO2RD.gif"));//
    ubTankImgs.push_back(QImage(":/images/frGR2U.gif"));//
    ubTankImgs.push_back(QImage(":/images/frGR2D.gif"));
    ubTankImgs.push_back(QImage(":/images/frGR2L.gif"));
    ubTankImgs.push_back(QImage(":/images/frGR2R.gif"));
    ubTankImgs.push_back(QImage(":/images/frGR2LU.gif"));
    ubTankImgs.push_back(QImage(":/images/frGR2LD.gif"));
    ubTankImgs.push_back(QImage(":/images/frGR2RU.gif"));
    ubTankImgs.push_back(QImage(":/images/frGR2RD.gif"));//
    ubTankImgs.push_back(QImage(":/images/frP2U.gif"));//
    ubTankImgs.push_back(QImage(":/images/frP2D.gif"));
    ubTankImgs.push_back(QImage(":/images/frP2L.gif"));
    ubTankImgs.push_back(QImage(":/images/frP2R.gif"));
    ubTankImgs.push_back(QImage(":/images/frP2LU.gif"));
    ubTankImgs.push_back(QImage(":/images/frP2LD.gif"));
    ubTankImgs.push_back(QImage(":/images/frP2RU.gif"));
    ubTankImgs.push_back(QImage(":/images/frP2RD.gif"));//

    Bullet::BulletImgs.push_back(QImage(":/images/ebulU.gif"));
    Bullet::BulletImgs.push_back(QImage(":/images/ebulD.gif"));
    Bullet::BulletImgs.push_back(QImage(":/images/ebulL.gif"));
    Bullet::BulletImgs.push_back(QImage(":/images/ebulR.gif"));
    Bullet::BulletImgs.push_back(QImage(":/images/ebulLU.gif"));
    Bullet::BulletImgs.push_back(QImage(":/images/ebulLD.gif"));
    Bullet::BulletImgs.push_back(QImage(":/images/ebulRU.gif"));
    Bullet::BulletImgs.push_back(QImage(":/images/ebulRD.gif"));

    Bullet::BulletImgs.push_back(QImage(":/images/mbulU.gif"));
    Bullet::BulletImgs.push_back(QImage(":/images/mbulD.gif"));
    Bullet::BulletImgs.push_back(QImage(":/images/mbulL.gif"));
    Bullet::BulletImgs.push_back(QImage(":/images/mbulR.gif"));
    Bullet::BulletImgs.push_back(QImage(":/images/mbulLU.gif"));
    Bullet::BulletImgs.push_back(QImage(":/images/mbulLD.gif"));
    Bullet::BulletImgs.push_back(QImage(":/images/mbulRU.gif"));
    Bullet::BulletImgs.push_back(QImage(":/images/mbulRD.gif"));

    Explode::ExplodeImgs.push_back(QImage(":/images/s0.gif"));
    Explode::ExplodeImgs.push_back(QImage(":/images/s1.gif"));
    Explode::ExplodeImgs.push_back(QImage(":/images/s2.gif"));
    Explode::ExplodeImgs.push_back(QImage(":/images/s3.gif"));
    Explode::ExplodeImgs.push_back(QImage(":/images/s4.gif"));
    Explode::ExplodeImgs.push_back(QImage(":/images/s5.gif"));
    Explode::ExplodeImgs.push_back(QImage(":/images/s6.gif"));
    Explode::ExplodeImgs.push_back(QImage(":/images/s7.gif"));
    Explode::ExplodeImgs.push_back(QImage(":/images/s8.gif"));
    Explode::ExplodeImgs.push_back(QImage(":/images/s9.gif"));
    Explode::ExplodeImgs.push_back(QImage(":/images/s10.gif"));

    Prop::PropImgs.push_back(QImage(":/images/blackhole1.gif"));
    Prop::PropImgs.push_back(QImage(":/images/blackhole2.gif"));
    Prop::PropImgs.push_back(QImage(":/images/blackhole3.gif"));
    Prop::PropImgs.push_back(QImage(":/images/blackhole4.gif"));
    Prop::PropImgs.push_back(QImage(":/images/blackhole5.gif"));
    Prop::PropImgs.push_back(QImage(":/images/blackhole6.gif"));
    Prop::PropImgs.push_back(QImage(":/images/blackhole7.gif"));
    Prop::PropImgs.push_back(QImage(":/images/blackhole8.gif"));
    Prop::PropImgs.push_back(QImage(":/images/blackhole9.gif"));
    Prop::PropImgs.push_back(QImage(":/images/blackhole10.gif"));
    Prop::PropImgs.push_back(QImage(":/images/blackhole11.gif"));
    Prop::PropImgs.push_back(QImage(":/images/blackhole12.gif"));
    Prop::PropImgs.push_back(QImage(":/images/blackhole13.gif"));
    Prop::PropImgs.push_back(QImage(":/images/blackhole14.gif"));


   // Wall::WallImgs.push_back(QImage(":/images/wall0.bmp"));//铁
    Wall::WallImgs.push_back(QImage(":/images/iron.gif"));//铁
    Wall::WallImgs.push_back(QImage(":/images/wall1.bmp"));//黑墙
    Wall::WallImgs.push_back(QImage(":/images/river.gif"));//河
    //Wall::WallImgs.push_back(QImage(":/images/wall2.bmp"));//河
    //Wall::WallImgs.push_back(QImage(":/images/wall4.bmp"));//白墙
    Wall::WallImgs.push_back(QImage(":/images/brick.gif"));//白墙
    Wall::WallImgs.push_back(QImage(":/images/grass.png"));//草地
    Wall::WallImgs.push_back(QImage(":/images/lava.gif"));//岩浆
    Wall::WallImgs.push_back(QImage(":/images/iceD.gif"));//冰块下
    Wall::WallImgs.push_back(QImage(":/images/iceL.gif"));//冰块左
    Wall::WallImgs.push_back(QImage(":/images/iceR.gif"));//冰块右
    Wall::WallImgs.push_back(QImage(":/images/iceU.gif"));//冰块上


    Prop::PropImgs.push_back(QImage(":/images/frez.gif"));
    Prop::PropImgs.push_back(QImage(":/images/rush.gif"));
    Prop::PropImgs.push_back(QImage(":/images/burn.gif"));
    Prop::PropImgs.push_back(QImage(":/images/power.gif"));
    Prop::PropImgs.push_back(QImage(":/images/invin.gif"));
    Prop::PropImgs.push_back(QImage(":/images/rank.gif"));
    Prop::PropImgs.push_back(QImage(":/images/ck.gif"));


    TankClient::LogoImgs.push_back(QImage(":/images/logo.png"));
    TankClient::LogoImgs.push_back(QImage(":/images/gameover.png"));
    TankClient::LogoImgs.push_back(QImage(":/images/victory.png"));

    TankClient::LevelImgs.push_back(QImage(":/images/level.png"));//关卡

    TankClient::MenuImgs.push_back(QImage(":/images/level.png"));//关卡120*120
    TankClient::MenuImgs.push_back(QImage(":/images/1bi3.png"));//开始377*120
    TankClient::MenuImgs.push_back(QImage(":/images/1bi2.png"));//模式249*120 编辑
    TankClient::MenuImgs.push_back(QImage(":/images/left.png"));//左75*120
    TankClient::MenuImgs.push_back(QImage(":/images/right.png"));//右75*120
}

