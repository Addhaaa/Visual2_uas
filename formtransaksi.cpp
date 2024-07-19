#include "formtransaksi.h"
#include "ui_formtransaksi.h"

FormTransaksi::FormTransaksi(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormTransaksi)
{
    ui->setupUi(this);

    transaksi uji;
}

FormTransaksi::~FormTransaksi()
{
    delete ui;
}

void FormTransaksi::on_pushButton_clicked()
{
    uji.setKODETRANSAKSI(ui->kodeTransaksiLineEdit->text());
    uji.setTANGGAL(ui->tanggalLineEdit->text());
    uji.setKODEPELANGGAN(ui->kodePelangganLineEdit->text());
    uji.setKODEPAKET(ui->kodePaketLineEdit->text());
    uji.setJUMLAH(ui->jumlahLineEdit->text());
    uji.setKETERANGAN(ui->keteranganLineEdit->text());
}

