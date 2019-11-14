#include "barang.h"
#include "menu.h"
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

FILE *namabarang, *idbarang, *harga;
FILE*buang, *bbuang, *bbbuang;


void barang::inputbarang()
{
    system("cls");;
    do
    {
    cout<<"\n\t Masukkan Id Barang (Huruf) : "; fflush(stdin); cin.getline(id,sizeof(id));
    cout<<"\t Masukkan Nama Barang         : "; fflush(stdin); cin.getline(nama,sizeof(nama));
    cout<<"\t Masukkan Harga Barang        : Rp "; cin>>hargabarang;

    namabarang=fopen("Nama Barang.txt","a");
    idbarang=fopen("Id Barang.txt","a");
    harga=fopen("Harga Barang.txt","a");

    fputs(strcat(id, "\n"),idbarang);
    fputs(strcat(nama, "\n"),namabarang);
    fprintf(harga, "%d\n", hargabarang);

    fclose(namabarang);
    fclose(idbarang);
    fclose(harga);
    cout<<"\n";
    cout<<" Tambah lagi ? (y/n) : "; cin>>pilih;
    }
    while(pilih!='n');
}

void barang::lihatbarang()
{
    system("cls");

    cout<<"\n\t === List Barang === ";

        namabarang=fopen("Nama Barang.txt","r");
        idbarang=fopen("Id Barang.txt","r");
        harga=fopen("Harga Barang.txt","r");

        while((fgets(nama,30,namabarang)!=NULL) && (fgets(id,30,idbarang)!=NULL) && (fscanf(harga,"%d\n",&hargabarang)!=EOF))
        {
                cout<<"\n"<<endl;
                cout<<" Id Barang    : "<<id;
                cout<<" Nama Barang  : "<<nama;
                cout<<" Harga Barang : Rp "<<hargabarang;
        }

        fclose(namabarang);
        fclose(harga);
        fclose(idbarang);
         cout<<"\n"<<endl;

        system("pause");
}

void barang::hapusbarang()
{
    system("cls");

    namabarang=fopen("Nama Barang.txt","r+");
    idbarang=fopen("Id Barang.txt","r+");
   harga=fopen("Harga Barang.txt","r+");

    cout<<"\n   ====== Daftar Barang ======  \n\n";
    while(fgets(nama,30, namabarang)!=NULL&&(fgets(id,30,idbarang)!=NULL)&&(fscanf(harga,"%d\n",&hargabarang)!=EOF))
        {
            cout<<endl;
            cout<<"\t "<< i<< ". Nama Barang   : "<<nama;
             cout<<"\t "<<"   Id Barang     : "<<id;
              cout<<"\t "<<"   Harga Barang  : Rp "<<hargabarang;
            i++; cout<<endl;
        }
    cout<<"\n\n     Pilih Nama Barang : "; fflush(stdin); gets(hapus);
    strcat(hapus,"\n");  fclose(namabarang); fclose(idbarang); fclose(harga);
    printf("=========================================");

    printf("\n     Barang sukses Terhapus dari database \n\n");

    namabarang=fopen("Nama Barang.txt","r+");
    buang=fopen("buang.txt","w+");
    idbarang=fopen("Id Barang.txt","r+");
    bbuang=fopen("bbuang.txt","w+");
    harga=fopen("Harga Barang.txt","r+");
    bbbuang=fopen("bbbuang.txt","w+");
    while(fgets(nama,30, namabarang)!=NULL&&(fgets(id,30,idbarang)!=NULL)&&(fscanf(harga,"%d\n",&hargabarang)!=EOF))
    {
        if (strcmp(hapus, nama)!=0)
        {

            fputs(nama, buang);
            fputs(id, bbuang);
            fprintf(bbbuang,"%d\n", hargabarang);
        }
    }

    fclose(namabarang);
    fclose(harga);
    fclose(idbarang);
    fclose(buang);
    fclose(bbuang);
    fclose(bbbuang);

    namabarang=fopen("Nama Barang.txt","w");
    buang=fopen("buang.txt","r+");
    idbarang=fopen("Id Barang.txt","w");
    bbuang=fopen("bbuang.txt","r+");
    harga=fopen("Harga Barang.txt","w");
    bbbuang=fopen("bbbuang.txt","r+");

    int k=1;
    while((fgets(nama,30,buang)!=NULL)&&(fgets(id,30,bbuang)!=NULL)&&(fscanf(bbbuang,"%d\n",&hargabarang)!=EOF))
    {

        fputs(nama, namabarang);
        fputs(id, idbarang);
        fprintf(harga,"%d\n", hargabarang);
    }

    fclose(namabarang);
    fclose(idbarang);
    fclose(harga);
    fclose(buang);
    fclose(bbuang);
    fclose(bbbuang);
    system("pause");
}

