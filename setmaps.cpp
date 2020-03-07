#include "TankClient.h"
#include "Wall.h"
void set1(TankClient* tc)//小猪佩奇
{
    Wall *w;
    for(int i(0);i<44;i++)
    {
        w = new Wall(30*i,90,30,30,Brick,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
    for(int i(9);i<13;i++)
    {
        w = new Wall(30*i,240,30,30,River,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
    for(int i(28);i<32;i++)
    {
    w = new Wall(30*i,240,30,30,River,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
    for(int i(7);i<18;i++)
    {
        w = new Wall(60,30*i,30,30,Brick,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
    for(int i(20);i<32;i++)
    {
        w = new Wall(60,30*i,30,30,Brick,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
    for(int i(7);i<18;i++)
    {
        w = new Wall(1230,30*i,30,30,Brick,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
    for(int i(20);i<32;i++)
    {
        w = new Wall(1230,30*i,30,30,Brick,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
    w = new Wall(60,30*18,30,30,Iron,tc,30);
    tc->_maps[0]._myWall.push_back(w);
    w = new Wall(60,30*19,30,30,Iron,tc,30);
    tc->_maps[0]._myWall.push_back(w);
    w = new Wall(1230,30*18,30,30,Iron,tc,30);
    tc->_maps[0]._myWall.push_back(w);
    w = new Wall(1230,30*19,30,30,Iron,tc,30);
    tc->_maps[0]._myWall.push_back(w);
    for(int i(12);i<20;i++)
    {
        w = new Wall(30*i,600,30,30,Brick,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
    for(int i(24);i<32;i++)
    {
        w = new Wall(30*i,600,30,30,Brick,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
    for(int i(20);i<24;i++)
    {
        w = new Wall(30*i,600,30,30,Iron,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
    for(int i(12);i<32;i++)
    {
        w = new Wall(30*i,630,30,30,Brick,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
    for(int i(22);i<32;i++)
    {
        w = new Wall(30*12,30*i,30,30,Brick,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
    for(int i(22);i<32;i++)
    {
        w = new Wall(30*13,30*i,30,30,Brick,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
    for(int i(22);i<32;i++)
    {
        w = new Wall(30*30,30*i,30,30,Brick,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
    for(int i(22);i<32;i++)
    {
        w = new Wall(30*31,30*i,30,30,Brick,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*19,30*i,30,30,Brick,tc,30);
//        tc->_maps[0]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*20,30*i,30,30,Brick,tc,30);
//        tc->_maps[0]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*23,30*i,30,30,Brick,tc,30);
//        tc->_maps[0]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*24,30*i,30,30,Brick,tc,30);
//        tc->_maps[0]._myWall.push_back(w);
//    }
//    for(int i(28);i<30;i++)
//    {
//        w = new Wall(30*21,30*i,30,30,Brick,tc,30);
//        tc->_maps[0]._myWall.push_back(w);
//    }
//    for(int i(28);i<30;i++)
//    {
//        w = new Wall(30*22,30*i,30,30,Brick,tc,30);
//        tc->_maps[0]._myWall.push_back(w);
//    }
    for(int i =19;i<24;i++)
    {
        w = new Wall(30*i,30*30,30,30,Brick,tc,30);
        tc->_maps[0]._myWall.push_back(w);
    }
    w = new Wall(30*19,30*31,30,30,Brick,tc,30);
    tc->_maps[0]._myWall.push_back(w);
    w = new Wall(30*21,30*31,30,30,Brick,tc,30);
    tc->_maps[0]._myWall.push_back(w);
    w = new Wall(30*23,30*31,30,30,Brick,tc,30);
    tc->_maps[0]._myWall.push_back(w);

}
void set2(TankClient* tc)
{
    Wall *w;
        for(int i(16);i < 28;i++)
        {
             w = new Wall(30*i,90,30,30,Brick,tc,30);
             tc->_maps[1]._myWall.push_back(w);
        }
        for(int i(14);i < 30;i++)
        {
             w = new Wall(30*i,120,30,30,Brick,tc,30);
             tc->_maps[1]._myWall.push_back(w);
        }
        for(int i(12);i < 16;i++)
        {
             w = new Wall(30*i,150,30,30,Brick,tc,30);
             tc->_maps[1]._myWall.push_back(w);
        }
        for(int i(28);i < 32;i++)
        {
             w = new Wall(30*i,150,30,30,Brick,tc,30);
             tc->_maps[1]._myWall.push_back(w);
        }
        for(int i(11);i < 14;i++)
        {
             w = new Wall(30*i,180,30,30,Brick,tc,30);
             tc->_maps[1]._myWall.push_back(w);
        }
        for(int i(30);i < 33;i++)
        {
             w = new Wall(30*i,180,30,30,Brick,tc,30);
             tc->_maps[1]._myWall.push_back(w);
        }
        for(int i = 0;i<2;i++){
        w = new Wall(30*10,210+30*i,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*11,210+30*i,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*16,210+30*i,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*17,210+30*i,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*26,210+30*i,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*27,210+30*i,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*32,210+30*i,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*33,210+30*i,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        }
        w = new Wall(30*10,270,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*9,270,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*16,270,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*17,270,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*26,270,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*27,270,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*34,270,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*33,270,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*9,300,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*10,300,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*33,300,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*34,300,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*9,330,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*10,330,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*33,330,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*34,330,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*21,330,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*22,330,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*9,360,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*10,360,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*33,360,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*34,360,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*21,360,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*22,360,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*9,390,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*10,390,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*33,390,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*34,390,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*9,420,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*10,420,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*33,420,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*34,420,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*10,450,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*11,450,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*32,450,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*33,450,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        for(int i(18);i<26;i++)
        {
            w = new Wall(30*i,450,30,30,Iron,tc,30);
            tc->_maps[1]._myWall.push_back(w);
        }
        w = new Wall(30*10,480,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*11,480,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*32,480,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*33,480,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*18,480,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*19,480,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*24,480,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*25,480,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        for(int i(20);i<24;i++)
        {
            w = new Wall(30*i,480,30,30,River,tc,30);
            tc->_maps[1]._myWall.push_back(w);
        }
        w = new Wall(30*11,510,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*12,510,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*31,510,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*32,510,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*18,510,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*19,510,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*24,510,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*25,510,30,30,Iron,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        for(int i(20);i<24;i++)
        {
            w = new Wall(30*i,510,30,30,River,tc,30);
            tc->_maps[1]._myWall.push_back(w);
        }
        w = new Wall(30*11,540,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*12,540,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*31,540,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*32,540,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        for(int i(18);i<26;i++)
        {
            w = new Wall(30*i,540,30,30,Iron,tc,30);
            tc->_maps[1]._myWall.push_back(w);
        }
        for(int i(11);i<15;i++)
        {
            w = new Wall(30*i,570,30,30,Brick,tc,30);
            tc->_maps[1]._myWall.push_back(w);
        }
        for(int i(29);i<33;i++)
        {
            w = new Wall(30*i,570,30,30,Brick,tc,30);
            tc->_maps[1]._myWall.push_back(w);
        }
        w = new Wall(30*13,600,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*14,600,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*29,600,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*30,600,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        for(int i(13);i<17;i++)
        {
            w = new Wall(30*i,630,30,30,Brick,tc,30);
            tc->_maps[1]._myWall.push_back(w);
        }
        for(int i(27);i<31;i++)
        {
            w = new Wall(30*i,630,30,30,Brick,tc,30);
            tc->_maps[1]._myWall.push_back(w);
        }
        for(int i(15);i<29;i++)
        {
            w = new Wall(30*i,660,30,30,Brick,tc,30);
            tc->_maps[1]._myWall.push_back(w);
        }
        for(int i(17);i<27;i++)
        {
            w = new Wall(30*i,690,30,30,Brick,tc,30);
            tc->_maps[1]._myWall.push_back(w);
        }
        for(int i(19);i<25;i++)
        {
            w = new Wall(30*i,720,30,30,Brick,tc,30);
            tc->_maps[1]._myWall.push_back(w);
        }
//        for(int i(19);i<25;i++)
//        {
//            w = new Wall(30*i,840,30,30,Brick,tc,30);
//            tc->_maps[1]._myWall.push_back(w);
//        }
//        for(int i(19);i<25;i++)
//        {
//            w = new Wall(30*i,870,30,30,Brick,tc,30);
//            tc->_maps[1]._myWall.push_back(w);
//        }
//        w = new Wall(30*19,900,30,30,Brick,tc,30);
//        tc->_maps[1]._myWall.push_back(w);
//        w = new Wall(30*20,900,30,30,Brick,tc,30);
//        tc->_maps[1]._myWall.push_back(w);
//        w = new Wall(30*23,900,30,30,Brick,tc,30);
//        tc->_maps[1]._myWall.push_back(w);
//        w = new Wall(30*24,900,30,30,Brick,tc,30);
//        tc->_maps[1]._myWall.push_back(w);
//        w = new Wall(30*19,930,30,30,Brick,tc,30);
//        tc->_maps[1]._myWall.push_back(w);
//        w = new Wall(30*20,930,30,30,Brick,tc,30);
//        tc->_maps[1]._myWall.push_back(w);
//        w = new Wall(30*23,930,30,30,Brick,tc,30);
//        tc->_maps[1]._myWall.push_back(w);
//        w = new Wall(30*24,930,30,30,Brick,tc,30);
//        tc->_maps[1]._myWall.push_back(w);
        for(int i =19;i<24;i++)
        {
            w = new Wall(30*i,30*30,30,30,Brick,tc,30);
            tc->_maps[1]._myWall.push_back(w);
        }
        w = new Wall(30*19,30*31,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*21,30*31,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);
        w = new Wall(30*23,30*31,30,30,Brick,tc,30);
        tc->_maps[1]._myWall.push_back(w);

}
void set3(TankClient* tc)
{
    Wall *w;
        for(int i=0;i<=43;i++)
        {
            for(int j=5;j<=7;j++)
            {
                w=new Wall(30*i,j*30,30,30,Brick,tc,30);
                tc->_maps[2]._myWall.push_back(w);
            }
        }
        for(int i=16;i<=27;i++)
        {
             w=new Wall(30*i,19*30,30,30,Iron,tc,30);
             tc->_maps[2]._myWall.push_back(w);
        }

        for(int i=1;i<=3;i++)
        {
            for(int j=17;j<=31;j++)
            {
                w=new Wall(30*i,j*30,30,30,Brick,tc,30);
                tc->_maps[2]._myWall.push_back(w);
            }
        }
        for(int i=40;i<=42;i++)
        {
            for(int j=16;j<=31;j++)
            {
                w=new Wall(30*i,j*30,30,30,Brick,tc,30);
                tc->_maps[2]._myWall.push_back(w);
            }
        }
        for(int i=10;i<=15;i++)
        {
            w=new Wall(30*i,570,30,30,Brick,tc,30);
            tc->_maps[2]._myWall.push_back(w);
        }
        for(int i=28;i<=33;i++)
        {
            w=new Wall(30*i,570,30,30,Brick,tc,30);
            tc->_maps[2]._myWall.push_back(w);
        }
        for(int i=12;i<=13;i++)
        {
            for(int j=20;j<=31;j++)
            {
                w=new Wall(30*i,j*30,30,30,Brick,tc,30);
                tc->_maps[2]._myWall.push_back(w);
            }
        }
        for(int i=30;i<=31;i++)
        {
            for(int j=20;j<=31;j++)
            {
                w=new Wall(30*i,j*30,30,30,Brick,tc,30);
                tc->_maps[2]._myWall.push_back(w);
            }
        }
        for(int j=20;j<=24;j++)
        {
            w=new Wall(300,j*30,30,30,Iron,tc,30);
            tc->_maps[2]._myWall.push_back(w);
        }
        for(int j=20;j<=24;j++)
        {
            w=new Wall(30*33,j*30,30,30,Iron,tc,30);
            tc->_maps[2]._myWall.push_back(w);
        }
        for(int j=27;j<=31;j++)
        {
            w=new Wall(300,j*30,30,30,Iron,tc,30);
            tc->_maps[2]._myWall.push_back(w);
        }
        for(int j=27;j<=31;j++)
        {
            w=new Wall(30*33,j*30,30,30,Iron,tc,30);
            tc->_maps[2]._myWall.push_back(w);
        }
        w=new Wall(300,26*30,30,30,Brick,tc,30);
        tc->_maps[2]._myWall.push_back(w);
        w=new Wall(300,25*30,30,30,Brick,tc,30);
        tc->_maps[2]._myWall.push_back(w);
        w=new Wall(30*33,26*30,30,30,Brick,tc,30);
        tc->_maps[2]._myWall.push_back(w);
        w=new Wall(30*33,25*30,30,30,Brick,tc,30);
        tc->_maps[2]._myWall.push_back(w);
//        for(int i=19;i<=25;i++)
//        {
//            for(int j=28;j<=29;j++)
//            {
//                w=new Wall(30*i,j*30,30,30,Brick,tc,30);
//                tc->_maps[2]._myWall.push_back(w);
//            }
//        }
//        for(int i=24;i<=25;i++)
//        {
//            for(int j=30;j<=31;j++)
//            {
//                w=new Wall(30*i,j*30,30,30,Brick,tc,30);
//                tc->_maps[2]._myWall.push_back(w);
//            }
//        }
//        for(int i=19;i<=20;i++)
//        {
//            for(int j=30;j<=31;j++)
//            {
//                w=new Wall(30*i,j*30,30,30,Brick,tc,30);
//                tc->_maps[2]._myWall.push_back(w);
//            }
//        }
        for(int i =19;i<24;i++)
        {
            w = new Wall(30*i,30*30,30,30,Brick,tc,30);
            tc->_maps[2]._myWall.push_back(w);
        }
        w = new Wall(30*19,30*31,30,30,Brick,tc,30);
        tc->_maps[2]._myWall.push_back(w);
        w = new Wall(30*21,30*31,30,30,Brick,tc,30);
        tc->_maps[2]._myWall.push_back(w);
        w = new Wall(30*23,30*31,30,30,Brick,tc,30);
        tc->_maps[2]._myWall.push_back(w);
}
void set4(TankClient* tc)
{
    Wall* w;
    for(int i = 20;i < 24;i++)
    {
        w = new Wall(30*i,0,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 20;i < 24;i++)
    {
        w = new Wall(30*i,30,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 16;i < 28;i++)
    {
        w = new Wall(30*i,60,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 15;i < 29;i++)
    {
        w = new Wall(30*i,90,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 13;i < 31;i++)
    {
        w = new Wall(30*i,120,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 6;i < 38;i++)
    {
        w = new Wall(30*i,120,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 6;i < 32;i++)
    {
        w = new Wall(30*14,30*i,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 6;i < 32;i++)
    {
        w = new Wall(30*15,30*i,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 7;i < 32;i++)
    {
        w = new Wall(30*16,30*i,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 7;i < 32;i++)
    {
        w = new Wall(30*17,30*i,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 7;i < 32;i++)
    {
        w = new Wall(30*26,30*i,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 7;i < 32;i++)
    {
        w = new Wall(30*27,30*i,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 6;i < 32;i++)
    {
        w = new Wall(30*28,30*i,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 6;i < 32;i++)
    {
        w = new Wall(30*29,30*i,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 16;i <19;i++)
    {
        w = new Wall(30*i,30*6,30,30,Iron,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 25;i <28;i++)
    {
        w = new Wall(30*i,30*6,30,30,Iron,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 20;i <24;i++)
    {
        w = new Wall(30*i,30*12,30,30,River,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 8;i <11;i++)
    {
        w = new Wall(30*19,30*i,30,30,River,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 8;i <11;i++)
    {
        w = new Wall(30*24,30*i,30,30,River,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 0;i < 12;i++)
    {
        w = new Wall(30*i,30*12,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 0;i < 12;i++)
    {
        w = new Wall(30*i,30*13,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 32;i < 44;i++)
    {
        w = new Wall(30*i,30*12,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 32;i < 44;i++)
    {
        w = new Wall(30*i,30*13,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 14;i < 32;i++)
    {
        w = new Wall(30*0,30*i,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 14;i < 32;i++)
    {
        w = new Wall(30*1,30*i,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 14;i < 32;i++)
    {
        w = new Wall(30*42,30*i,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    for(int i = 14;i < 32;i++)
    {
        w = new Wall(30*43,30*i,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*19,30*i,30,30,Brick,tc,30);
//        tc->_maps[3]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*20,30*i,30,30,Brick,tc,30);
//        tc->_maps[3]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*23,30*i,30,30,Brick,tc,30);
//        tc->_maps[3]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*24,30*i,30,30,Brick,tc,30);
//        tc->_maps[3]._myWall.push_back(w);
//    }
//    for(int i(28);i<30;i++)
//    {
//        w = new Wall(30*21,30*i,30,30,Brick,tc,30);
//        tc->_maps[3]._myWall.push_back(w);
//    }
//    for(int i(28);i<30;i++)
//    {
//        w = new Wall(30*22,30*i,30,30,Brick,tc,30);
//        tc->_maps[3]._myWall.push_back(w);
//    }
    for(int i =19;i<24;i++)
    {
        w = new Wall(30*i,30*30,30,30,Brick,tc,30);
        tc->_maps[3]._myWall.push_back(w);
    }
    w = new Wall(30*19,30*31,30,30,Brick,tc,30);
    tc->_maps[3]._myWall.push_back(w);
    w = new Wall(30*21,30*31,30,30,Brick,tc,30);
    tc->_maps[3]._myWall.push_back(w);
    w = new Wall(30*23,30*31,30,30,Brick,tc,30);
    tc->_maps[3]._myWall.push_back(w);
}
void set5(TankClient* tc)
{
    Wall* w;
    for(int i = 13 ; i < 20 ; i++)
    {
        if(i == 16)
            continue;
        else
        {
            w = new Wall(30*i,30,30,30,Brick,tc,30);
            tc->_maps[4]._myWall.push_back(w);
        }
    }
    for(int i = 13 ; i < 20 ; i++)
    {
        if(i == 16||i == 14||i == 18)
            continue;
        else
        {
            w = new Wall(30*i,60,30,30,Brick,tc,30);
            tc->_maps[4]._myWall.push_back(w);
        }
    }
    for(int i = 12 ; i < 28 ; i++)
    {
        if(i == 14||i == 18)
            continue;
        else
        {
            w = new Wall(30*i,90,30,30,Brick,tc,30);
            tc->_maps[4]._myWall.push_back(w);
        }
    }
    w = new Wall(30*11,120,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*24,120,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*28,120,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*10,150,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*13,150,30,30,River,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*14,150,30,30,River,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*18,150,30,30,River,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*19,150,30,30,River,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*23,150,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*25,150,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*27,150,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*28,150,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*9,180,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*13,180,30,30,River,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*14,180,30,30,River,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*18,180,30,30,River,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*19,180,30,30,River,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*24,180,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*27,180,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*9,210,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    for(int i = 22 ; i < 27 ; i++)
    {
        w = new Wall(30*i,210,30,30,Brick,tc,30);
        tc->_maps[4]._myWall.push_back(w);
    }
    w = new Wall(30*9,240,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*22,240,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*9,270,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*23,270,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*9,300,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*23,300,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*9,330,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*23,330,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*14,330,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*19,330,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*10,360,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*23,360,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*15,360,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*18,360,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*16,390,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*17,390,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*11,390,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*22,390,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*12,420,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*21,420,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*11,450,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*13,450,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*19,450,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*20,450,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*10,480,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*21,480,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    for(int i = 14 ; i < 19 ; i++)
    {
        w = new Wall(30*i,480,30,30,Brick,tc,30);
        tc->_maps[4]._myWall.push_back(w);
    }
    w = new Wall(30*9,510,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*22,510,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*8,540,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*9,540,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*22,540,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*23,540,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*7,570,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*9,570,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*22,570,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*23,570,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*24,570,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*6,600,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*8,600,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*9,600,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*23,600,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*25,600,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    for(int i = 3 ; i < 6 ; i++)
    {
        w = new Wall(30*i,630,30,30,Iron,tc,30);
        tc->_maps[4]._myWall.push_back(w);
    }
    for(int i = 26 ; i < 29 ; i++)
    {
        w = new Wall(30*i,630,30,30,Iron,tc,30);
        tc->_maps[4]._myWall.push_back(w);
    }
    w = new Wall(30*8,630,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*23,630,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*24,630,30,30,Iron,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    for(int i = 22 ; i < 25 ; i++)
    {
        w = new Wall(30*8,30*i,30,30,Brick,tc,30);
        tc->_maps[4]._myWall.push_back(w);
    }
    for(int i = 22 ; i < 25 ; i++)
    {
        w = new Wall(30*24,30*i,30,30,Brick,tc,30);
        tc->_maps[4]._myWall.push_back(w);
    }
    for(int i = 24 ; i < 30 ; i++)
    {
        w = new Wall(30*7,30*i,30,30,Brick,tc,30);
        tc->_maps[4]._myWall.push_back(w);
    }
    for(int i = 24 ; i < 30 ; i++)
    {
        w = new Wall(30*25,30*i,30,30,Brick,tc,30);
        tc->_maps[4]._myWall.push_back(w);
    }
    for(int i = 8 ; i < 25 ; i++)
    {
        w = new Wall(30*i,30*29,30,30,Brick,tc,30);
        tc->_maps[4]._myWall.push_back(w);
    }
    w = new Wall(30*14,30*30,30,30,Brick,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*14,30*31,30,30,Brick,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*17,30*30,30,30,Brick,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*17,30*31,30,30,Brick,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*3,30*25,30,30,Brick,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*5,30*25,30,30,Brick,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*2,30*26,30,30,Brick,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*4,30*26,30,30,Brick,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*3,30*27,30,30,Brick,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*5,30*27,30,30,Brick,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*6,30*28,30,30,Brick,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*4,30*22,30,30,Iron,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*5,30*22,30,30,Iron,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*26,30*22,30,30,Iron,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*27,30*22,30,30,Iron,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*3,30*23,30,30,Iron,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*5,30*23,30,30,Iron,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*26,30*23,30,30,Iron,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*28,30*23,30,30,Iron,tc,0);
    tc->_maps[4]._myWall.push_back(w);
    //
    for(int i =19;i<24;i++)
    {
        w = new Wall(30*i,30*30,30,30,Brick,tc,30);
        tc->_maps[4]._myWall.push_back(w);
    }
    w = new Wall(30*19,30*31,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*21,30*31,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
    w = new Wall(30*23,30*31,30,30,Brick,tc,30);
    tc->_maps[4]._myWall.push_back(w);
}
void set6(TankClient* tc)
{
    Wall*w;
     for(int i=4;i<=13;i++)
     {
         for(int j=4;j<=7;j++)
         {
             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int i=30;i<=39;i++)
     {
         for(int j=4;j<=7;j++)
         {
             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int i=4;i<=6;i++)
     {
         for(int j=8;j<=10;j++)
         {
             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int i=11;i<=13;i++)
     {
         for(int j=8;j<=10;j++)
         {
             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int i=30;i<=32;i++)
     {
         for(int j=8;j<=10;j++)
         {
             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int i=37;i<=39;i++)
     {
         for(int j=8;j<=10;j++)
         {
             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int i=4;i<=13;i++)
     {
         for(int j=13;j<=14;j++)
         {
             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int i=30;i<=39;i++)
     {
         for(int j=13;j<=14;j++)
         {
             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int j=4;j<=14;j++)
     {
         w=new Wall(30*15,j*30,30,30,Brick,tc,30);
         tc->_maps[5]._myWall.push_back(w);
     }
     for(int j=4;j<=14;j++)
     {
         w=new Wall(30*28,j*30,30,30,Brick,tc,30);
         tc->_maps[5]._myWall.push_back(w);
     }
     for(int i=16;i<=17;i++)
     {
         for(int j=4;j<=7;j++)
         {
             w=new Wall(30*i,j*30,30,30,Iron,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int i=26;i<=27;i++)
     {
         for(int j=4;j<=7;j++)
         {
             w=new Wall(30*i,j*30,30,30,Iron,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int i=16;i<=17;i++)
     {
         for(int j=8;j<=23;j++)
         {
             w=new Wall(30*i,j*30,30,30,River,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int i=26;i<=27;i++)
     {
         for(int j=8;j<=23;j++)
         {
             w=new Wall(30*i,j*30,30,30,River,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int i=16;i<=27;i++)
     {
         for(int j=20;j<=22;j++)
         {
             w=new Wall(30*i,j*30,30,30,River,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int i=18;i<=25;i++)
     {
         for(int j=4;j<=14;j++)
         {
             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int i=18;i<=25;i++)
     {
         for(int j=16;j<=19;j++)
         {
             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int i=18;i<=20;i++)
     {
         w=new Wall(30*i,15*30,30,30,Brick,tc,30);
         tc->_maps[5]._myWall.push_back(w);
     }
     for(int i=23;i<=25;i++)
     {
         w=new Wall(30*i,15*30,30,30,Brick,tc,30);
         tc->_maps[5]._myWall.push_back(w);
     }
     for(int i=21;i<=22;i++)
     {
         w=new Wall(30*i,15*30,30,30,Iron,tc,30);
         tc->_maps[5]._myWall.push_back(w);
     }
     for(int i=0;i<=15;i++)
     {
         w=new Wall(30*i,17*30,30,30,Brick,tc,30);
         tc->_maps[5]._myWall.push_back(w);
     }
     for(int i=18;i<=25;i++)
     {
         w=new Wall(30*i,17*30,30,30,Brick,tc,30);
         tc->_maps[5]._myWall.push_back(w);
     }
     for(int i=28;i<=43;i++)
     {
         w=new Wall(30*i,17*30,30,30,Brick,tc,30);
         tc->_maps[5]._myWall.push_back(w);
     }
     for(int i=4;i<=15;i++)
     {
         for(int j=18;j<=19;j++)
         {
             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int i=28;i<=39;i++)
     {
         for(int j=18;j<=19;j++)
         {
             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
     for(int j=20;j<=31;j++)
     {
         w=new Wall(30*4,j*30,30,30,Brick,tc,30);
         tc->_maps[5]._myWall.push_back(w);
     }
     for(int j=20;j<=31;j++)
     {
         w=new Wall(30*39,j*30,30,30,Brick,tc,30);
         tc->_maps[5]._myWall.push_back(w);
     }
     for(int i=12;i<=15;i++)
     {
        for(int j=20;j<=27;j++)
        {
            w=new Wall(30*i,j*30,30,30,Brick,tc,30);
            tc->_maps[5]._myWall.push_back(w);
        }
     }
     for(int i=28;i<=31;i++)
     {
        for(int j=20;j<=27;j++)
        {
            w=new Wall(30*i,j*30,30,30,Brick,tc,30);
            tc->_maps[5]._myWall.push_back(w);
        }
     }
     for(int i=12;i<=31;i++)
     {
         for(int j=24;j<=27;j++)
         {
             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
             tc->_maps[5]._myWall.push_back(w);
         }
     }
//     for(int i=19;i<=24;i++)
//     {
//         for(int j=28;j<=29;j++)
//         {
//             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
//             tc->_maps[5]._myWall.push_back(w);
//         }
//     }
//     for(int i=19;i<=20;i++)
//     {
//         for(int j=30;j<=31;j++)
//         {
//             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
//             tc->_maps[5]._myWall.push_back(w);
//         }
//     }
//     for(int i=23;i<=24;i++)
//     {
//         for(int j=30;j<=31;j++)
//         {
//             w=new Wall(30*i,j*30,30,30,Brick,tc,30);
//             tc->_maps[5]._myWall.push_back(w);
//         }
//     }
     for(int i =19;i<24;i++)
     {
         w = new Wall(30*i,30*30,30,30,Brick,tc,30);
         tc->_maps[5]._myWall.push_back(w);
     }
     w = new Wall(30*19,30*31,30,30,Brick,tc,30);
     tc->_maps[5]._myWall.push_back(w);
     w = new Wall(30*21,30*31,30,30,Brick,tc,30);
     tc->_maps[5]._myWall.push_back(w);
     w = new Wall(30*23,30*31,30,30,Brick,tc,30);
     tc->_maps[5]._myWall.push_back(w);
}
void set7(TankClient* tc)
{
    Wall* w;
   for(int i = 3;i < 32;i++)
   {
       w = new Wall(30*2,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 3;i < 32;i++)
   {
       w = new Wall(30*3,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 4;i < 7;i++)
   {
       w = new Wall(30*i,30*31,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 3;i < 32;i++)
   {
       w = new Wall(30*7,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 3;i < 32;i++)
   {
       w = new Wall(30*8,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 9;i < 12;i++)
   {
       w = new Wall(30*i,30*3,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 3;i < 32;i++)
   {
       w = new Wall(30*12,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 3;i < 32;i++)
   {
       w = new Wall(30*13,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 3;i < 28;i++)
   {
       w = new Wall(30*17,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 3;i < 28;i++)
   {
       w = new Wall(30*18,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 3;i < 28;i++)
   {
       w = new Wall(30*25,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 3;i < 28;i++)
   {
       w = new Wall(30*26,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 3;i < 32;i++)
   {
       w = new Wall(30*30,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 3;i < 32;i++)
   {
       w = new Wall(30*31,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 3;i < 32;i++)
   {
       w = new Wall(30*35,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 3;i < 32;i++)
   {
       w = new Wall(30*36,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 3;i < 32;i++)
   {
       w = new Wall(30*40,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 3;i < 32;i++)
   {
       w = new Wall(30*41,30*i,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 32;i < 35;i++)
   {
       w = new Wall(30*i,30*3,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 33;i < 36;i++)
   {
       w = new Wall(30*i,30*31,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   for(int i = 20;i < 24;i++)
   {
       w = new Wall(30*i,30*24,30,30,Iron,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
//   for(int i(28);i<32;i++)
//   {
//       w = new Wall(30*19,30*i,30,30,Brick,tc,30);
//       tc->_maps[6]._myWall.push_back(w);
//   }
//   for(int i(28);i<32;i++)
//   {
//       w = new Wall(30*20,30*i,30,30,Brick,tc,30);
//       tc->_maps[6]._myWall.push_back(w);
//   }
//   for(int i(28);i<32;i++)
//   {
//       w = new Wall(30*23,30*i,30,30,Brick,tc,30);
//       tc->_maps[6]._myWall.push_back(w);
//   }
//   for(int i(28);i<32;i++)
//   {
//       w = new Wall(30*24,30*i,30,30,Brick,tc,30);
//       tc->_maps[6]._myWall.push_back(w);
//   }
//   for(int i(28);i<30;i++)
//   {
//       w = new Wall(30*21,30*i,30,30,Brick,tc,30);
//       tc->_maps[6]._myWall.push_back(w);
//   }
//   for(int i(28);i<30;i++)
//   {
//       w = new Wall(30*22,30*i,30,30,Brick,tc,30);
//       tc->_maps[6]._myWall.push_back(w);
//   }
   for(int i =19;i<24;i++)
   {
       w = new Wall(30*i,30*30,30,30,Brick,tc,30);
       tc->_maps[6]._myWall.push_back(w);
   }
   w = new Wall(30*19,30*31,30,30,Brick,tc,30);
   tc->_maps[6]._myWall.push_back(w);
   w = new Wall(30*21,30*31,30,30,Brick,tc,30);
   tc->_maps[6]._myWall.push_back(w);
   w = new Wall(30*23,30*31,30,30,Brick,tc,30);
   tc->_maps[6]._myWall.push_back(w);
}
void set8(TankClient* tc)
{
    Wall* w;
    for(int i=8;i<=35;i++)
    {
        for(int j=2;j<=3;j++)
        {
            w=new Wall(30*i,j*30,30,30,Brick,tc,30);
            tc->_maps[7]._myWall.push_back(w);
        }
    }
    w=new Wall(30*2,5*30,30,30,River,tc,30);
    tc->_maps[7]._myWall.push_back(w);
    w=new Wall(30*3,5*30,30,30,River,tc,30);
    tc->_maps[7]._myWall.push_back(w);
    w=new Wall(30*40,5*30,30,30,River,tc,30);
    tc->_maps[7]._myWall.push_back(w);
    w=new Wall(30*41,5*30,30,30,River,tc,30);
    tc->_maps[7]._myWall.push_back(w);
    for(int i=2;i<=5;i++)
    {
        w=new Wall(30*i,6*30,30,30,River,tc,30);
        tc->_maps[7]._myWall.push_back(w);
    }
    for(int i=38;i<42;i++)
    {
        w=new Wall(30*i,6*30,30,30,River,tc,30);
        tc->_maps[7]._myWall.push_back(w);
    }
    for(int i=2;i<=7;i++)
    {
        w=new Wall(30*i,7*30,30,30,River,tc,30);
        tc->_maps[7]._myWall.push_back(w);
    }
    for(int i=36;i<42;i++)
    {
        w=new Wall(30*i,7*30,30,30,River,tc,30);
        tc->_maps[7]._myWall.push_back(w);
    }
    for(int i=2;i<=9;i++)
    {
        w=new Wall(30*i,8*30,30,30,River,tc,30);
        tc->_maps[7]._myWall.push_back(w);
    }
    for(int i=34;i<42;i++)
    {
        w=new Wall(30*i,8*30,30,30,River,tc,30);
        tc->_maps[7]._myWall.push_back(w);
    }
    for(int j=9;j<=23;j++)
    {
        w=new Wall(30*2,j*30,30,30,Brick,tc,30);
        tc->_maps[7]._myWall.push_back(w);
    }
    for(int j=9;j<=23;j++)
    {
        w=new Wall(30*41,j*30,30,30,Brick,tc,30);
        tc->_maps[7]._myWall.push_back(w);
    }
    for(int i=6;i<=11;i++)
    {
        w=new Wall(30*i,11*30,30,30,Iron,tc,30);
        tc->_maps[7]._myWall.push_back(w);
    }
    for(int i=32;i<=37;i++)
    {
        w=new Wall(30*i,11*30,30,30,Iron,tc,30);
        tc->_maps[7]._myWall.push_back(w);
    }
    for(int i=19;i<=20;i++)
    {
        w=new Wall(30*i,15*30,30,30,River,tc,30);
        tc->_maps[7]._myWall.push_back(w);
    }
    for(int i=23;i<=24;i++)
    {
        w=new Wall(30*i,15*30,30,30,River,tc,30);
        tc->_maps[7]._myWall.push_back(w);
    }
    for(int i=21;i<=22;i++)
    {
        w=new Wall(30*i,15*30,30,30,Brick,tc,30);
        tc->_maps[7]._myWall.push_back(w);
    }
    for(int i=21;i<=22;i++)
    {
        for(int j=16;j<=17;j++)
        {
            w=new Wall(30*i,j*30,30,30,Iron,tc,30);
            tc->_maps[7]._myWall.push_back(w);
        }
    }
    for(int i=12;i<=31;i++)
    {
        w=new Wall(30*i,20*30,30,30,Brick,tc,30);
        tc->_maps[7]._myWall.push_back(w);
    }
    for(int i=20;i<=23;i++)
    {
        for(int j=21;j<=24;j++)
        {
            w=new Wall(30*i,j*30,30,30,Brick,tc,30);
            tc->_maps[7]._myWall.push_back(w);
        }
    }
//    for(int i=19;i<=24;i++)
//    {
//        for(int j=28;j<=29;j++)
//        {
//            w=new Wall(30*i,j*30,30,30,Brick,tc,30);
//            tc->_maps[7]._myWall.push_back(w);
//        }
//    }
//    for(int i=19;i<=20;i++)
//    {
//        for(int j=30;j<=31;j++)
//        {
//            w=new Wall(30*i,j*30,30,30,Brick,tc,30);
//            tc->_maps[7]._myWall.push_back(w);
//        }
//    }
//    for(int i=23;i<=24;i++)
//    {
//        for(int j=30;j<=31;j++)
//        {
//            w=new Wall(30*i,j*30,30,30,Brick,tc,30);
//            tc->_maps[7]._myWall.push_back(w);
//        }
//    }
    for(int i =19;i<24;i++)
    {
        w = new Wall(30*i,30*30,30,30,Brick,tc,30);
        tc->_maps[7]._myWall.push_back(w);
    }
    w = new Wall(30*19,30*31,30,30,Brick,tc,30);
    tc->_maps[7]._myWall.push_back(w);
    w = new Wall(30*21,30*31,30,30,Brick,tc,30);
    tc->_maps[7]._myWall.push_back(w);
    w = new Wall(30*23,30*31,30,30,Brick,tc,30);
    tc->_maps[7]._myWall.push_back(w);
}
void set9(TankClient* tc)
{
    Wall*w;
   for(int i=0;i<=43;i++)
   {
       w=new Wall(30*i,3*30,30,30,Brick,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=3;i<=20;i++)
   {
       w=new Wall(30*i,4*30,30,30,River,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=21;i<=22;i++)
   {
       for(int j=4;j<=5;j++)
       {
           w=new Wall(30*i,j*30,30,30,Brick,tc,30);
           tc->_maps[8]._myWall.push_back(w);
       }
   }
   for(int i=23;i<=40;i++)
   {
       w=new Wall(30*i,4*30,30,30,River,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=0;i<=1;i++)
   {
       for(int j=4;j<=5;j++)
       {
           w=new Wall(30*i,j*30,30,30,Brick,tc,30);
           tc->_maps[8]._myWall.push_back(w);
       }
   }
   for(int i=41;i<=43;i++)
   {
       for(int j=4;j<=5;j++)
       {
           w=new Wall(30*i,j*30,30,30,Brick,tc,30);
           tc->_maps[8]._myWall.push_back(w);
       }
   }
   for(int i=3;i<=20;i++)
   {
       w=new Wall(30*i,5*30,30,30,Iron,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=23;i<=40;i++)
   {
       w=new Wall(30*i,5*30,30,30,Iron,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=0;i<=43;i++)
   {
       w=new Wall(30*i,7*30,30,30,Brick,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=0;i<=2;i++)
   {
       w=new Wall(30*i,8*30,30,30,River,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=5;i<=38;i++)
   {
       w=new Wall(30*i,8*30,30,30,River,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=41;i<=43;i++)
   {
       w=new Wall(30*i,8*30,30,30,River,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=3;i<=4;i++)
   {
       for(int j=8;j<=9;j++)
       {
           w=new Wall(30*i,j*30,30,30,Brick,tc,30);
           tc->_maps[8]._myWall.push_back(w);
       }
   }
   for(int i=39;i<=40;i++)
   {
       for(int j=8;j<=9;j++)
       {
           w=new Wall(30*i,j*30,30,30,Brick,tc,30);
           tc->_maps[8]._myWall.push_back(w);
       }
   }
   for(int i=0;i<=2;i++)
   {
       w=new Wall(30*i,9*30,30,30,Iron,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=5;i<=38;i++)
   {
       w=new Wall(30*i,9*30,30,30,Iron,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=41;i<=43;i++)
   {
       w=new Wall(30*i,9*30,30,30,Iron,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   w=new Wall(30*3,11*30,30,30,River,tc,30);
   tc->_maps[8]._myWall.push_back(w);
   w=new Wall(30*40,11*30,30,30,River,tc,30);
   tc->_maps[8]._myWall.push_back(w);
   for(int i=0;i<=3;i++)
   {
       w=new Wall(i*30,12*30,30,30,Brick,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=8;i<=35;i++)
   {
       w=new Wall(i*30,12*30,30,30,Brick,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=40;i<=43;i++)
   {
       w=new Wall(i*30,12*30,30,30,Brick,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=0;i<=3;i++)
   {
       w=new Wall(i*30,13*30,30,30,River,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=8;i<=35;i++)
   {
       w=new Wall(i*30,13*30,30,30,River,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=40;i<=43;i++)
   {
       w=new Wall(i*30,13*30,30,30,River,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=0;i<=3;i++)
   {
       w=new Wall(i*30,14*30,30,30,Iron,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=8;i<=35;i++)
   {
       w=new Wall(i*30,14*30,30,30,Iron,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=40;i<=43;i++)
   {
       w=new Wall(i*30,14*30,30,30,Iron,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=0;i<=43;i++)
   {
       w=new Wall(i*30,18*30,30,30,Brick,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=21;i<=22;i++)
   {
       for(int j=19;j<=20;j++)
       {
           w=new Wall(i*30,j*30,30,30,Brick,tc,30);
           tc->_maps[8]._myWall.push_back(w);
       }
   }
   for(int i=0;i<=20;i++)
   {
       w=new Wall(i*30,19*30,30,30,River,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=23;i<=43;i++)
   {
       w=new Wall(i*30,19*30,30,30,River,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=0;i<=10;i++)
   {
       w=new Wall(i*30,20*30,30,30,Iron,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=12;i<=20;i++)
   {
       w=new Wall(i*30,20*30,30,30,Iron,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=23;i<=31;i++)
   {
       w=new Wall(i*30,20*30,30,30,Iron,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   for(int i=33;i<=43;i++)
   {
       w=new Wall(i*30,20*30,30,30,Iron,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   w=new Wall(11*30,20*30,30,30,River,tc,30);
   tc->_maps[8]._myWall.push_back(w);
   w=new Wall(32*30,20*30,30,30,River,tc,30);
   tc->_maps[8]._myWall.push_back(w);
//   for(int i=19;i<=24;i++)
//   {
//       for(int j=28;j<=29;j++)
//       {
//           w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//           tc->_maps[8]._myWall.push_back(w);
//       }
//   }
//   for(int i=19;i<=20;i++)
//   {
//       for(int j=30;j<=31;j++)
//       {
//           w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//           tc->_maps[8]._myWall.push_back(w);
//       }
//   }
//   for(int i=23;i<=24;i++)
//   {
//       for(int j=30;j<=31;j++)
//       {
//           w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//           tc->_maps[8]._myWall.push_back(w);
//       }
//   }
   for(int i =19;i<24;i++)
   {
       w = new Wall(30*i,30*30,30,30,Brick,tc,30);
       tc->_maps[8]._myWall.push_back(w);
   }
   w = new Wall(30*19,30*31,30,30,Brick,tc,30);
   tc->_maps[8]._myWall.push_back(w);
   w = new Wall(30*21,30*31,30,30,Brick,tc,30);
   tc->_maps[8]._myWall.push_back(w);
   w = new Wall(30*23,30*31,30,30,Brick,tc,30);
   tc->_maps[8]._myWall.push_back(w);
}
void set10(TankClient* tc)
{
    Wall *w;
    for(int i = 7;i < 9;i++)
    {
        w = new Wall(30*i,30*0,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
    for(int i = 7;i < 9;i++)
    {
        w = new Wall(30*i,30*1,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
    for(int i = 21;i < 23;i++)
    {
        w = new Wall(30*i,30*0,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
    for(int i = 21;i < 23;i++)
    {
        w = new Wall(30*i,30*1,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
    for(int i = 35;i < 37;i++)
    {
        w = new Wall(30*i,30*0,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
    for(int i = 35;i < 37;i++)
    {
        w = new Wall(30*i,30*1,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
    w = new Wall(30*6,30*2,30,30,Brick,tc,30);
    tc->_maps[9]._myWall.push_back(w);
    w = new Wall(30*9,30*2,30,30,Brick,tc,30);
    tc->_maps[9]._myWall.push_back(w);
    w = new Wall(30*20,30*2,30,30,Brick,tc,30);
    tc->_maps[9]._myWall.push_back(w);
    w = new Wall(30*23,30*2,30,30,Brick,tc,30);
    tc->_maps[9]._myWall.push_back(w);
    w = new Wall(30*34,30*2,30,30,Brick,tc,30);
    tc->_maps[9]._myWall.push_back(w);
    w = new Wall(30*37,30*2,30,30,Brick,tc,30);
    tc->_maps[9]._myWall.push_back(w);
    w = new Wall(30*5,30*3,30,30,Brick,tc,30);
    tc->_maps[9]._myWall.push_back(w);
    w = new Wall(30*10,30*3,30,30,Brick,tc,30);
    tc->_maps[9]._myWall.push_back(w);
    w = new Wall(30*19,30*3,30,30,Brick,tc,30);
    tc->_maps[9]._myWall.push_back(w);
    w = new Wall(30*24,30*3,30,30,Brick,tc,30);
    tc->_maps[9]._myWall.push_back(w);
    w = new Wall(30*33,30*3,30,30,Brick,tc,30);
    tc->_maps[9]._myWall.push_back(w);
    w = new Wall(30*38,30*3,30,30,Brick,tc,30);
    tc->_maps[9]._myWall.push_back(w);
    for(int i = 4;i < 22;i++)
    {
        w = new Wall(30*4,30*i,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
    for(int i = 4;i < 22;i++)
    {
        w = new Wall(30*11,30*i,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
    for(int i = 4;i < 22;i++)
    {
        w = new Wall(30*18,30*i,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
    for(int i = 4;i < 22;i++)
    {
        w = new Wall(30*25,30*i,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
    for(int i = 4;i < 22;i++)
    {
        w = new Wall(30*32,30*i,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
    for(int i = 4;i < 22;i++)
    {
        w = new Wall(30*39,30*i,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
    for(int j = 0;j < 6;j++){
        for(int i = 4;i < 21;i++)
        {
            w = new Wall(30*(5+j),30*i,30,30,River,tc,30);
            tc->_maps[9]._myWall.push_back(w);
        }
    }
    for(int j = 0;j < 6;j++){
        for(int i = 4;i < 21;i++)
        {
            w = new Wall(30*(19+j),30*i,30,30,River,tc,30);
            tc->_maps[9]._myWall.push_back(w);
        }
    }
    for(int j = 0;j < 6;j++){
        for(int i = 4;i < 21;i++)
        {
            w = new Wall(30*(33+j),30*i,30,30,River,tc,30);
            tc->_maps[9]._myWall.push_back(w);
        }
    }
    for(int i = 5;i < 11;i++)
    {
        w = new Wall(30*i,30*21,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
    for(int i = 19;i < 25;i++)
    {
        w = new Wall(30*i,30*21,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
    for(int i = 33;i < 39;i++)
    {
        w = new Wall(30*i,30*21,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*19,30*i,30,30,Brick,tc,30);
//        tc->_maps[9]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*20,30*i,30,30,Brick,tc,30);
//        tc->_maps[9]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*23,30*i,30,30,Brick,tc,30);
//        tc->_maps[9]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*24,30*i,30,30,Brick,tc,30);
//        tc->_maps[9]._myWall.push_back(w);
//    }
//    for(int i(28);i<30;i++)
//    {
//        w = new Wall(30*21,30*i,30,30,Brick,tc,30);
//        tc->_maps[9]._myWall.push_back(w);
//    }
//    for(int i(28);i<30;i++)
//    {
//        w = new Wall(30*22,30*i,30,30,Brick,tc,30);
//        tc->_maps[9]._myWall.push_back(w);
//    }
    for(int i =19;i<24;i++)
    {
        w = new Wall(30*i,30*30,30,30,Brick,tc,30);
        tc->_maps[9]._myWall.push_back(w);
    }
    w = new Wall(30*19,30*31,30,30,Brick,tc,30);
    tc->_maps[9]._myWall.push_back(w);
    w = new Wall(30*21,30*31,30,30,Brick,tc,30);
    tc->_maps[9]._myWall.push_back(w);
    w = new Wall(30*23,30*31,30,30,Brick,tc,30);
    tc->_maps[9]._myWall.push_back(w);
}
void set11(TankClient* tc)
{
    Wall* w;
    for(int i=0;i<=15;i++)
    {
        for(int j=5;j<=6;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[10]._myWall.push_back(w);
        }
    }
    for(int i=28;i<=43;i++)
    {
        for(int j=5;j<=6;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[10]._myWall.push_back(w);
        }
    }
    for(int i=21;i<=22;i++)
    {
        for(int j=0;j<=3;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[10]._myWall.push_back(w);
        }
    }
    for(int i=20;i<=23;i++)
    {
        w=new Wall(i*30,4*30,30,30,River,tc,30);
        tc->_maps[10]._myWall.push_back(w);
    }
    w=new Wall(19*30,5*30,30,30,River,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(24*30,5*30,30,30,River,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(18*30,6*30,30,30,River,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(25*30,6*30,30,30,River,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(17*30,7*30,30,30,River,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(26*30,7*30,30,30,River,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(16*30,7*30,30,30,River,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(27*30,7*30,30,30,River,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    for(int i=12;i<=15;i++)
    {
        w=new Wall(i*30,8*30,30,30,River,tc,30);
        tc->_maps[10]._myWall.push_back(w);
    }
    for(int i=28;i<=31;i++)
    {
        w=new Wall(i*30,8*30,30,30,River,tc,30);
        tc->_maps[10]._myWall.push_back(w);
    }
    for(int i=21;i<=22;i++)
    {
        for(int j=5;j<=10;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[10]._myWall.push_back(w);
        }
    }
    for(int i=20;i<=23;i++)
    {
        w=new Wall(i*30,11*30,30,30,Brick,tc,30);
        tc->_maps[10]._myWall.push_back(w);
    }
    for(int i=0;i<=11;i++)
    {
        w=new Wall(i*30,12*30,30,30,Iron,tc,30);
        tc->_maps[10]._myWall.push_back(w);
    }
    for(int i=32;i<=43;i++)
    {
        w=new Wall(i*30,12*30,30,30,Iron,tc,30);
        tc->_maps[10]._myWall.push_back(w);
    }
    for(int i=4;i<=6;i++)
    {
        w=new Wall(i*30,13*30,30,30,Iron,tc,30);
        tc->_maps[10]._myWall.push_back(w);
    }
    for(int i=37;i<=39;i++)
    {
        w=new Wall(i*30,13*30,30,30,Iron,tc,30);
        tc->_maps[10]._myWall.push_back(w);
    }
    for(int i=5;i<=11;i++)
    {
        for(int j=14;j<=15;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[10]._myWall.push_back(w);
        }
    }
    for(int i=32;i<=38;i++)
    {
        for(int j=14;j<=15;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[10]._myWall.push_back(w);
        }
    }
    w=new Wall(11*30,16*30,30,30,Brick,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(11*30,17*30,30,30,Brick,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(32*30,16*30,30,30,Brick,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(32*30,17*30,30,30,Brick,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    for(int i=11;i<=15;i++)
    {
        w=new Wall(i*30,18*30,30,30,Brick,tc,30);
        tc->_maps[10]._myWall.push_back(w);
    }
    for(int i=28;i<=32;i++)
    {
        w=new Wall(i*30,18*30,30,30,Brick,tc,30);
        tc->_maps[10]._myWall.push_back(w);
    }
    w=new Wall(15*30,19*30,30,30,Brick,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(28*30,19*30,30,30,Brick,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    for(int i=16;i<=20;i++)
    {
        for(int j=20;j<=21;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[10]._myWall.push_back(w);
        }
    }
    for(int i=23;i<=27;i++)
    {
        for(int j=20;j<=21;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[10]._myWall.push_back(w);
        }
    }
    w=new Wall(21*30,20*30,30,30,Iron,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(22*30,20*30,30,30,Iron,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(21*30,21*30,30,30,Brick,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(22*30,21*30,30,30,Brick,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    for(int i=19;i<=24;i++)
    {
        for(int j=22;j<=23;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[10]._myWall.push_back(w);
        }
    }
    for(int j=24;j<=28;j++)
    {
        w=new Wall(19*30,j*30,30,30,Brick,tc,30);
        tc->_maps[10]._myWall.push_back(w);
    }
    for(int j=24;j<=28;j++)
    {
        w=new Wall(24*30,j*30,30,30,Brick,tc,30);
        tc->_maps[10]._myWall.push_back(w);
    }
//    for(int i=19;i<=24;i++)
//    {
//        for(int j=28;j<=29;j++)
//        {
//            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//            tc->_maps[10]._myWall.push_back(w);
//        }
//    }
//    for(int i=19;i<=20;i++)
//    {
//        for(int j=30;j<=31;j++)
//        {
//            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//            tc->_maps[10]._myWall.push_back(w);
//        }
//    }
//    for(int i=23;i<=24;i++)
//    {
//        for(int j=30;j<=31;j++)
//        {
//            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//            tc->_maps[10]._myWall.push_back(w);
//        }
//    }
    for(int i =19;i<24;i++)
    {
        w = new Wall(30*i,30*30,30,30,Brick,tc,30);
        tc->_maps[10]._myWall.push_back(w);
    }
    w = new Wall(30*19,30*31,30,30,Brick,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w = new Wall(30*21,30*31,30,30,Brick,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w = new Wall(30*23,30*31,30,30,Brick,tc,30);
    tc->_maps[10]._myWall.push_back(w);

    w=new Wall(14*30,22*30,30,30,Iron,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(13*30,23*30,30,30,Iron,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(12*30,24*30,30,30,Iron,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(11*30,25*30,30,30,Iron,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(10*30,26*30,30,30,Iron,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(9*30,27*30,30,30,Iron,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(29*30,22*30,30,30,Iron,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(30*30,23*30,30,30,Iron,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(31*30,24*30,30,30,Iron,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(32*30,25*30,30,30,Iron,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(33*30,26*30,30,30,Iron,tc,30);
    tc->_maps[10]._myWall.push_back(w);
    w=new Wall(34*30,27*30,30,30,Iron,tc,30);
    tc->_maps[10]._myWall.push_back(w);
}
void set12(TankClient* tc)
{
    Wall* w;
    for(int i = 2;i<10;i++)
    {
        w = new Wall(30*i,30*4,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 2;i<10;i++)
    {
        w = new Wall(30*i,30*5,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 2;i<10;i++)
    {
        w = new Wall(30*i,30*10,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 2;i<10;i++)
    {
        w = new Wall(30*i,30*11,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 2;i<10;i++)
    {
        w = new Wall(30*i,30*16,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 2;i<10;i++)
    {
        w = new Wall(30*i,30*17,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 6;i<10;i++)
    {
        w = new Wall(30*8,30*i,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 6;i<10;i++)
    {
        w = new Wall(30*9,30*i,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 12;i<16;i++)
    {
        w = new Wall(30*2,30*i,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 12;i<16;i++)
    {
        w = new Wall(30*3,30*i,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 13;i<21;i++)
    {
        w = new Wall(30*i,30*4,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 13;i<21;i++)
    {
        w = new Wall(30*i,30*5,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 13;i<21;i++)
    {
        w = new Wall(30*i,30*16,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 13;i<21;i++)
    {
        w = new Wall(30*i,30*17,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 6;i<16;i++)
    {
        w = new Wall(30*13,30*i,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 6;i<16;i++)
    {
        w = new Wall(30*14,30*i,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 6;i<16;i++)
    {
        w = new Wall(30*19,30*i,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 6;i<16;i++)
    {
        w = new Wall(30*20,30*i,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 4;i<18;i++)
    {
        w = new Wall(30*27,30*i,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 4;i<18;i++)
    {
        w = new Wall(30*28,30*i,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 35;i<43;i++)
    {
        w = new Wall(30*i,30*4,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 35;i<43;i++)
    {
        w = new Wall(30*i,30*5,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 35;i<43;i++)
    {
        w = new Wall(30*i,30*16,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 35;i<43;i++)
    {
        w = new Wall(30*i,30*17,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 37;i<41;i++)
    {
        w = new Wall(30*i,30*10,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 37;i<41;i++)
    {
        w = new Wall(30*i,30*11,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 6;i<16;i++)
    {
        w = new Wall(30*35,30*i,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 6;i<16;i++)
    {
        w = new Wall(30*36,30*i,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 6;i<16;i++)
    {
        w = new Wall(30*41,30*i,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 6;i<16;i++)
    {
        w = new Wall(30*42,30*i,30,30,Iron,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 0;i<44;i++)
    {
        w = new Wall(30*i,30*20,30,30,River,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 0;i<44;i++)
    {
        w = new Wall(30*i,30*21,30,30,River,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 16;i<21;i++)
    {
        w = new Wall(30*i,30*24,30,30,Brick,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 27;i<32;i++)
    {
        w = new Wall(30*i,30*24,30,30,Brick,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 18;i<30;i++)
    {
        w = new Wall(30*i,30*25,30,30,Brick,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 21;i<27;i++)
    {
        w = new Wall(30*i,30*26,30,30,Brick,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 25;i<32;i++)
    {
        w = new Wall(30*16,30*i,30,30,Brick,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 25;i<32;i++)
    {
        w = new Wall(30*17,30*i,30,30,Brick,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 25;i<32;i++)
    {
        w = new Wall(30*30,30*i,30,30,Brick,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    for(int i = 25;i<32;i++)
    {
        w = new Wall(30*31,30*i,30,30,Brick,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*21,30*i,30,30,Brick,tc,30);
//        tc->_maps[11]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*22,30*i,30,30,Brick,tc,30);
//        tc->_maps[11]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*25,30*i,30,30,Brick,tc,30);
//        tc->_maps[11]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*26,30*i,30,30,Brick,tc,30);
//        tc->_maps[11]._myWall.push_back(w);
//    }
//    for(int i(28);i<30;i++)
//    {
//        w = new Wall(30*23,30*i,30,30,Brick,tc,30);
//        tc->_maps[11]._myWall.push_back(w);
//    }
//    for(int i(28);i<30;i++)
//    {
//        w = new Wall(30*24,30*i,30,30,Brick,tc,30);
//        tc->_maps[11]._myWall.push_back(w);
//    }
    for(int i =21;i<26;i++)
    {
        w = new Wall(30*i,30*30,30,30,Brick,tc,30);
        tc->_maps[11]._myWall.push_back(w);
    }
    w = new Wall(30*21,30*31,30,30,Brick,tc,30);
    tc->_maps[11]._myWall.push_back(w);
    w = new Wall(30*23,30*31,30,30,Brick,tc,30);
    tc->_maps[11]._myWall.push_back(w);
    w = new Wall(30*25,30*31,30,30,Brick,tc,30);
    tc->_maps[11]._myWall.push_back(w);
}
void set13(TankClient* tc)
{
    Wall* w;
    for(int i=0;i<=3;i++)
    {
        for(int j=4;j<=7;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[12]._myWall.push_back(w);
        }
    }
    for(int i=40;i<=43;i++)
    {
        for(int j=4;j<=7;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[12]._myWall.push_back(w);
        }
    }
    for(int i=0;i<=5;i++)
    {
        w=new Wall(i*30,10*30,30,30,Brick,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int i=38;i<=43;i++)
    {
        w=new Wall(i*30,10*30,30,30,Brick,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int j=4;j<=10;j++)
    {
        w=new Wall(6*30,j*30,30,30,Brick,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int j=4;j<=10;j++)
    {
        w=new Wall(37*30,j*30,30,30,Brick,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int i=0;i<=7;i++)
    {
        w=new Wall(i*30,11*30,30,30,River,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int i=36;i<=43;i++)
    {
        w=new Wall(i*30,11*30,30,30,River,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int j=4;j<=10;j++)
    {
        w=new Wall(7*30,j*30,30,30,River,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int j=4;j<=10;j++)
    {
        w=new Wall(36*30,j*30,30,30,River,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int i=15;i<=17;i++)
    {
        w=new Wall(i*30,8*30,30,30,Iron,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int i=26;i<=28;i++)
    {
        w=new Wall(i*30,8*30,30,30,Iron,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int j=1;j<=30;j++)
    {
        w=new Wall(18*30,j*30,30,30,River,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int j=1;j<=30;j++)
    {
        w=new Wall(25*30,j*30,30,30,River,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int i=0;i<=16;i++)
    {
        w=new Wall(i*30,16*30,30,30,River,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int i=27;i<=43;i++)
    {
        w=new Wall(i*30,16*30,30,30,River,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int i=19;i<=24;i++)
    {
        w=new Wall(i*30,16*30,30,30,River,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int j=15;j<=17;j++)
    {
        w=new Wall(17*30,j*30,30,30,Brick,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int j=15;j<=17;j++)
    {
        w=new Wall(26*30,j*30,30,30,Brick,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int i=19;i<=24;i++)
    {
        w=new Wall(i*30,15*30,30,30,Brick,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int i=19;i<=24;i++)
    {
        w=new Wall(i*30,17*30,30,30,Brick,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    for(int i=0;i<=9;i++)
    {
        for(int j=22;j<=23;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[12]._myWall.push_back(w);
        }
    }
    for(int i=34;i<=43;i++)
    {
        for(int j=22;j<=23;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[12]._myWall.push_back(w);
        }
    }
    for(int i=8;i<=9;i++)
    {
        for(int j=24;j<=32;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[12]._myWall.push_back(w);
        }
    }
    for(int i=34;i<=35;i++)
    {
        for(int j=24;j<=32;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[12]._myWall.push_back(w);
        }
    }
//    for(int i=19;i<=24;i++)
//    {
//        for(int j=28;j<=29;j++)
//        {
//            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//            tc->_maps[12]._myWall.push_back(w);
//        }
//    }
//    for(int i=19;i<=20;i++)
//    {
//        for(int j=30;j<=31;j++)
//        {
//            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//            tc->_maps[12]._myWall.push_back(w);
//        }
//    }
//    for(int i=23;i<=24;i++)
//    {
//        for(int j=30;j<=31;j++)
//        {
//            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//            tc->_maps[12]._myWall.push_back(w);
//        }
//    }
    for(int i =19;i<24;i++)
    {
        w = new Wall(30*i,30*30,30,30,Brick,tc,30);
        tc->_maps[12]._myWall.push_back(w);
    }
    w = new Wall(30*19,30*31,30,30,Brick,tc,30);
    tc->_maps[12]._myWall.push_back(w);
    w = new Wall(30*21,30*31,30,30,Brick,tc,30);
    tc->_maps[12]._myWall.push_back(w);
    w = new Wall(30*23,30*31,30,30,Brick,tc,30);
    tc->_maps[12]._myWall.push_back(w);
}
void set14(TankClient* tc)
{
    Wall *w;
    for(int j=0;j<=5;j++)
    {
        w=new Wall(8*30,j*30,30,30,Brick,tc,30);
        tc->_maps[13]._myWall.push_back(w);
    }
    for(int j=0;j<=5;j++)
    {
        w=new Wall(11*30,j*30,30,30,Brick,tc,30);
        tc->_maps[13]._myWall.push_back(w);
    }
    for(int j=0;j<=5;j++)
    {
        w=new Wall(32*30,j*30,30,30,Brick,tc,30);
        tc->_maps[13]._myWall.push_back(w);
    }
    for(int j=0;j<=5;j++)
    {
        w=new Wall(35*30,j*30,30,30,Brick,tc,30);
        tc->_maps[13]._myWall.push_back(w);
    }
    for(int i=15;i<=16;i++)
    {
        for(int j=0;j<=5;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=27;i<=28;i++)
    {
        for(int j=0;j<=5;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=17;i<=26;i++)
    {
        for(int j=4;j<=5;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=8;j<=9;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=4;i<=16;i++)
    {
        for(int j=8;j<=9;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=41;i<=43;i++)
    {
        for(int j=8;j<=9;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=27;i<=39;i++)
    {
        for(int j=8;j<=9;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=12;j<=14;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=41;i<=43;i++)
    {
        for(int j=12;j<=14;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=21;i<=22;i++)
    {
        for(int j=10;j<=25;j++)
        {
            w=new Wall(i*30,j*30,30,30,River,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=21;i<=22;i++)
    {
        for(int j=26;j<=27;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=17;i<=18;i++)
    {
        for(int j=26;j<=27;j++)
        {
            w=new Wall(i*30,j*30,30,30,River,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=17;i<=18;i++)
    {
        for(int j=26;j<=27;j++)
        {
            w=new Wall(i*30,j*30,30,30,River,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=25;i<=26;i++)
    {
        for(int j=26;j<=27;j++)
        {
            w=new Wall(i*30,j*30,30,30,River,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=15;i<=16;i++)
    {
        for(int j=24;j<=25;j++)
        {
            w=new Wall(i*30,j*30,30,30,River,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=27;i<=28;i++)
    {
        for(int j=24;j<=25;j++)
        {
            w=new Wall(i*30,j*30,30,30,River,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=13;i<=14;i++)
    {
        for(int j=22;j<=23;j++)
        {
            w=new Wall(i*30,j*30,30,30,River,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=29;i<=30;i++)
    {
        for(int j=22;j<=23;j++)
        {
            w=new Wall(i*30,j*30,30,30,River,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=11;i<=12;i++)
    {
        for(int j=20;j<=21;j++)
        {
            w=new Wall(i*30,j*30,30,30,River,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int i=31;i<=32;i++)
    {
        for(int j=20;j<=21;j++)
        {
            w=new Wall(i*30,j*30,30,30,River,tc,30);
            tc->_maps[13]._myWall.push_back(w);
        }
    }
    for(int j=8;j<=12;j++)
    {
        w=new Wall(3*30,j*30,30,30,River,tc,30);
        tc->_maps[13]._myWall.push_back(w);
    }
    for(int j=8;j<=12;j++)
    {
        w=new Wall(40*30,j*30,30,30,River,tc,30);
        tc->_maps[13]._myWall.push_back(w);
    }
    for(int i=0;i<=3;i++)
    {
        w=new Wall(i*30,24*30,30,30,Iron,tc,30);
        tc->_maps[13]._myWall.push_back(w);
    }
    for(int i=40;i<=43;i++)
    {
        w=new Wall(i*30,24*30,30,30,Iron,tc,30);
        tc->_maps[13]._myWall.push_back(w);
    }
    w=new Wall(10*30,19*30,30,30,River,tc,30);
    tc->_maps[13]._myWall.push_back(w);
    w=new Wall(9*30,18*30,30,30,River,tc,30);
    tc->_maps[13]._myWall.push_back(w);
    w=new Wall(8*30,17*30,30,30,River,tc,30);
    tc->_maps[13]._myWall.push_back(w);
    w=new Wall(7*30,16*30,30,30,River,tc,30);
    tc->_maps[13]._myWall.push_back(w);
    w=new Wall(6*30,15*30,30,30,River,tc,30);
    tc->_maps[13]._myWall.push_back(w);
    w=new Wall(5*30,14*30,30,30,River,tc,30);
    tc->_maps[13]._myWall.push_back(w);
    w=new Wall(4*30,13*30,30,30,River,tc,30);
    tc->_maps[13]._myWall.push_back(w);
    w=new Wall(33*30,19*30,30,30,River,tc,30);
    tc->_maps[13]._myWall.push_back(w);
    w=new Wall(34*30,18*30,30,30,River,tc,30);
    tc->_maps[13]._myWall.push_back(w);
    w=new Wall(35*30,17*30,30,30,River,tc,30);
    tc->_maps[13]._myWall.push_back(w);
    w=new Wall(36*30,16*30,30,30,River,tc,30);
    tc->_maps[13]._myWall.push_back(w);
    w=new Wall(37*30,15*30,30,30,River,tc,30);
    tc->_maps[13]._myWall.push_back(w);
    w=new Wall(38*30,14*30,30,30,River,tc,30);
    tc->_maps[13]._myWall.push_back(w);
    w=new Wall(39*30,13*30,30,30,River,tc,30);
    tc->_maps[13]._myWall.push_back(w);

//    for(int i=19;i<=24;i++)
//    {
//        for(int j=28;j<=29;j++)
//        {
//            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//            tc->_maps[13]._myWall.push_back(w);
//        }
//    }
//    for(int i=19;i<=20;i++)
//    {
//        for(int j=30;j<=31;j++)
//        {
// w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//            tc->_maps[13]._myWall.push_back(w);
//        }
//    }
//    for(int i=23;i<=24;i++)
//    {
//        for(int j=30;j<=31;j++)
//        {
//            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//            tc->_maps[13]._myWall.push_back(w);
//        }
//    }
    for(int i =19;i<24;i++)
    {
        w = new Wall(30*i,30*30,30,30,Brick,tc,30);
        tc->_maps[13]._myWall.push_back(w);
    }
    w = new Wall(30*19,30*31,30,30,Brick,tc,30);
    tc->_maps[13]._myWall.push_back(w);
    w = new Wall(30*21,30*31,30,30,Brick,tc,30);
    tc->_maps[13]._myWall.push_back(w);
    w = new Wall(30*23,30*31,30,30,Brick,tc,30);
    tc->_maps[13]._myWall.push_back(w);
}
void set15(TankClient* tc)
{
    Wall *w;
    for(int i = 4;i < 6;i++)
    {
        w = new Wall(30*i,60,30,30,Iron,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 4;i < 6;i++)
    {
        w = new Wall(30*i,90,30,30,Iron,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 38;i < 40;i++)
    {
        w = new Wall(30*i,60,30,30,Iron,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 38;i < 40;i++)
    {
        w = new Wall(30*i,90,30,30,Iron,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 37;i < 39;i++)
    {
        w = new Wall(30*i,120,30,30,Iron,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 37;i < 39;i++)
    {
        w = new Wall(30*i,150,30,30,Iron,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 5;i < 7;i++)
    {
        w = new Wall(30*i,120,30,30,Iron,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 5;i < 7;i++)
    {
        w = new Wall(30*i,150,30,30,Iron,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 10;i < 34;i++)
    {
        w = new Wall(30*i,120,30,30,River,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 6;i < 8;i++)
    {
        w = new Wall(30*7,30*i,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 6;i < 8;i++)
    {
        w = new Wall(30*36,30*i,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 8;i < 10;i++)
    {
        w = new Wall(30*i,30*8,30,30,Iron,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 8;i < 10;i++)
    {
        w = new Wall(30*i,30*9,30,30,Iron,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 34;i < 36;i++)
    {
        w = new Wall(30*i,30*8,30,30,Iron,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 34;i < 36;i++)
    {
        w = new Wall(30*i,30*9,30,30,Iron,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 5;i < 16;i++)
    {
        w = new Wall(30*21,30*i,30,30,Iron,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 5;i < 16;i++)
    {
        w = new Wall(30*22,30*i,30,30,Iron,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 9;i < 16;i++)
    {
        w = new Wall(30*12,30*i,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int j = 0;j < 3;j++)
    {
        for(int i = 9;i <12;i++){
        w = new Wall(30*(13+j),30*i,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
        }
    }
    for(int j = 0;j < 3;j++)
    {
        for(int i = 9;i <12;i++){
        w = new Wall(30*(28+j),30*i,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
        }
    }
    for(int i = 9;i < 16;i++)
    {
        w = new Wall(30*31,30*i,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    w = new Wall(30*16,30*12,30,30,Brick,tc,30);
    tc->_maps[14]._myWall.push_back(w);
    w = new Wall(30*17,30*13,30,30,Brick,tc,30);
    tc->_maps[14]._myWall.push_back(w);
    w = new Wall(30*27,30*12,30,30,Brick,tc,30);
    tc->_maps[14]._myWall.push_back(w);
    w = new Wall(30*26,30*13,30,30,Brick,tc,30);
    tc->_maps[14]._myWall.push_back(w);
    for(int i = 14;i < 18;i++)
    {
        w = new Wall(30*18,30*i,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 14;i < 18;i++)
    {
        w = new Wall(30*25,30*i,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 21;i < 23;i++)
    {
        w = new Wall(30*i,30*16,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 20;i < 24;i++)
    {
        w = new Wall(30*i,30*17,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 18;i < 21;i++)
    {
        w = new Wall(30*i,30*18,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 23;i < 26;i++)
    {
        w = new Wall(30*i,30*18,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 16;i < 20;i++)
    {
        w = new Wall(30*i,30*19,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 24;i < 28;i++)
    {
        w = new Wall(30*i,30*19,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 10;i < 17;i++)
    {
        w = new Wall(30*i,30*20,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 27;i < 34;i++)
    {
        w = new Wall(30*i,30*20,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 18;i < 26;i++)
    {
        w = new Wall(30*i,30*21,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int j = 0;j <3;j++)
    {
        for(int i = 20;i < 24;i++)
        {
            w = new Wall(30*i,30*(22+j),30,30,Brick,tc,30);
            tc->_maps[14]._myWall.push_back(w);
        }
    }
    for(int i = 21;i < 23;i++)
    {
        w = new Wall(30*i,30*20,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    w = new Wall(30*20,30*25,30,30,Iron,tc,30);
    tc->_maps[14]._myWall.push_back(w);
    w = new Wall(30*23,30*25,30,30,Iron,tc,30);
    tc->_maps[14]._myWall.push_back(w);
    for(int i = 20;i < 24;i++)
    {
        w = new Wall(30*i,30*26,30,30,Iron,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 6;i < 16;i++)
    {
        w = new Wall(30*i,30*23,30,30,River,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 28;i < 38;i++)
    {
        w = new Wall(30*i,30*23,30,30,River,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 16;i < 28;i++)
    {
        w = new Wall(30*5,30*i,30,30,River,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 16;i < 28;i++)
    {
        w = new Wall(30*38,30*i,30,30,River,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    w = new Wall(30*39,30*16,30,30,River,tc,30);
    tc->_maps[14]._myWall.push_back(w);
    w = new Wall(30*4,30*16,30,30,River,tc,30);
    tc->_maps[14]._myWall.push_back(w);
    for(int i = 23;i < 27;i++)
    {
        w = new Wall(30*4,30*i,30,30,River,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 23;i < 27;i++)
    {
        w = new Wall(30*39,30*i,30,30,River,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 18;i < 23;i++)
    {
        w = new Wall(30*3,30*i,30,30,River,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 18;i < 23;i++)
    {
        w = new Wall(30*40,30*i,30,30,River,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 16;i < 18;i++)
    {
        w = new Wall(30*3,30*i,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 16;i < 18;i++)
    {
        w = new Wall(30*40,30*i,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 23;i < 28;i++)
    {
        w = new Wall(30*3,30*i,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 23;i < 28;i++)
    {
        w = new Wall(30*40,30*i,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 17;i < 23;i++)
    {
        w = new Wall(30*4,30*i,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    for(int i = 17;i < 23;i++)
    {
        w = new Wall(30*39,30*i,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    w = new Wall(30*4,30*27,30,30,Brick,tc,30);
    tc->_maps[14]._myWall.push_back(w);
    w = new Wall(30*39,30*27,30,30,Brick,tc,30);
    tc->_maps[14]._myWall.push_back(w);
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*19,30*i,30,30,Brick,tc,30);
//        tc->_maps[14]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*20,30*i,30,30,Brick,tc,30);
//        tc->_maps[14]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*23,30*i,30,30,Brick,tc,30);
//        tc->_maps[14]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*24,30*i,30,30,Brick,tc,30);
//        tc->_maps[14]._myWall.push_back(w);
//    }
//    for(int i(28);i<30;i++)
//    {
//        w = new Wall(30*21,30*i,30,30,Brick,tc,30);
//        tc->_maps[14]._myWall.push_back(w);
//    }
//    for(int i(28);i<30;i++)
//    {
//        w = new Wall(30*22,30*i,30,30,Brick,tc,30);
//        tc->_maps[14]._myWall.push_back(w);
//    }
    for(int i =19;i<24;i++)
    {
        w = new Wall(30*i,30*30,30,30,Brick,tc,30);
        tc->_maps[14]._myWall.push_back(w);
    }
    w = new Wall(30*19,30*31,30,30,Brick,tc,30);
    tc->_maps[14]._myWall.push_back(w);
    w = new Wall(30*21,30*31,30,30,Brick,tc,30);
    tc->_maps[14]._myWall.push_back(w);
    w = new Wall(30*23,30*31,30,30,Brick,tc,30);
    tc->_maps[14]._myWall.push_back(w);
}
void set16(TankClient* tc)
{
    Wall* w;
    for(int i=1;i<=3;i++)
    {
        for(int j=2;j<=31;j++)
        {
            w=new Wall(i*30,j*30,30,30,Grass,tc,30);
            tc->_maps[15]._myWall.push_back(w);
        }
    }
    for(int i=40;i<=42;i++)
    {
        for(int j=2;j<=31;j++)
        {
            w=new Wall(i*30,j*30,30,30,Grass,tc,30);
            tc->_maps[15]._myWall.push_back(w);
        }
    }
    for(int i=4;i<=39;i++)
    {
        for(int j=9;j<=10;j++)
        {
            w=new Wall(i*30,j*30,30,30,Grass,tc,30);
            tc->_maps[15]._myWall.push_back(w);
        }
    }
    for(int i=4;i<=39;i++)
    {
        for(int j=13;j<=14;j++)
        {
            w=new Wall(i*30,j*30,30,30,Grass,tc,30);
            tc->_maps[15]._myWall.push_back(w);
        }
    }
    for(int i=4;i<=39;i++)
    {
        for(int j=11;j<=12;j++)
        {
            w=new Wall(i*30,j*30,30,30,River,tc,30);
            tc->_maps[15]._myWall.push_back(w);
        }
    }
    for(int i=16;i<=17;i++)
    {
        for(int j=5;j<=6;j++)
        {
            w=new Wall(i*30,j*30,30,30,Iron,tc,30);
            tc->_maps[15]._myWall.push_back(w);
        }
    }
    for(int i=26;i<=27;i++)
    {
        for(int j=5;j<=6;j++)
        {
            w=new Wall(i*30,j*30,30,30,Iron,tc,30);
            tc->_maps[15]._myWall.push_back(w);
        }
    }
    for(int i=7;i<=8;i++)
    {
        for(int j=16;j<=17;j++)
        {
            w=new Wall(i*30,j*30,30,30,Iron,tc,30);
            tc->_maps[15]._myWall.push_back(w);
        }
    }
    for(int i=36;i<=37;i++)
    {
        for(int j=16;j<=17;j++)
        {
            w=new Wall(i*30,j*30,30,30,Iron,tc,30);
            tc->_maps[15]._myWall.push_back(w);
        }
    }
    for(int i=12;i<=13;i++)
    {
        for(int j=20;j<=31;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[15]._myWall.push_back(w);
        }
    }
    for(int i=30;i<=31;i++)
    {
        for(int j=20;j<=31;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[15]._myWall.push_back(w);
        }
    }
    for(int i=14;i<=29;i++)
    {
        for(int j=20;j<=21;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[15]._myWall.push_back(w);
        }
    }
//    for(int i=19;i<=24;i++)
//    {
//        for(int j=28;j<=29;j++)
//        {
//            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//            tc->_maps[15]._myWall.push_back(w);
//        }
//    }
//    for(int i=19;i<=20;i++)
//    {
//        for(int j=30;j<=31;j++)
//        {
//            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//            tc->_maps[15]._myWall.push_back(w);
//        }
//    }
//    for(int i=23;i<=24;i++)
//    {
//        for(int j=30;j<=31;j++)
//        {
//            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//            tc->_maps[15]._myWall.push_back(w);
//        }
//    }
    for(int i =19;i<24;i++)
    {
        w = new Wall(30*i,30*30,30,30,Brick,tc,30);
        tc->_maps[15]._myWall.push_back(w);
    }
    w = new Wall(30*19,30*31,30,30,Brick,tc,30);
    tc->_maps[15]._myWall.push_back(w);
    w = new Wall(30*21,30*31,30,30,Brick,tc,30);
    tc->_maps[15]._myWall.push_back(w);
    w = new Wall(30*23,30*31,30,30,Brick,tc,30);
    tc->_maps[15]._myWall.push_back(w);
}
void set17(TankClient* tc)
{
    Wall* w;
    for(int i=12;i<=15;i++)
    {
        for(int j=2;j<=5;j++)
        {
            w=new Wall(i*30,j*30,30,30,Grass,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=28;i<=31;i++)
    {
        for(int j=2;j<=5;j++)
        {
            w=new Wall(i*30,j*30,30,30,Grass,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=19;i<=20;i++)
    {
        for(int j=0;j<=3;j++)
        {
            w=new Wall(i*30,j*30,30,30,Grass,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=23;i<=24;i++)
    {
        for(int j=0;j<=3;j++)
        {
            w=new Wall(i*30,j*30,30,30,Grass,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=21;i<=22;i++)
    {
        for(int j=2;j<=5;j++)
        {
            w=new Wall(i*30,j*30,30,30,Grass,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=7;i<=17;i++)
    {
        for(int j=12;j<=15;j++)
        {
            w=new Wall(i*30,j*30,30,30,Grass,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=26;i<=36;i++)
    {
        for(int j=12;j<=15;j++)
        {
            w=new Wall(i*30,j*30,30,30,Grass,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=21;i<=22;i++)
    {
        for(int j=10;j<=11;j++)
        {
            w=new Wall(i*30,j*30,30,30,Grass,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=21;i<=22;i++)
    {
        for(int j=16;j<=17;j++)
        {
            w=new Wall(i*30,j*30,30,30,Grass,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=21;i<=22;i++)
    {
        for(int j=21;j<=22;j++)
        {
            w=new Wall(i*30,j*30,30,30,Grass,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=0;i<=5;i++)
    {
        for(int j=7;j<=9;j++)
        {
            w=new Wall(i*30,j*30,30,30,River,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=41;i<=42;i++)
    {
        for(int j=7;j<=9;j++)
        {
            w=new Wall(i*30,j*30,30,30,River,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=38;i<=39;i++)
    {
        for(int j=14;j<=15;j++)
        {
            w=new Wall(i*30,j*30,30,30,Iron,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=42;i<=43;i++)
    {
        for(int j=12;j<=13;j++)
        {
            w=new Wall(i*30,j*30,30,30,Iron,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=42;i<=43;i++)
    {
        for(int j=16;j<=17;j++)
        {
            w=new Wall(i*30,j*30,30,30,Iron,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=8;i<=15;i++)
    {
        for(int j=17;j<=18;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=28;i<=35;i++)
    {
        for(int j=17;j<=18;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
    for(int i=21;i<=22;i++)
    {
        for(int j=26;j<=27;j++)
        {
            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
            tc->_maps[16]._myWall.push_back(w);
        }
    }
//    for(int i=19;i<=24;i++)
//    {
//        for(int j=28;j<=29;j++)
//        {
//            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//            tc->_maps[16]._myWall.push_back(w);
//        }
//    }
//    for(int i=19;i<=20;i++)
//    {
//        for(int j=30;j<=31;j++)
//        {
//            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//            tc->_maps[16]._myWall.push_back(w);
//        }
//    }
//    for(int i=23;i<=24;i++)
//    {
//        for(int j=30;j<=31;j++)
//        {
//            w=new Wall(i*30,j*30,30,30,Brick,tc,30);
//            tc->_maps[16]._myWall.push_back(w);
//        }
//    }
    for(int i =19;i<24;i++)
    {
        w = new Wall(30*i,30*30,30,30,Brick,tc,30);
        tc->_maps[16]._myWall.push_back(w);
    }
    w = new Wall(30*19,30*31,30,30,Brick,tc,30);
    tc->_maps[16]._myWall.push_back(w);
    w = new Wall(30*21,30*31,30,30,Brick,tc,30);
    tc->_maps[16]._myWall.push_back(w);
    w = new Wall(30*23,30*31,30,30,Brick,tc,30);
    tc->_maps[16]._myWall.push_back(w);
    for(int i=6;i<=9;i++)
    {
        w=new Wall(i*30,8*30,30,30,River,tc,30);
        tc->_maps[16]._myWall.push_back(w);
    }
    for(int i=15;i<=19;i++)
    {
        w=new Wall(i*30,8*30,30,30,River,tc,30);
        tc->_maps[16]._myWall.push_back(w);
    }
    for(int i=25;i<=29;i++)
    {
        w=new Wall(i*30,8*30,30,30,River,tc,30);
        tc->_maps[16]._myWall.push_back(w);
    }
    for(int i=35;i<=39;i++)
    {
        w=new Wall(i*30,8*30,30,30,River,tc,30);
        tc->_maps[16]._myWall.push_back(w);
    }
    w=new Wall(40*30,6*30,30,30,River,tc,30);
    tc->_maps[16]._myWall.push_back(w);
    w=new Wall(40*30,10*30,30,30,River,tc,30);
    tc->_maps[16]._myWall.push_back(w);
    w=new Wall(43*30,6*30,30,30,River,tc,30);
    tc->_maps[16]._myWall.push_back(w);
    w=new Wall(43*30,10*30,30,30,River,tc,30);
    tc->_maps[16]._myWall.push_back(w);
    w=new Wall(41*30,12*30,30,30,River,tc,30);
    tc->_maps[16]._myWall.push_back(w);
    w=new Wall(42*30,12*30,30,30,River,tc,30);
    tc->_maps[16]._myWall.push_back(w);
    for(int j=12;j<=17;j++)
    {
        w=new Wall(40*30,j*30,30,30,Iron,tc,30);
        tc->_maps[16]._myWall.push_back(w);
    }
    for(int j=13;j<=17;j++)
    {
        w=new Wall(41*30,j*30,30,30,Iron,tc,30);
        tc->_maps[16]._myWall.push_back(w);
    }
}
void set18(TankClient* tc)
{
    Wall* w;
    for(int i = 19;i<25;i++)
    {
        w = new Wall(30*i,30*1,30,30,Brick,tc,30);
        tc->_maps[17]._myWall.push_back(w);
    }
    for(int i = 19;i<25;i++)
    {
        w = new Wall(30*i,30*2,30,30,Brick,tc,30);
        tc->_maps[17]._myWall.push_back(w);
    }
    for(int i = 13;i<31;i++)
    {
        w = new Wall(30*i,30*14,30,30,Brick,tc,30);
        tc->_maps[17]._myWall.push_back(w);
    }
    for(int i = 13;i<31;i++)
    {
        w = new Wall(30*i,30*15,30,30,Brick,tc,30);
        tc->_maps[17]._myWall.push_back(w);
    }
    for(int i = 3;i<14;i++)
    {
        w = new Wall(30*21,30*i,30,30,Brick,tc,30);
        tc->_maps[17]._myWall.push_back(w);
    }
    for(int i = 3;i<14;i++)
    {
        w = new Wall(30*22,30*i,30,30,Brick,tc,30);
        tc->_maps[17]._myWall.push_back(w);
    }
    for(int i = 13;i<31;i++)
    {
        w = new Wall(30*i,30*22,30,30,Brick,tc,30);
        tc->_maps[17]._myWall.push_back(w);
    }
    for(int i = 13;i<31;i++)
    {
        w = new Wall(30*i,30*23,30,30,Brick,tc,30);
        tc->_maps[17]._myWall.push_back(w);
    }
    for(int j = 0;j<6;j++)
    {
        for(int i = 18;i<26;i++)
        {
            w = new Wall(30*i,30*(16+j),30,30,Grass,tc,30);
            tc->_maps[17]._myWall.push_back(w);
        }
    }
    for(int i = 15;i<29;i++)
    {
        w = new Wall(30*i,30*24,30,30,Grass,tc,30);
        tc->_maps[17]._myWall.push_back(w);
    }
    for(int i = 15;i<18;i++)
    {
        w = new Wall(30*i,30*13,30,30,River,tc,30);
        tc->_maps[17]._myWall.push_back(w);
    }
    for(int i = 26;i<29;i++)
    {
        w = new Wall(30*i,30*13,30,30,River,tc,30);
        tc->_maps[17]._myWall.push_back(w);
    }
    for(int j = 0;j<6;j++)
    {
        for(int i = 15;i<18;i++)
        {
            w = new Wall(30*i,30*(16+j),30,30,River,tc,30);
            tc->_maps[17]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<6;j++)
    {
        for(int i = 26;i<29;i++)
        {
            w = new Wall(30*i,30*(16+j),30,30,River,tc,30);
            tc->_maps[17]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<4;j++)
    {
        for(int i = 11;i<27;i++)
        {
            w = new Wall(30*(9+j),30*i,30,30,Iron,tc,30);
            tc->_maps[17]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<4;j++)
    {
        for(int i = 11;i<27;i++)
        {
            w = new Wall(30*(31+j),30*i,30,30,Iron,tc,30);
            tc->_maps[17]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<3;j++)
    {
        for(int i = 0;i<30;i++)
        {
            w = new Wall(30*(2+j),30*i,30,30,River,tc,30);
            tc->_maps[17]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<3;j++)
    {
        for(int i = 0;i<30;i++)
        {
            w = new Wall(30*(39+j),30*i,30,30,River,tc,30);
            tc->_maps[17]._myWall.push_back(w);
        }
    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*19,30*i,30,30,Brick,tc,30);
//        tc->_maps[17]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*20,30*i,30,30,Brick,tc,30);
//        tc->_maps[17]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*23,30*i,30,30,Brick,tc,30);
//        tc->_maps[17]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*24,30*i,30,30,Brick,tc,30);
//        tc->_maps[17]._myWall.push_back(w);
//    }
//    for(int i(28);i<30;i++)
//    {
//        w = new Wall(30*21,30*i,30,30,Brick,tc,30);
//        tc->_maps[17]._myWall.push_back(w);
//    }
//    for(int i(28);i<30;i++)
//    {
//        w = new Wall(30*22,30*i,30,30,Brick,tc,30);
//        tc->_maps[17]._myWall.push_back(w);
//    }
    for(int i =19;i<24;i++)
    {
        w = new Wall(30*i,30*30,30,30,Brick,tc,30);
        tc->_maps[17]._myWall.push_back(w);
    }
    w = new Wall(30*19,30*31,30,30,Brick,tc,30);
    tc->_maps[17]._myWall.push_back(w);
    w = new Wall(30*21,30*31,30,30,Brick,tc,30);
    tc->_maps[17]._myWall.push_back(w);
    w = new Wall(30*23,30*31,30,30,Brick,tc,30);
    tc->_maps[17]._myWall.push_back(w);
}
void set19(TankClient* tc)
{
    Wall* w;
    for(int i = 34;i<39;i++)
    {
        w = new Wall(30*i,30*4,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 34;i<39;i++)
    {
        w = new Wall(30*i,30*5,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int j = 0;j<3;j++)
    {
        for(int i = 34;i<38;i++)
        {
            w = new Wall(30*i,30*(6+j),30,30,Grass,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int i = 3;i<7;i++)
    {
        w = new Wall(30*32,30*i,30,30,Grass,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 3;i<7;i++)
    {
        w = new Wall(30*33,30*i,30,30,Grass,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 8;i<15;i++)
    {
        w = new Wall(30*3,30*i,30,30,Iron,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 8;i<15;i++)
    {
        w = new Wall(30*4,30*i,30,30,Iron,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int j = 0;j<3;j++)
    {
        for(int i = 20;i<27;i++)
        {
            w = new Wall(30*(4+j),30*i,30,30,Brick,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int i = 7;i<11;i++)
    {
        w = new Wall(30*i,30*20,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 7;i<11;i++)
    {
        w = new Wall(30*i,30*21,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int j=0;j<5;j++)
    {
        for(int i = 7;i<11;i++)
        {
            w = new Wall(30*i,30*(22+j),30,30,Iron,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int j=0;j<4;j++)
    {
        for(int i = 33;i<37;i++)
        {
            w = new Wall(30*i,30*(22+j),30,30,Grass,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int i = 32;i<40;i++)
    {
        w = new Wall(30*i,30*21,30,30,Iron,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int j = 0;j<3;j++)
    {
        for(int i = 37;i<39;i++)
        {
            w = new Wall(30*i,30*(22+j),30,30,Brick,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int i = 11;i<13;i++)
    {
        w = new Wall(30*i,30*7,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 11;i<15;i++)
    {
        w = new Wall(30*i,30*8,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 18;i<24;i++)
    {
        w = new Wall(30*i,30*7,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 18;i<24;i++)
    {
        w = new Wall(30*i,30*8,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 13;i<18;i++)
    {
        w = new Wall(30*i,30*9,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 15;i<18;i++)
    {
        w = new Wall(30*i,30*10,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 24;i<26;i++)
    {
        w = new Wall(30*i,30*9,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 24;i<26;i++)
    {
        w = new Wall(30*i,30*10,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 26;i<28;i++)
    {
        w = new Wall(30*i,30*11,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 26;i<28;i++)
    {
        w = new Wall(30*i,30*12,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 28;i<30;i++)
    {
        w = new Wall(30*i,30*13,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 28;i<30;i++)
    {
        w = new Wall(30*i,30*14,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 11;i<13;i++)
    {
        w = new Wall(30*i,30*13,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 11;i<13;i++)
    {
        w = new Wall(30*i,30*14,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 9;i<13;i++)
    {
        w = new Wall(30*9,30*i,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 9;i<13;i++)
    {
        w = new Wall(30*10,30*i,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 9;i<13;i++)
    {
        w = new Wall(30*11,30*i,30,30,Grass,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 9;i<13;i++)
    {
        w = new Wall(30*12,30*i,30,30,Grass,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 10;i<15;i++)
    {
        w = new Wall(30*13,30*i,30,30,Grass,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 10;i<15;i++)
    {
        w = new Wall(30*14,30*i,30,30,Grass,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int j = 0;j<3;j++)
    {
        for(int i = 11;i<15;i++)
        {
            w = new Wall(30*(15+j),30*i,30,30,Grass,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<4;j++)
    {
        for(int i = 9;i<13;i++)
        {
            w = new Wall(30*(18+j),30*i,30,30,Grass,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 9;i<11;i++)
        {
            w = new Wall(30*(22+j),30*i,30,30,Grass,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 11;i<13;i++)
        {
            w = new Wall(30*(24+j),30*i,30,30,Grass,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 11;i<13;i++)
        {
            w = new Wall(30*(22+j),30*i,30,30,Iron,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 21;i<28;i++)
        {
            w = new Wall(30*i,30*(13+j),30,30,Grass,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int i = 16;i<18;i++)
    {
        w = new Wall(30*i,30*15,30,30,Grass,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int i = 21;i<24;i++)
    {
        w = new Wall(30*i,30*15,30,30,Grass,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 16;i<24;i++)
        {
            w = new Wall(30*i,30*(16+j),30,30,Grass,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int i = 14;i<24;i++)
    {
        w = new Wall(30*i,30*18,30,30,Grass,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 14;i<17;i++)
        {
            w = new Wall(30*i,30*(19+j),30,30,Grass,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 23;i<26;i++)
        {
            w = new Wall(30*i,30*(19+j),30,30,Grass,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<3;j++)
    {
        for(int i = 18;i<21;i++)
        {
            w = new Wall(30*i,30*(13+j),30,30,Iron,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 0;i<16;i++)
        {
            w = new Wall(30*i,30*(15+j),30,30,River,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 24;i<44;i++)
        {
            w = new Wall(30*i,30*(15+j),30,30,River,tc,30);
            tc->_maps[18]._myWall.push_back(w);
        }
    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*19,30*i,30,30,Brick,tc,30);
//        tc->_maps[18]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*20,30*i,30,30,Brick,tc,30);
//        tc->_maps[18]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*23,30*i,30,30,Brick,tc,30);
//        tc->_maps[18]._myWall.push_back(w);
//    }
//    for(int i(28);i<32;i++)
//    {
//        w = new Wall(30*24,30*i,30,30,Brick,tc,30);
//        tc->_maps[18]._myWall.push_back(w);
//    }
//    for(int i(28);i<30;i++)
//    {
//        w = new Wall(30*21,30*i,30,30,Brick,tc,30);
//        tc->_maps[18]._myWall.push_back(w);
//    }
//    for(int i(28);i<30;i++)
//    {
//        w = new Wall(30*22,30*i,30,30,Brick,tc,30);
//        tc->_maps[18]._myWall.push_back(w);
//    }
    for(int i =19;i<24;i++)
    {
        w = new Wall(30*i,30*30,30,30,Brick,tc,30);
        tc->_maps[18]._myWall.push_back(w);
    }
    w = new Wall(30*19,30*31,30,30,Brick,tc,30);
    tc->_maps[18]._myWall.push_back(w);
    w = new Wall(30*21,30*31,30,30,Brick,tc,30);
    tc->_maps[18]._myWall.push_back(w);
    w = new Wall(30*23,30*31,30,30,Brick,tc,30);
    tc->_maps[18]._myWall.push_back(w);
}
void set20(TankClient* tc)
{
    Wall* w;
    for(int j = 0;j<4;j++)
    {
        for(int i = 3;i<26;i++)
        {
            w = new Wall(30*i,30*(0+j),30,30,Lava,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<10;j++)
    {
        for(int i = 2;i<12;i++)
        {
            w = new Wall(30*i,30*(4+j),30,30,Lava,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int i = 28;i<40;i++)
    {
        w = new Wall(30*i,30*2,30,30,Lava,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 28;i<44;i++)
    {
        w = new Wall(30*i,30*3,30,30,Lava,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int j = 0;j<12;j++)
    {
        for(int i = 32;i<44;i++)
        {
            w = new Wall(30*i,30*(4+j),30,30,Lava,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<12;j++)
    {
        for(int i = 0;i<12;i++)
        {
            w = new Wall(30*i,30*(16+j),30,30,Lava,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int i = 0;i<16;i++)
    {
        w = new Wall(30*i,30*28,30,30,Lava,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 4;i<16;i++)
    {
        w = new Wall(30*i,30*29,30,30,Lava,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int j = 0;j<10;j++)
    {
        for(int i = 32;i<42;i++)
        {
            w = new Wall(30*i,30*(18+j),30,30,Lava,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<4;j++)
    {
        for(int i = 18;i<41;i++)
        {
            w = new Wall(30*i,30*(28+j),30,30,Lava,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int i = 40;i<44;i++)
    {
        w = new Wall(30*i,30*2,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 0;i<4;i++)
    {
        w = new Wall(30*i,30*29,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 28;i<32;i++)
    {
        w = new Wall(30*41,30*i,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 0;i<4;i++)
    {
        w = new Wall(30*2,30*i,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 0;i<12;i++)
        {
            w = new Wall(30*i,30*(14+j),30,30,Grass,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 28;i<42;i++)
        {
            w = new Wall(30*i,30*(0+j),30,30,Grass,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 32;i<44;i++)
        {
            w = new Wall(30*i,30*(16+j),30,30,Grass,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 2;i<16;i++)
        {
            w = new Wall(30*i,30*(30+j),30,30,Grass,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 2;i<14;i++)
        {
            w = new Wall(30*(0+j),30*i,30,30,Grass,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 18;i<30;i++)
        {
            w = new Wall(30*(42+j),30*i,30,30,Grass,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 28;i<32;i++)
        {
            w = new Wall(30*(16+j),30*i,30,30,Grass,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 7;i<25;i++)
        {
            w = new Wall(30*(12+j),30*i,30,30,Grass,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 7;i<25;i++)
        {
            w = new Wall(30*(30+j),30*i,30,30,Grass,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 12;i<32;i++)
        {
            w = new Wall(30*i,30*(4+j),30,30,Grass,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int i = 12;i<14;i++)
    {
        w = new Wall(30*i,30*6,30,30,Grass,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 30;i<32;i++)
    {
        w = new Wall(30*i,30*6,30,30,Grass,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 12;i<32;i++)
        {
            w = new Wall(30*i,30*(26+j),30,30,Grass,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int i = 12;i<14;i++)
    {
        w = new Wall(30*i,30*25,30,30,Grass,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 30;i<32;i++)
    {
        w = new Wall(30*i,30*25,30,30,Grass,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
//    for(int i = 15;i<26;i++)
//    {
//        w = new Wall(30*i,30*8,30,30,Ice,tc,30);
//        tc->_maps[19]._myWall.push_back(w);
//    }
//    for(int i = 18;i<29;i++)
//    {
//        w = new Wall(30*i,30*23,30,30,Ice,tc,30);
//        tc->_maps[19]._myWall.push_back(w);
//    }
//    for(int i = 16;i<24;i++)
//    {
//        w = new Wall(30*15,30*i,30,30,Ice,tc,30);
//        tc->_maps[19]._myWall.push_back(w);
//    }
//    for(int i = 9;i<14;i++)
//    {
//        w = new Wall(30*15,30*i,30,30,Ice,tc,30);
//        tc->_maps[19]._myWall.push_back(w);
//    }
//    for(int i = 9;i<16;i++)
//    {
//        w = new Wall(30*28,30*i,30,30,Ice,tc,30);
//        tc->_maps[19]._myWall.push_back(w);
//    }
//    for(int i = 18;i<23;i++)
//    {
//        w = new Wall(30*28,30*i,30,30,Ice,tc,30);
//        tc->_maps[19]._myWall.push_back(w);
//    }
    for(int i = 13;i<18;i++)
    {
        w = new Wall(30*18,30*i,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 19;i<21;i++)
    {
        w = new Wall(30*18,30*i,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    w = new Wall(30*18,30*11,30,30,Iron,tc,30);
    tc->_maps[19]._myWall.push_back(w);
    w = new Wall(30*25,30*20,30,30,Iron,tc,30);
    tc->_maps[19]._myWall.push_back(w);
    for(int i = 11;i<13;i++)
    {
        w = new Wall(30*25,30*i,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 14;i<19;i++)
    {
        w = new Wall(30*25,30*i,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 13;i<15;i++)
    {
        w = new Wall(30*20,30*i,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 16;i<20;i++)
    {
        w = new Wall(30*20,30*i,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 12;i<16;i++)
    {
        w = new Wall(30*23,30*i,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 17;i<20;i++)
    {
        w = new Wall(30*23,30*i,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 20;i<22;i++)
    {
        w = new Wall(30*i,30*12,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 18;i<20;i++)
    {
        w = new Wall(30*i,30*10,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 21;i<26;i++)
    {
        w = new Wall(30*i,30*10,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 18;i<23;i++)
    {
        w = new Wall(30*i,30*21,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int j = 0;j<2;j++)
    {
        for(int i = 0;i<4;i++)
        {
            w = new Wall(30*(26+j),30*i,30,30,Grass,tc,30);
            tc->_maps[19]._myWall.push_back(w);
        }
    }
    for(int i = 24;i<26;i++)
    {
        w = new Wall(30*i,30*21,30,30,Iron,tc,30);
        tc->_maps[19]._myWall.push_back(w);
    }
    w = new Wall(30*22,30*14,30,30,Iron,tc,30);
    tc->_maps[19]._myWall.push_back(w);
    w = new Wall(30*21,30*17,30,30,Iron,tc,30);
    tc->_maps[19]._myWall.push_back(w);
    w = new Wall(30*22,30*19,30,30,Iron,tc,30);
    tc->_maps[19]._myWall.push_back(w);
//    for(int i = 17;i<28;i++)
//    {
//        w = new Wall(30*i,30*8,30,30,Ice,tc,30);
//        w->_dir = L;
//        tc->_maps[19]._myWall.push_back(w);
//    }
//    for(int i = 16;i<27;i++)
//    {
//        w = new Wall(30*i,30*23,30,30,Ice,tc,30);
//        w->_dir = R;
//        tc->_maps[19]._myWall.push_back(w);
//    }
//    for(int i = 8;i<23;i++)
//    {
//        w = new Wall(30*16,30*i,30,30,Ice,tc,30);
//        w->_dir = D;
//        tc->_maps[19]._myWall.push_back(w);
//    }
//    for(int i = 9;i<24;i++)
//    {
//        w = new Wall(30*27,30*i,30,30,Ice,tc,30);
//        w->_dir = U;
//        tc->_maps[19]._myWall.push_back(w);
//    }
    for(int i = 15;i<28;i++)
    {
        w = new Wall(30*i,30*7,30,30,Ice,tc,30);
        w->_dir = R;
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 16;i<29;i++)
    {
        w = new Wall(30*i,30*24,30,30,Ice,tc,30);
        w->_dir = L;
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 8;i<25;i++)
    {
        w = new Wall(30*15,30*i,30,30,Ice,tc,30);
        w->_dir = U;
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 7;i<24;i++)
    {
        w = new Wall(30*28,30*i,30,30,Ice,tc,30);
        w->_dir = D;
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 15;i<30;i++)
    {
        w = new Wall(30*i,30*6,30,30,Ice,tc,30);
        w->_dir = L;
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 14;i<29;i++)
    {
        w = new Wall(30*i,30*25,30,30,Ice,tc,30);
        w->_dir = R;
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 6;i<25;i++)
    {
        w = new Wall(30*14,30*i,30,30,Ice,tc,30);
        w->_dir = D;
        tc->_maps[19]._myWall.push_back(w);
    }
    for(int i = 7;i<26;i++)
    {
        w = new Wall(30*29,30*i,30,30,Ice,tc,30);
        w->_dir = U;
        tc->_maps[19]._myWall.push_back(w);
    }

}
