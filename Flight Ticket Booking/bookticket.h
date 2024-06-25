#ifndef BOOKTICKET_H
#define BOOKTICKET_H

#include <QDialog>
#include <QDebug>
#include "dbutility.h"
#include "aeroplane.h"

#include <QSqlDatabase>
#include <QSqlQuery>

extern int flag;

namespace Ui {
class bookticket;
}

class bookticket : public QDialog
{
    Q_OBJECT

public:
    explicit bookticket(QWidget *parent = nullptr);
    ~bookticket();
    void getTicketsFromDB();
    void setAeroplane(aeroplane * ptr);

private slots:
    void on_btnDone_clicked();

private:
    Ui::bookticket *ui;
    aeroplane * ptrToAero;
    bool reservationFull();
    void checkStatus();
    void reset();
};

#endif // BOOKTICKET_H
