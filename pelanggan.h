#ifndef PELANGGAN_H
#define PELANGGAN_H
#include <paket.h>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSql>
#include <QDebug>
#include <QSqlQuery>

class pelanggan: public paket
{
public:
    pelanggan();
    pelanggan(QString kodepelanggan, QString namapelanggan, QString alamat, QString notelp);

    void setKODEPELANGGAN(QString KODEPELANGGAN);
    QString getKODEPELANGGAN();

    void setNAMAPELANGGAN(QString NAMAPELANGGAN);
    QString getNAMAPELANGGAN();

    void setALAMAT(QString ALAMAT);
    QString getALAMAT();

    void setNOTELP(QString NOTELP);
    QString getNOTELP();

 private:
    QString kodepelanggan,namapelanggan,alamat,notelp;
    QSqlDatabase koneksiDB;
};

#endif // PELANGGAN_H
