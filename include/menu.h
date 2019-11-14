#ifndef MENU_H
#define MENU_H
#include "barang.h"
#include "login.h"
#include "transaksi.h"
#include "menu.h"

#include <string.h>

class menu : public barang, public login
{
    public:
        int pilihan, pilih;
        char u[30];
        void menubarang();
        void menuanalisis();
        int menuutama();

    protected:

    private:
};

#endif // MENU_H
