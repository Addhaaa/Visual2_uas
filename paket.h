#ifndef PAKET_H
#define PAKET_H
#include <QString>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSql>
#include <QDebug>
#include <QSqlQuery>

class paket
{
public:
    paket();

    void setKodepaket(QString kodepaket);
    int getKpaket();

    void setNamapaket(QString namapaket);
    int getNpaket();

    int getHarga();

private:
    QString kodepaket,namapaket,harga;
    int kpaket,npaket;
};

#endif // PAKET_H
