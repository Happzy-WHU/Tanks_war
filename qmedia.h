#ifndef QMEDIA_H
#define QMEDIA_H

#include<QMediaPlayer>
class QMedia:public QMediaPlayer
{
public:
    QMedia();
    QMedia(QMedia* M);
    ~QMedia();
};

#endif // QMEDIA_H
