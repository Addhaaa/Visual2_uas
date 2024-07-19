#ifndef FORMTRANSAKSI_H
#define FORMTRANSAKSI_H

#include <QWidget>
#include <transaksi.h>
namespace Ui {
class FormTransaksi;
}

class FormTransaksi : public QWidget
{
    Q_OBJECT

public:
    explicit FormTransaksi(QWidget *parent = nullptr);
    ~FormTransaksi();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FormTransaksi *ui;
    transaksi uji;
};

#endif // FORMTRANSAKSI_H
