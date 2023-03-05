/* Nama File    : CekSegitiga*/
/*Deskripsi     : Mengecek dan menampilkan kelompok segitiga sesuai sisi yang dimilikinya*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Selasa, 28 Febuari 2022, 19:47*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int a;
    int b;
    int c;

    /*Algoritma*/
    printf("Masukan a : ");
    scanf("%f",&a);
    printf("Masukan b : ");
    scanf("%f",&b);
    printf("Masukan c : ");
    scanf("%f",&c);

    if (a<=0 || b<=0 || c<=0){
        printf("Terdapat nilai yang bukan sisi segitiga");
    }
    else if(a==b & b==c){
        printf("Segitiga Sama Sisi");
    }
    else if(a==b & b!=c || a==c & b!=c || b==c & c!=a){
        printf("Segitiga Sama Kaki");
    }
    else {
        printf("Segitiga Sembarang");
    }
    return 0;
}
