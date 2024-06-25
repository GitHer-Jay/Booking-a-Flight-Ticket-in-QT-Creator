#ifndef AEROPLANE_H
#define AEROPLANE_H
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <dbutility.h>

extern int flag;

class airoplane: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    aeroplane(QGraphicsItem * parent  = nullptr);
    void book();
    void engigneOnOf(int);
public slots:
    void fly();
private:
    QTimer *timer;
    int engineStatus;
};

#endif // AEROPLANE_H
