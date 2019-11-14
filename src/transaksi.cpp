#include "transaksi.h"
#include "menu.h"
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

void transaksi::hitung()
{
    FILE *namabarang, *idbarang, *harga;
    do
    {
        cout<<"\n Masukkan Id barang : "; cin>>idinput;

        namabarang=fopen("Nama Barang.txt","r");
        idbarang=fopen("Id Barang.txt","r");
        harga=fopen("Harga Barang.txt","r");

        while((fgets(nama,30,namabarang)!=NULL) && (fgets(id,30,idbarang)!=NULL) && (fscanf(harga,"%d\n",&hargabarang)!=EOF))
        {

            char*hapus= strstr(id,"\n");
            if(hapus!=NULL)
            {
                strncpy(hapus,"\0",1);
            }

            if (strcmp(id,idinput)==0)
            {
                cout << " Nama Barang        : "<< nama;
                cout << " Harga Barang       : Rp "<<hargabarang;
                total+=hargabarang;
            }
        }

        fclose(namabarang);
        fclose(harga);
        fclose(idbarang);
        cout<<"\n\n\t Total Harga : Rp " << total << endl;
        cout<< "\n Tambah lagi ? (y/n) : "; cin>>pilih;
    }
    while(pilih!='n');
    cout<<" \n Total Harga        : Rp "<< total<< endl;
   cout<<" Masukkan Uang Anda : Rp "; cin>>uang;

   kembalian=uang-total;
   cout<<"\n\t\t Kembalian Uang Anda : Rp"<<kembalian<<endl;
   cout<<" \n";
   cout<<" ===== Terimakasih Atas Kunjungan Anda ======\n\n";
system("pause");
 menu q;
    q.menuutama();
}
