#include "formpelanggan.h"
#include "ui_formpelanggan.h"

FormPelanggan::FormPelanggan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormPelanggan)
{
    ui->setupUi(this);

    pelanggan uji;

    QSqlDatabase koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if(!koneksiDB.open()){
        qDebug()<<koneksiDB.lastError().text();
    }else{
        qDebug()<<"Database terkomeksi";
    }
}

FormPelanggan::~FormPelanggan()
{
    delete ui;
}

void FormPelanggan::on_pushButton_clicked()
{
    QSqlQuery sql(koneksiDB);
    sql.prepare("INSERT INTO pelanggan(kodepelanggan, namapelanggan, alamat, notelp)"
            "VALUE(:kodepelanggan, :namapelanggan, :alamat, :notelp)");
    sql.bindValue(":kodepelanggan",ui->kodePelangganLineEdit->text());
    sql.bindValue(":namapelanggan",ui->namaPelangganLineEdit->text());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":notelp",ui->noTelpLineEdit->text());
}

