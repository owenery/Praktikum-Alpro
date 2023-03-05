/* Nama File    : namaHari*/
/*Deskripsi     : Mengecek dan menampilkan nama hari berdasarkan nomor hari*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Selasa, 28 Febuari 2022, 16:20*/

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
    printf("Senin");
    break;
case 2 :
    printf("Selasa");
    break;
case 3 :
    printf("Rabu");
    break;
case 4 :
    printf("Kamis");
    break;
case 5 :
    printf("Jumat");
    break;
case 6 :
    printf("Sabtu");
    break;
case 7 :
    printf("Minggu");
    break;
default :
    printf("nomor bulan tidak tepat");
    }
}
