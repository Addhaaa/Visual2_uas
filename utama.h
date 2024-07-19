#ifndef UTAMA_H
#define UTAMA_H

#include <QMainWindow>
#include <formpaket.h>
#include <formpelanggan.h>
#include <formtransaksi.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class Utama;
}
QT_END_NAMESPACE

class Utama : public QMainWindow
{
    Q_OBJECT

public:
    Utama(QWidget *parent = nullptr);
    ~Utama();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Utama *ui;
    FormPaket * myForm;
    FormPelanggan * myForm2;
    FormTransaksi * myForm3;
};
#endif // UTAMA_H
