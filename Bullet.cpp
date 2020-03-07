#include "Bullet.h"
#include <QList>
#include "TankClient.h"
#include "Tank.h"
#include "Explode.h"
#include "Wall.h"
QList<QImage> Bullet::BulletImgs;


Bullet::Bullet(int x,int y,int w,int h,Dir dir,TankClient* tc,Tank* t,int blvalue)
{
    this->_blvalue = blvalue;
    this->_x = x;
    this->_y = y;
    this->_w = w;
    this->_h = h;
    this->_dir = dir;
    this->_live = true;
    this->_tc = tc;
    this->_t = t;
    this->_buf = false;
    this->_v = 15;
}
bool Bullet::hitBullet(Bullet *b)
{
    if(_live&&b->_live&&_t->_good!=b->_t->_good&&this->getRect().intersects(b->getRect()))
    {
        if(_t->_power&&!b->_t->_power)
        {
            b->_live = false;
            return true;
        }
        else if(_t->_power&&b->_t->_power)
        {
            _live = false;
            b->_live = false;
            return true;
        }
        else if(!_t->_power&&b->_t->_power)
        {
            _live = false;
            return true;
        }
        else
        {
            int c = _blvalue;
            _blvalue -= b->_blvalue;
            b->_blvalue -= c;
            if(b->_blvalue <= 0)
            {
                b->_live = false;
            }
            if(_blvalue <= 0)
            {
                _live =false;
            }
            return true;
        }
    }
    return false;
}
void Bullet::hitBullets(QList<Bullet *> bs)
{
    for(int i = 0 ; i < bs.size() ; i++)
    {
        if(hitBullet(bs[i]))
            return;
    }
}
void Bullet::drawBullet(QPainter &p)
{
    if(!_live)
    {
        _tc->_bullets.removeOne(this);
    }
    if(!_t->_good)
    {
        switch (_dir)
        {
//        case U: p.drawImage(QRect(_x,_y,9,9),BulletImgs[0]);break;
//        case D: p.drawImage(QRect(_x,_y,9,9),BulletImgs[1]);break;
//        case L: p.drawImage(QRect(_x,_y,9,9),BulletImgs[2]);break;
//        case R: p.drawImage(QRect(_x,_y,9,9),BulletImgs[3]);break;

//        case LU: p.drawImage(QRect(_x,_y,9,9),BulletImgs[4]);break;
//        case LD: p.drawImage(QRect(_x,_y,9,9),BulletImgs[5]);break;
//        case RU: p.drawImage(QRect(_x,_y,9,9),BulletImgs[6]);break;
//        case RD: p.drawImage(QRect(_x,_y,9,9),BulletImgs[7]);break;

        case U: p.drawImage(_x,_y,BulletImgs[0]);break;
        case D: p.drawImage(_x,_y,BulletImgs[1]);break;
        case L: p.drawImage(_x,_y,BulletImgs[2]);break;
        case R: p.drawImage(_x,_y,BulletImgs[3]);break;

        case LU: p.drawImage(_x,_y,BulletImgs[4]);break;
        case LD: p.drawImage(_x,_y,BulletImgs[5]);break;
        case RU: p.drawImage(_x,_y,BulletImgs[6]);break;
        case RD: p.drawImage(_x,_y,BulletImgs[7]);break;
        default:break;
        }
    }
    else
    {
        switch (_dir)
        {
//        case U: p.drawImage(QRect(_x,_y,12,12),BulletImgs[8]);break;
//        case D: p.drawImage(QRect(_x,_y,12,12),BulletImgs[9]);break;
//        case L: p.drawImage(QRect(_x,_y,12,12),BulletImgs[10]);break;
//        case R: p.drawImage(QRect(_x,_y,12,12),BulletImgs[11]);break;

//        case LU: p.drawImage(QRect(_x,_y,12,12),BulletImgs[12]);break;
//        case LD: p.drawImage(QRect(_x,_y,12,12),BulletImgs[13]);break;
//        case RU: p.drawImage(QRect(_x,_y,12,12),BulletImgs[14]);break;
//        case RD: p.drawImage(QRect(_x,_y,12,12),BulletImgs[15]);break;

        case U: p.drawImage(_x,_y,BulletImgs[8]);break;
        case D: p.drawImage(_x,_y,BulletImgs[9]);break;
        case L: p.drawImage(_x,_y,BulletImgs[10]);break;
        case R: p.drawImage(_x,_y,BulletImgs[11]);break;

        case LU: p.drawImage(_x,_y,BulletImgs[12]);break;
        case LD: p.drawImage(_x,_y,BulletImgs[13]);break;
        case RU: p.drawImage(_x,_y,BulletImgs[14]);break;
        case RD: p.drawImage(_x,_y,BulletImgs[15]);break;
        default:break;
        }
    }
    moveBullet();//子弹移动
}
void Bullet::moveBullet()
{
    switch (_dir) {
    case U: _y-=_v;break;
    case D: _y+=_v;break;
    case L: _x-=_v;break;
    case R: _x+=_v;break;

    case LU: _x-=_v;_y-=_v;break;
    case LD: _x-=_v;_y+=_v;break;
    case RU: _x+=_v;_y-=_v;break;
    case RD: _x+=_v;_y+=_v;break;
    default: break;
    }
    if(_x<=0||_y<=0||_x>=TankClient::GAME_WIDTH||_y>=TankClient::GAME_HEIGHT)
    {
        _live = false;
    }
}
bool Bullet::hitTank(Tank *t)
{
    if(_live&&t->_live&&_t->_good!=t->_good&&this->getRect().intersects(t->getRect()))
    {
        if(t->_invin)
        {
            _live = false;
            return true;
        }
        int c = _blvalue;
        _blvalue -= t->_liveValue;
        t->_liveValue -= c;
        if(_blvalue<=0)
            _live = false;
        if(_t->_frez)
        {
            t->_blow = true;
            t->_bs[5] = QTime::currentTime().second();
        }
        if(_t->_burn)
        {
            t->_burnt = true;
            t->_bs[6] = QTime::currentTime().second();
        }
        if(t->_liveValue <= 0)
        {
            t->_live = false;
            if(this->_t->_good)
                _tc->_score+=10;
            Explode* e = new Explode(t->_x,t->_y,_tc);
            _tc->_explodes.push_back(e);
            _tc->_myPlayer3->play();
            return true;
        }
    }
    return false;
}
void Bullet::hitTanks(QList<Tank *> ts)
{
    for(int i = 0 ; i < ts.size() ; i++)
    {
        if(hitTank(ts[i])) return;
    }
}
bool Bullet::hitWall(Wall *w)
{
    if(w->_type == Grass)
    {
        return false;
    }
    else if(w->_type == River)
    {
        return false;
    }
    else if(_live&&(w->_type==Iron)&&this->getRect().intersects(w->getRect())&&!_t->_power)
    {
        _live = false;
        return true;
    }
    else if(_live&&(w->_type==Iron)&&this->getRect().intersects(w->getRect())&&_t->_power)
    {
        int c = _blvalue;
        _blvalue -= w->_liveValue;
        w->_liveValue -= c;
        if(_blvalue<=0)
            _live = false;
        if(w->_liveValue<=0)
            w->_live = false;
        return true;
    }
    else if(_live&&(w->_type==Brick)&&this->getRect().intersects(w->getRect()))
    {
        int c = _blvalue;
        _blvalue -= w->_liveValue;
        w->_liveValue -= c;
        if(_blvalue <= 0)
            _live = false;
        if(w->_liveValue <= 0)
        {
            w->_live = false;
            return true;
        }
    }
    return false;
}
void Bullet::hitWalls(QList<Wall *> ws)
{
    for(int i = 0 ; i < ws.size() ; i++)
    {
        if(hitWall(ws[i])) return;
    }
}
