/*Nama File     : BilSempN*/
/*Deskripsi     : Menentukan dan menampilkan deret bilangan sempurna sampai N*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Minggu, 7 Maret 2022, 11:53*/

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
        for (j=2;j<=N;j++){
            a=0;
            for (i=1;i<j;i++){
                if (j % i == 0){
                    a += i;
                }
            }
            if (a==j){
                if (j > 6){
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

