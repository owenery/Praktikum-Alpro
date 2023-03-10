/*Nama File     : FaktorBil*/
/*Deskripsi     : Menentukan faktor bilangan dari input*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Minggu, 5 Maret 2022, 22:07*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int N;
    int i;

    /*Algoritma*/
    printf("Masukan nilai N : ");
    scanf("%d",&N);
    if (N>0){
        for (i=1;i<=N;i++){
            if (N % i == 0){
                if (i>1){
                    printf(", ");
                }
                printf("%d",i);
            }
        }
    }
    else {
        printf("Masukan salah!");
    }
    return 0;
}

