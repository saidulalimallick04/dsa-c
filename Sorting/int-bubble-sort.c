#include<stdio.h>

void swap(int* ptr1, int* ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void bubbleSortAlgorithm(int arr[], int n){
    for(int i = n-1; i >= 0 ; i--){
        for (int j = 0; j <= i-1; j++){
            if (arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}


void arrayPrinter(int arr[],int n){
    
    printf("Array(%d): [ ",n);
    for(int i = 0; i < n; i++){
        printf("%d  ",arr[i]);
    }
    printf("]\n\n");
}



int main(){

    int array[10] = {1,3,5,4,9,1,2,5,4,5};
    int n =(sizeof(array)/sizeof(array[0]));
    printf("\nBefore Sort:");
    arrayPrinter(array, n);

    bubbleSortAlgorithm(array , n);

    printf("After Sort:");
    arrayPrinter(array, n);


    return 0;
}