#ifndef FORMPELANGGAN_H
#define FORMPELANGGAN_H

#include <QWidget>
#include <pelanggan.h>
namespace Ui {
class FormPelanggan;
}

class FormPelanggan : public QWidget
{
    Q_OBJECT

public:
    explicit FormPelanggan(QWidget *parent = nullptr);
    ~FormPelanggan();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FormPelanggan *ui;
    pelanggan uji;
    QSqlDatabase koneksiDB;
};

#endif // FORMPELANGGAN_H
