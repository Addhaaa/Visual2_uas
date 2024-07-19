#include "paket.h"

paket::paket() {
}

void paket::setKodepaket(QString kodepaket)
{
    this->kodepaket=kodepaket;
}

int paket::getKpaket()
{
    if(this->kodepaket=="1kg"){
        this->kpaket=15000;
    }else if(this->kodepaket=="2kg"){
        this->kpaket=30000;
    }else if(this->kodepaket=="4kg"){
        this->kpaket=60000;
    }else{
        this->kpaket=70000;
    }
    return this->kpaket;
}

void paket::setNamapaket(QString namapaket)
{
    this->namapaket=namapaket;
}

int paket::getNpaket()
{
    return this->npaket;
}

int paket::getHarga()
{
    return getKpaket();
}
