#include "transaksi.h"
transaksi::transaksi() {
}

transaksi::transaksi(QString kodetransaksi, QString tanggal, QString kodepelanggan, QString kodepaket, QString jumlah, QString keterangan)
{
    this->kodetransaksi=kodetransaksi;
    this->tanggal=tanggal;
    this->kodepelanggan=kodepelanggan;
    this->kodepaket=kodepaket;
    this->jumlah=jumlah;
    this->keterangan=keterangan;
}

void transaksi::setKODETRANSAKSI(QString KODETRANSAKSI)
{
    this->kodetransaksi=KODETRANSAKSI;
}

QString transaksi::getKODETRANSAKSI()
{
    return this->kodepelanggan;
}

void transaksi::setTANGGAL(QString TANGGAL)
{
    this->tanggal=TANGGAL;
}

QString transaksi::getTANGGAL()
{
    return this->tanggal;
}

void transaksi::setKODEPELANGGAN(QString KODEPELANGGAN)
{
    this->kodepelanggan=KODEPELANGGAN;
}

QString transaksi::getKODEPELANGGAN()
{
    return this->kodepelanggan;
}

void transaksi::setKODEPAKET(QString KODEPAKET)
{
    this->kodepaket=KODEPAKET;
}

QString transaksi::getKODEPAKET()
{
    return this->kodepaket;
}

void transaksi::setJUMLAH(QString JUMLAH)
{
    this->jumlah=JUMLAH;
}

QString transaksi::getJUMLAH()
{
    return this->jumlah;
}

void transaksi::setKETERANGAN(QString KETERANAGAN)
{
    this->keterangan=KETERANAGAN;
}

QString transaksi::getKETERANGAN()
{
    return this->keterangan;
}
