#ifndef FORMPAKET_H
#define FORMPAKET_H

#include <QWidget>
#include <paket.h>
namespace Ui {
class FormPaket;
}

class FormPaket : public QWidget
{
    Q_OBJECT

public:
    explicit FormPaket(QWidget *parent = nullptr);
    ~FormPaket();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FormPaket *ui;
    paket uji;
};

#endif // FORMPAKET_H
