#include "utama.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSql>
#include <QDebug>
#include <QSqlQuery>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()) {
        qDebug() << "Database Terkoneksi";
    } else {
        qDebug() << koneksiDB.lastError().text();
    }

    QSqlQuery sql(koneksiDB);

    if (!sql.exec("INSERT INTO pelanggan(kodepelanggan, namapelanggan, alamat, notelp) "
                  "VALUES('01', 'Adha','landasan ulin', '081111')")) {
        qDebug() << sql.lastError().text();
    } else {
        qDebug() << "Data Berhasil Disimpan";
    }

    Utama w;
    w.show();
    return a.exec();
}
