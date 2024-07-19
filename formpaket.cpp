#include "formpaket.h"
#include "ui_formpaket.h"

FormPaket::FormPaket(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormPaket)
{
    ui->setupUi(this);

    paket uji;
}

FormPaket::~FormPaket()
{
    delete ui;
}

void FormPaket::on_pushButton_clicked()
{
    uji.setKodepaket(ui->kodePaketComboBox->currentText());
    uji.setNamapaket(ui->namaPaketLineEdit->text());

    ui->hargaLineEdit->setText(QString::number(uji.getHarga()));
}

