/*Nama File     : CekBilPrima*/
/*Deskripsi     : Menentukan apakah termasuk bilangan prima*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Minggu, 7 Maret 2022, 07:59*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int N;
    int i;
    int j=0;

    /*Algoritma*/
    printf("Masukan nilai N : ");
    scanf("%d",&N);
    if (N>0){
        for (i=1;i<=N;i++){
            if (N % i == 0){
                j += 1;
            }
        }
        if (j==2){
            printf("Bilangan Prima");
        }
        else {
            printf("Bukan Bilangan Prima");
        }
    }
    else {
        printf("Masukan Salah!");
    }
    return 0;
}
