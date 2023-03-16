/*Nama File     : NilMax2Tabel*/
/*Deskripsi     : Mencari dan Menampilkan nilai maks ke-2 dari array*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Rabu, 15 Maret 2023, 16:04*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus//
    int N,i,Maks1,Maks2;

    //Algortima//
    printf("Masukan nilai N : ");
    scanf("%d",&N);
    printf("Masukan nilai Tabel :\n");
    int Tabel[N];
    Maks1 = 0;
    Maks2 = 0;
    for (i=1;i<=N;i++){
        scanf("%d",&Tabel[i]);
        if (Tabel[i] > Maks1){
            Maks2 = Maks1;
            Maks1 = Tabel[i];
        }
        else {
            if (Tabel[i] > Maks2 & Tabel[i] < Maks1){
            Maks2 = Tabel[i];
            }
        }
    }
    printf("%d",Maks2);
    return 0;
}
