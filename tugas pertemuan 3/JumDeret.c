/*Nama File     : JumDeret*/
/*Deskripsi     : menghitung dan menampilkan jumlah deret bilangan integer*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Rabu, 1 Maret 2022, 21:11*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int N;
    int count;
    int total=0;

    /*Algoritma*/
    printf("Masukan nilai N : ");
    scanf("%d",&N);
    if (N>0){
            for (count=1; count <= N; count++){hgg
            total += count;
        }
        printf("Jumlah dari deret tersebut adalah %d",total);
    }
    else {
        printf("Masukan salah!");
    }
    return 0;
}
