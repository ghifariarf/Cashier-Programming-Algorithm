#ifndef TRANSAKSI_H
#define TRANSAKSI_H
#include "barang.h"


class transaksi : public barang
{
    public:


  int total=0, uang, kembalian;
    void hitung();

    protected:

    private:
};

#endif // TRANSAKSI_H
