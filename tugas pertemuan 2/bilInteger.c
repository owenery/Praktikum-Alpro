/* Nama File    : bilInteger*/
/*Deskripsi     : Mengecek dan menampilkan kelompok integer*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Selasa, 28 Febuari 2022, 16:01*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int a;

    /*Algoritma*/
    printf("Masukan a : ");
    if (scanf("%d",&a)){
        if (a >= 0){
            if (a>0){
                printf("Bilangan bulat positif");
            }
            else{
                printf("Nol");
            }
        }
        else{
            printf("Bilangan bulat negatif");
        }
    }
    else{
        printf("Bukan termasuk bilangan bulat");
    }
    return 0;
}
