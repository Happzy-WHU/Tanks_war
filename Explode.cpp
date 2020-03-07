#include "Explode.h"
#include <QPainter>
#include "TankClient.h"
QList<QImage> Explode::ExplodeImgs;

Explode::Explode(int x,int y,TankClient* tc)
{
    this->_x = x;
    this->_y = y;
    this->_live = true;
    this->_i = 0;
    int is[10] = {10,12,15,20,23,25,27,30,32,35};
    for(int i = 0 ; i < 10 ;i++)
    {
        this->_dis[i] = is[i];
    }
    this->_tc = tc;
}
void Explode::drawExplode(QPainter &p)
{
    if(!_live)
    {
        _tc->_explodes.removeOne(this);
        return;
    }
    p.drawImage(_x,_y,ExplodeImgs[_i]);
    _i++;
    if(_i == 11)
    {
        _i = 0;
        this->_live = false;
    }
}
