#include "Wall.h"
#include "TankClient.h"
QList<QImage> Wall::WallImgs;

Wall::Wall(int x,int y,int w,int h,TYPE type,TankClient* tc,int liveValue)
{
    this->_x = x;
    this->_y = y;
    this->_w = w;
    this->_h = h;
    this->_tc = tc;
    this->_v = 15;
    this->_live = true;
    this->_liveValue = 20*liveValue;
    this->_type = type;
    this->_doChange = false;
    this->_dir = STOP;
}
void Wall::drawWall(QPainter &p)
{
    if(_tc->_editmap._myWall.size()!= 0)
    {
        if(!_live)
        {
            this->_tc->_editmap._myWall.removeOne(this);
            return;
        }
    }
    else
    {
        if(!_live)
        {
            this->_tc->_maps[_tc->_level-1]._myWall.removeOne(this);
            return;
        }
    }
    switch (_type)
    {
    case Iron: p.drawImage(QRect(_x,_y,30,30),Wall::WallImgs[0]);break;
    case River: p.drawImage(QRect(_x,_y,30,30),Wall::WallImgs[2]);break;
    case Brick: p.drawImage(QRect(_x,_y,30,30),Wall::WallImgs[3]);break;
    case Grass: p.drawImage(QRect(_x,_y,30,30),Wall::WallImgs[4]);break;
    case Lava:p.drawImage(QRect(_x,_y,30,30),Wall::WallImgs[5]);break;
    case Ice:
    switch (_dir) {
    case D:p.drawImage(QRect(_x,_y,30,30),Wall::WallImgs[6]);break;
    case L:p.drawImage(QRect(_x,_y,30,30),Wall::WallImgs[7]);break;
    case R:p.drawImage(QRect(_x,_y,30,30),Wall::WallImgs[8]);break;
    case U:p.drawImage(QRect(_x,_y,30,30),Wall::WallImgs[9]);break;
    default: break;
    };
//    if(_dir==D)
//        p.drawImage(QRect(_x,_y,30,30),Wall::WallImgs[6]);
//    else if(_dir==L)
//        p.drawImage(QRect(_x,_y,30,30),Wall::WallImgs[7]);
//    else if(_dir==R)
//        p.drawImage(QRect(_x,_y,30,30),Wall::WallImgs[8]);
//    else if(_dir==U)
//        p.drawImage(QRect(_x,_y,30,30),Wall::WallImgs[9]);
//    else
//        break;
    default: break;
    }
    if(_tc->_edit)
        moveWall();
}
void Wall::remove()
{
    _tc->_maps[_tc->_level-1]._myWall.removeOne(this);
}
void Wall::change()
{
    if(_type == Iron)
    {
        _type = Brick;
        return;
    }
    if(_type == Brick)
    {
        _type = River;
        return;
    }
    if(_type == River)
    {
        _type = Grass;
        return;
    }
    if(_type == Grass)
    {
        _type = Iron;
    }
}
bool Wall::makeSure()
{
    for(int i = 0 ; i < _tc->_editmap._myWall.size()-1 ; i++)
    {
        if(_tc->_editmap._myWall[i]->getRect().intersects(this->getRect()))
            return false;
    }
    return true;
}
void Wall::keyPress(int key)
{
    switch (key) {
    case Qt::Key_W: _BU = true;break;
    case Qt::Key_S: _BD = true;break;
    case Qt::Key_A: _BL = true;break;
    case Qt::Key_D: _BR = true;break;
    case Qt::Key_K:
        if(!(this->hitWall(_tc->_maps[_tc->_level-1]._myWall[_tc->_maps[_tc->_level-1]._myWall.size()-2])))
            _sure = makeSure();
        break;
    case Qt::Key_J: _doChange = true;break;

//    case Qt::Key_Enter:
//        _tc->_finish = true;
//        _tc->_edit = false;
//        _tc->_start = true;
//        _tc->killTimer(_tc->_timer3);
//        _tc->_timer1= _tc->startTimer(30);
//        break;
    default: break;
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
void Wall::keyRelease(int key)
{
    switch (key)
    {
    case Qt::Key_W: _BU=false;break;
    case Qt::Key_S: _BD=false;break;
    case Qt::Key_A: _BL=false;break;
    case Qt::Key_D: _BR=false;break;
    case Qt::Key_J: _doChange = false;break;
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
void Wall::moveWall()
{
    _xtemp = _x;
    _ytemp = _y;
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
    if(_x<=0) _x = 0;
    if(_y<=0) _y = 0;
    if(_x>=TankClient::GAME_WIDTH-_w) _x = TankClient::GAME_WIDTH-_w;
    if(_y>=TankClient::GAME_HEIGHT-_h) _y = TankClient::GAME_HEIGHT-_h;
    hitWalls(_tc->_editmap._myWall);
    if(_doChange)
    {
        change();
    }
}
bool Wall::hitWall(Wall *w)
{
    if(getRect().intersects(w->getRect()))
    {
        _x = _xtemp;
        _y = _ytemp;
        return true;
    }
    return false;
}
bool Wall::hitWalls(QList<Wall *> ws)
{
    for(int i = 0 ; i < ws.size()-2 ; i++)
    {
        if(hitWall(ws[i]))
            return true;
    }
    return false;
}
