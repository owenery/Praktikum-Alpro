/* Nama File    : KalSS*/
/*Deskripsi     : menghitung dan menampilkan hasil operasi aritmatika*/
/*Pembuat       : David Nugroho/2406012212*/
/*Tanggal       : Selasa, 28 Febuari 2022, 22:30*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int iA;
    int iB;
    char O;
    char Op;
    float D;

    /*Algoritma*/
    printf("Masukan iA : ");
    scanf("%d",&iA);
    printf("Masukan iB : ");
    scanf("%d",&iB);
    printf("Masukan O : ");
    scanf("%c",&O);
    scanf("%c",&Op);
    switch (Op){
case 'a' :
    printf("%d",iA + iB);
    break;
case 'b' :
    printf("%d",iA-iB);
    break;
case 'c' :
    printf("%d",iA*iB);
    break;
case 'd' :
    D = iA/iB;
    printf("%f",D);
    break;
case 'e' :
    printf("%d",iA / iB);
    break;
case 'f' :
    printf("%d",iA%iB);
    break;
default :
    printf("Bukan pilihan menu yang benar");
    }
    return 0;
}
