#include "pelanggan.h"

pelanggan::pelanggan() {}

pelanggan::pelanggan(QString kodepelanggan, QString namapelanggan, QString alamat, QString notelp) {
    this->kodepelanggan = kodepelanggan;
    this->namapelanggan = namapelanggan;
    this->alamat = alamat;
    this->notelp = notelp;
}

void pelanggan::setKODEPELANGGAN(QString KODEPELANGGAN) {
    this->kodepelanggan = KODEPELANGGAN;
}

QString pelanggan::getKODEPELANGGAN() {
    return this->kodepelanggan;
}

void pelanggan::setNAMAPELANGGAN(QString NAMAPELANGGAN) {
    this->namapelanggan = NAMAPELANGGAN;
}

QString pelanggan::getNAMAPELANGGAN() {
    return this->namapelanggan;
}

void pelanggan::setALAMAT(QString ALAMAT) {
    this->alamat = ALAMAT;
}

QString pelanggan::getALAMAT() {
    return this->alamat;
}

void pelanggan::setNOTELP(QString NOTELP) {
    this->notelp = NOTELP;
}

QString pelanggan::getNOTELP() {
    return this->notelp;
}
