#include "aeroplane.h"
#include<QGraphicsScene>
#include <QPushButton>

aeroplane::aeroplane(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem (parent)
{
    setPixmap(QPixmap(":/images/aeroplane.jpg"));
    setTransformOriginPoint(-100, -100);
    this->setPos(0, 300);
    //Move();
    timer = new QTimer(this);
    //connect(timer->SIGNAL(timeout()), this->SLOT(move()));
    connect(timer, SIGNAL(timeout()), this, SLOT(fly()));
    timer->start(100);
}

void aeroplane::fly()
{
    if(flag == 1)
    {
    qDebug()<<x() << ":"<<y();
    qDebug()<<"its flying";
    setPos(x()+25, y()-20);

    if(pos().y() < -200)
    {
        //scene()->removeItem(this);
        //
        this->setPos(0, 300);
        qDebug() << "aeroplanes deleted";
        flag= 0;
    }
    }
}

void aeroplane::book()
{
    qDebug() << "aeroplane::book()";
}

void aeroplane::engigneOnOf(int status)
{
    qDebug()<<"aeroplane: engineOnOf())";
    this->engineStatus = status;
    //timer->start(100);
}
