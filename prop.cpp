#include "Prop.h"
#include "TankClient.h"
#include <QDebug>
QList<QImage> Prop::PropImgs;
Prop::Prop(int x,int y,int w,int h,TankClient* tc,BUFF buf)
{
    this->_x = x;
    this->_y = y;
    this->_w = w;
    this->_h = h;
    this->_tc = tc;
    this->_buf = buf;
    this->_blacki = 0;
}
void Prop::drawProp(QPainter &p)
{
    if(_live)
    {
        switch (_buf) {
        case Frez: p.drawImage(QRect(_x,_y,45,45),PropImgs[14]); break;
        case Rush: p.drawImage(QRect(_x,_y,45,45),PropImgs[15]); break;
        case Burn: p.drawImage(QRect(_x,_y,45,45),PropImgs[16]); break;
        case Power: p.drawImage(QRect(_x,_y,45,45),PropImgs[17]);break;
        case Invin: p.drawImage(QRect(_x,_y,45,45),PropImgs[18]);break;
        case Rank:  p.drawImage(QRect(_x,_y,45,45),PropImgs[19]);break;
        case LiveUp:p.drawImage(QRect(_x,_y,45,45),PropImgs[20]);break;
        case BlackHole:  p.drawImage(QRect(_x,_y,60,60),PropImgs[_blacki]);  _blacki++;_blacki=_blacki%14 ;break;
        default: break;
        }
    }
    else if(!_live&&_buf==BlackHole)
    {
        while (_tc->_bh.size()>0) {
           _tc->_bh.removeOne(_tc->_bh[0]);
        }
//        delete _tc->_bh1;
//        delete _tc->_bh2;
//        _tc->_bh1 = NULL;
//        _tc->_bh2 = NULL;
    }
    else if(!_live&&_buf!=BlackHole)
    {
        _tc->_props.removeOne(this);
    }
}
bool Prop::hitWall(Wall *w)
{
    if((w->_type==Iron||w->_type==River)&&_buf == BlackHole)
    {
//        if(_live&&_y<=w->_y+30&&_y>=w->_y-60&&_x<=w->_x+30&&_x>=w->_x-60)
//        {
//            int x = (int)(qrand()%88);
//            int y = (int)(qrand()%64);
//            while(15*y<=w->_y+30&&15*y>=w->_y-60&&15*x<=w->_x+30&&15*x>=w->_x-60)
//            {
//                x = (int)(qrand()%88);
//                y = (int)(qrand()%64);
//            }
//            Prop* p = new Prop(x*15,y*15,60,60,_tc,BlackHole);
//            _tc->_bh.push_back(p);
//            _tc->_bh.removeOne(this);
//        }
//        return true;
//        while(_tc->_bh.size()>0)
//        {
//            _tc->_bh.removeOne()
//        }

        while((_tc->_bh[0]->_live&&_tc->_bh[0]->_y<=w->_y+30&&_tc->_bh[0]->_y>=w->_y-60&&_tc->_bh[0]->_x<=w->_x+30&&_tc->_bh[0]->_x>=w->_x-60)||
              (_tc->_bh[1]->_live&&_tc->_bh[1]->_y<=w->_y+30&&_tc->_bh[1]->_y>=w->_y-60&&_tc->_bh[1]->_x<=w->_x+30&&_tc->_bh[1]->_x>=w->_x-60))
        {
            _tc->makeBlackholes(_tc->_maps[_tc->_level-1]._myWall);
        }
//        while(_live&&_y<=w->_y+30&&_y>=w->_y-60&&_x<=w->_x+30&&_x>=w->_x-60)
//        {
//            _tc->makeBlackholes();
//        }
        return true;
    }
    else if((w->_type==Iron||w->_type==River)&&_buf != BlackHole)
    {
        if(_live&&_y<=w->_y+30&&_y>=w->_y-60&&_x<=w->_x+30&&_x>=w->_x-60)
            _live = false;
         return false;
    }
    else if(w->_type==Brick||w->_type==Grass||w->_type==Ice||w->_type==Lava)
    {
        _live=true;
        return false;
    }
//    if(_live&&_y<=w->_y+30&&_y>=w->_y-60&&_x<=w->_x+30&&_x>=w->_x-60)
//    {

//        if(w->_type==Iron||w->_type==River)
//        {
//            if(_buf == BlackHole)
//            {
//                for(int i = 0 ; i < _tc->_bh.size() ; i++)
//                {
//                    _tc->_bh[i]->_live = false;
//                }
//            }
//            else
//            {
//                _live = false;
//            }
//            return false;
//        }
//        else if(w->_type==Brick||w->_type==Grass||w->_type==Ice||w->_type==Lava)
//        {
//            _live=true;
//            return true;
//        }
//    }
//    return false;
}

void Prop::hitWalls(QList<Wall *> ws)
{
    if(_buf != BlackHole)
    {
        for(int i = 0 ; i < ws.size() ; i++)
        {
            if(hitWall(ws[i])) return;
        }
    }
    else
    {
        //bool ok = false;
        int k = 0;
        int m = 0;
        while(true)
        {
            for(int i = 0 ; i < ws.size() ; i++)
            {
                if(ws[i]->_type==Iron||ws[i]->_type==River)
                {
                    m++;
                    if((_tc->_bh[0]->_live&&(_tc->_bh[0]->_y>=ws[i]->_y+30||_tc->_bh[0]->_y<=ws[i]->_y-30)&&(_tc->_bh[0]->_x>=ws[i]->_x+30||_tc->_bh[0]->_x<=ws[i]->_x-30))||
                        (_tc->_bh[1]->_live&&(_tc->_bh[1]->_y>=ws[i]->_y+30||_tc->_bh[1]->_y<=ws[i]->_y-30)&&(_tc->_bh[1]->_x>=ws[i]->_x+30||_tc->_bh[1]->_x<=ws[i]->_x-30)))
                    {
                        k++;
                        if(k!=m)
                        {
                            k = 0;
                            m = 0;
                            _tc->makeBlackholes(_tc->_maps[_tc->_level-1]._myWall);
                            break;
                        }
                    }
                }
            }
            if(k == m)
            {
//                ok = true;
                break;
            }
        }
    }
}

