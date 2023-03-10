/*Nama File     : CekBilSemp*/
/*Deskripsi     : Menentukan apakah termasuk bilangan sempurna*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Minggu, 7 Maret 2022, 08:30*/

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
        for (i=1;i<N;i++){
            if (N % i == 0){
                j += i;
            }
        }
        if (j==N){
            printf("Bilangan Sempurna");
        }
        else {
            printf("Bukan Bilangan Sempurna");

        }
    }
    else {
        printf("Masukan Salah!");
    }
    return 0;
}
