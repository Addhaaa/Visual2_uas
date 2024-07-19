#ifndef TRANSAKSI_H
#define TRANSAKSI_H
#include <paket.h>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSql>
#include <QDebug>
#include <QSqlQuery>

class transaksi : public paket
{
public:
    transaksi();
    transaksi(QString kodetransaksi, QString tanggal, QString kodepelanggan, QString kodepaket,QString jumlah,QString keterangan);

    void setKODETRANSAKSI(QString KODETRANSAKSI);
    QString getKODETRANSAKSI();

    void setTANGGAL(QString TANGGAL);
    QString getTANGGAL();

    void setKODEPELANGGAN(QString KODEPELANGGAN);
    QString getKODEPELANGGAN();

    void setKODEPAKET(QString KODEPAKET);
    QString getKODEPAKET();

    void setJUMLAH(QString JUMLAH);
    QString getJUMLAH();

    void setKETERANGAN(QString KETERANAGAN);
    QString getKETERANGAN();

private:
    QString kodetransaksi,tanggal,kodepelanggan,kodepaket,jumlah,keterangan;
};

#endif // TRANSAKSI_H
