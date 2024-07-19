#include "utama.h"
#include "ui_utama.h"

Utama::Utama(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Utama)
{
    ui->setupUi(this);
    myForm = new FormPaket;
    myForm2 = new FormPelanggan;
    myForm3 = new FormTransaksi;
}

Utama::~Utama()
{
    delete ui;
}

void Utama::on_pushButton_clicked()
{
    myForm->show();
}


void Utama::on_pushButton_2_clicked()
{
    myForm2->show();
}


void Utama::on_pushButton_3_clicked()
{
    myForm3->show();
}

