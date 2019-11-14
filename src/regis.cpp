#include "regis.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <process.h>
using namespace std;

int regis :: regist()
{
    system("cls");
     cout<<"\n\t|\t      Kasir INI                 |\t\t\t"<<endl;
    cout<<"\n Masukkan Username : "; fflush(stdin); gets(username);
    cout<<" Masukkan Password : "; gets(password);
    FILE*nama,*apa;
    strcat(username, "\n");
    nama=fopen("Username.txt","a+");
    while(fgets(a, 30, nama)!=NULL){
        if (strcmp(username,a)==0){
            cout<<"\n Username sudah ada yang punya!!!\n";
            return 0;

        }
    }

    apa=fopen("Password.txt","a+");
    strcat(password, "\n");
    fputs(username,nama);
    fputs(password,apa);
    fclose(nama);
    fclose(apa);
        printf("\n\n Anda sudah terdaftar!!!\n");
        return 0;

}
