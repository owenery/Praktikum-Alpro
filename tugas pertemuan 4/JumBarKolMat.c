/*Nama File     : JumBarKolMat*/
/*Deskripsi     : Menghitung dan Menampilkan nilai dari masing masing baris dan kolom*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Rabu, 15 Maret 2023, 19:08*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamsus
    int N,i,j,sumcol,sumrow;

    //Algoritma
    printf("N : ");
    scanf("%d",&N);
    printf("T :\n");
    int T[N][N];

    for (i=0;i<N;i++){
        sumrow = 0;
        for (j=0;j<N;j++){
            scanf("%d",&T[i][j]);
            sumrow += T[i][j];
        }
        printf("%d\n",sumrow);
    }
    for (i=0;i<N;i++){
        sumcol = 0;
        for (j=0;j<N;j++){
            sumcol += T[j][i];
        }
        printf("%d\n",sumcol);
    }
    return 0;
}
