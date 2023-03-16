/*Nama File     : gayaSentr*/
/*Deskripsi     : Mencari dan Menampilkan jumlah
 nilai dari array yang memiliki frekuensi kemunculan lebih dari satu kali*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Rabu, 16 Maret 2023, 20:53*/

#include <stdio.h>
#include <stdlib.h>

int Frek[100];

int main(){
    //Kamus//
    int N,i,result;

    //Algoritma//
    printf("Masukan N : ");
    scanf("%d",&N);
    printf("Masukan nilai tabel :\n");
    int tabel[N];

    for (i=0;i<N;i++){
        scanf("%d",&tabel[i]);
        Frek[tabel[i]] += 1;
    }
    for (i=0;i<N;i++){
        if (Frek[tabel[i]] > 1) {
            result += tabel[i];
            Frek[tabel[i]] = 0;
        }
    }
    printf("%d",result);
    return 0;
}
