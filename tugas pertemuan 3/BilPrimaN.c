/*Nama File     : BilPrimaN*/
/*Deskripsi     : Menentukan dan menampilkan deret bilangan prima sampai N*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Minggu, 7 Maret 2022, 09:05*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int N;
    int i;
    int j=0;
    int a=0;

    /*Algoritma*/
    printf("Masukan nilai N : ");
    scanf("%d",&N);
    if (N>0){
        for (j=1;j<=N;j++){
            a=0;
            for (i=1;i<=N;i++){
                if (j % i == 0){
                    a += 1;
                }
            }

            if (a==2){
                if (j > 2){
                    printf(", ");
                }
                printf("%d",j);
            }
        }
    }
    else {
        printf("Masukan Salah!");
    }
    return 0;
}
