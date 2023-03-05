/* Nama File    : hitungTahanan*/
/*Deskripsi     : Menjumlahkan dan menampilkan jumlah tahanan*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Selasa, 28 Febuari 2022, 16:30*/


#include <stdio.h>
#include <stdlib.h>

int main (){
    /*Kamus*/
    int p;
    int q;
    int r;
    int t;

    /*Algoritma*/
    printf("Masukan p : ");
    scanf("%d",&p);
    printf("Masukan q : ");
    scanf("%d",&q);
    printf("Masukan r : ");
    scanf("%d",&r);
    if (p >= 0 & q >= 0 & r >= 0){
        t = p + q + r;
        printf("%d",t);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
