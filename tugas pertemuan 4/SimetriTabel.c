/*Nama File     : SimetriTabel*/
/*Deskripsi     : Menngecek dan menampilkan apakah T1 dan T2 simetri*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Rabu, 15 Maret 2023, 18:32*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int N,M,count,i;

    //Algoritma
    printf("N : ");
    scanf("%d",&N);
    printf("M : ");
    scanf("%d",&M);
    int T1[N];
    int T2[M];

    if (N==M){
        count = 0;
        printf("T1 :\n");
        for (i=0;i<N;i++){
            scanf("%d",&T1[i]);
        }
        printf("T2 :\n");
        for (i=0;i<M;i++){
            scanf("%d",&T2[i]);
        }
        for (i=0;i<N;i++){
            if (T1[i]==T2[i]){
                count += 1;
            }
        }
        if (count==N & count==M){
                printf("Simetri");
            }
        else {
            printf("Tidak Simetri");
        }
    }
    else {
        printf("Tidak Simetri");
    }
    return 0;
}
