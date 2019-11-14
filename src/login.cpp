#include "login.h"
#include "regis.h"
#include "menu.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <process.h>
#include <fstream>
using namespace std;

int login::masuk()
{
    cout<<" Masukkan Username : "; fflush(stdin); gets(username);

cout<<" Masukkan Password : "; gets(password);

    strcat(username, "\n");
    strcat(password, "\n");
    FILE*nama,*apa;
    nama=fopen("Username.txt","r");
    apa=fopen("Password.txt", "r");
    while(fgets(a, 30, nama)!=NULL && fgets(b,30, apa)!=NULL) {
        if(strcmp(username, a)==0 && strcmp(password, b)==0){
                printf("\n\n Anda sukses Login!!!\n");

    char enter[100];
       printf("\n Tekan ENTER Untuk Melanjutkan \n"); fgets(enter, 100, stdin);

            fclose(nama);
            fclose(apa);
menu p;
p.menuutama();
            return 0;

           }
        }
    char enter[100];
    printf("\n Anda gagal Login!!!\n");
    printf("Tekan ENTER untuk Ke Menu Awal \n"); fgets(enter, 100, stdin);
    utama:

        return 0;
}
