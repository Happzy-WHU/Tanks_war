#ifndef MAP_H
#define MAP_H
#include "Wall.h"
#include <QList>

class Map
{
public:
    Map();
    QList<Wall*> _myWall;
    //Wall* _wall;//是否需要？
};

#endif // MAP_H
