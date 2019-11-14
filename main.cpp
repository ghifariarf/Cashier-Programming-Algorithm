#include <iostream>
#include <stdlib.h>
#include "barang.h"
#include "menu.h"
#include "transaksi.h"
#include "regis.h"
#include "login.h"

using namespace std;

int main()
{
    int pilih;

utama:
     system("cls");
    cout<<"\n ======= Selamat Datang di Kasir INI ======= \n";
    cout<<"\n\t|\t      MENU                 |\n";
    cout<<"\n 1. Register \n 2. Login \n 3. Exit\n";
    cout<<"\n Pilih No Menu : "; cin>>pilih;

    regis a;
    login b;

    switch(pilih)
        {
            case 1: a.regist(); system("pause"); goto utama; break;
            case 2: if(b.masuk() == 0)
                        {
                            system("cls");
                        } goto utama; break;
            case 3: cout<<"\n === Terima Kasih ===\n"; break;
            default: cout<<"\n Anda salah memilih nomor \n";  break;
        }
return 0;
}
