#include "menu.h"
#include "transaksi.h"
#include "barang.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

void menu::menubarang()
{
    bar:
    system("cls");

    cout<<"\n\t|\t      Kasir INI                 |\t\t\t  \n"<<endl;
    cout<< " 1. Input Barang" << endl;
    cout<< " 2. Lihat Barang" << endl;
    cout<< " 3. Hapus Barang" << endl;
    cout<< " 4. Kembali" << endl;
    cout<< " 5. Logout" << endl;
    cout<<"\n Pilih No Menu : "; cin>>pilihan;

    switch(pilihan)
        {
            case 1 : inputbarang(); goto bar; break;
            case 2 : lihatbarang(); goto bar; break;
            case 3 : hapusbarang(); goto bar; break;
            case 4 : menuutama(); break;
            case 5 : cout<<"\n === Terima Kasih ===\n"; break;
            default: cout<<"\n Anda salah memilih nomor \n"; system("pause"); break;
        }
}

int menu::menuutama()
{

    system("cls");

    cout<<"\n\t|\t      Kasir INI                 |\t\t\t  \n";
    cout<<"\t|=======================================|";
    cout<<"\n\t|\t      MENU UTAMA                |\n";
    cout<<"\n 1. Barang \n 2. Transaksi \n 3. Logout\n";
    cout<<"\n Pilih No Menu : "; cin>>pilih;

    menu b;
    transaksi c;

    switch(pilih)
        {
            case 1: b.menubarang(); break;
            case 2: c.hitung(); break;
            case 3: cout<<"\n === Terima Kasih ===\n"; break;
            default: cout<<"\n Anda salah memilih nomor \n";  break;
        }
}


