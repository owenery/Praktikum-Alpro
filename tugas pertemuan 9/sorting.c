#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int T[], int N){
    //Kamus
    int i,k,pass,temp, L;

    //Algoritma
    L = 0;
    while (L < N){
        L += 1;
        for(pass=0;pass<N-1;pass++){
            for(k=pass+1;k<=pass+1;k++){
                if(T[pass]>T[k]){
                    temp = T[k];
                    T[k] = T[pass];
                    T[pass] = temp;
                }
            }
        }
    }
}

int Maks(int T[], int N){
    int max = T[0];
    for(int i=1;i<=N;i++){
        if(T[i]>max){
            max = T[i];
        }
    }
    return max;
}

void CountingSort(int T[], int N){
    int max = Maks(T, N);

    int* count = (int*)malloc((max+1)*sizeof(int));

    for(int i=0;i<=max;i++){
        count[i] = 0;
    }
    for(int i=0;i<N;i++){
        count[T[i]]++;
    }
    for(int i=1;i<=max;i++){
        count[i] += count[i-1];
    }

    int* sortedArray = (int*)malloc(N*sizeof(int));

    for(int i=N-1;i>=0;i--){
        sortedArray[count[T[i]]-1] = T[i];
        count[T[i]]--;
    }
    for(int i=0;i<N;i++){
        T[i] = sortedArray[i];
    }
    free(count);
    free(sortedArray);
}

void printArray(int  T[], int N){
    for(int i=0;i<N;i++){
        printf("%d ",T[i]);
    }
    printf("\n");
}

void InsertionSort(int arr[], int n){
    //Kamus
    int i;
    int temp;
    int j;

    //Algoritma
    for(i=1;i<n;i++){
        temp = arr[i]; //10
        j = i - 1; //0
        while(j>=0 && arr[j] > temp){
            arr[j+1] = arr[j]; //arr[j+1] = 29
            j -= 1; //-1
        }
        arr[j+1] = temp; //arr[-1 + 1] = 10
    }
}

void SelectionSort(int arr[], int n){
    //Kamus
    int i;
    int temp;
    int j;
    int min;

    //Algoritma
    for(i=0;i<n;i++){
        min = i;
        for (j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    //Kamus
    int N;
    int T[] = {3, 1, 8, 4, 2};
    int i;
    char O;

    //Algoritma
    printf("============= PROGRAM SORTING ==============\n");
    printf("Array yang belum terurut : ");
    N = 5;
    for(i=0;i<N;i++){
        printf("%d ",T[i]);
    }
    printf("\n");

    printf("Pilih pilihan sorting yang anda inginkan :\n");
    printf("A : Bubble Sort\n");
    printf("B : Counting Sort\n");
    printf("C : Insertion Sort\n");
    printf("D : Selection Sort\n");
    printf("%c\n",O);
    scanf("%c",&O);
    switch(O){
case 'A' :
    BubbleSort(T, N);
    break;
case 'B' :
    CountingSort(T, N);
    break;
case 'C' :
    InsertionSort(T, N);
    break;
case 'D' :
    SelectionSort(T, N);
    break;
default :
    printf("Bukan merupakan option sorting yang disediakan.");
    return 0;
    }
    printf("Array yang sudah terurut : \n");
    N = 5;
    for(i=0;i<N;i++){
        printf("%d ",T[i]);
    }
    printf("\n============================================");
    return 0;
}
