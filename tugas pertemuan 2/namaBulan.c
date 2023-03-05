/* Nama File    : namaBulan*/
/*Deskripsi     : Mengecek dan menampilkan nama bulan berdasarkan nomor bulan*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Selasa, 28 Febuari 2022, 16:28*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int i;

    /*Algoritma*/
    printf("Masukan i : ");
    scanf("%d",&i);
    switch (i){
case 1 :
    printf("Januari");
    break;
case 2 :
    printf("Febuari");
    break;
case 3 :
    printf("Maret");
    break;
case 4 :
    printf("April");
    break;
case 5 :
    printf("Mei");
    break;
case 6 :
    printf("Juni");
    break;
case 7 :
    printf("Juli");
    break;
case 8 :
    printf("Agustus");
    break;
case 9 :
    printf("September");
    break;
case 10 :
    printf("Oktober");
    break;
case 11 :
    printf("November");
    break;
case 12 :
    printf("Desember");
    break;
default :
    printf("nomor bulan tidak tepat");
    }
}
