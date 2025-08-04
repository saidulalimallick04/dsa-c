#include<stdio.h>


void arrayPrinter(float *arr, int n){
    printf("Array(%d):\t[  ",n);

    for(int i = 0; i < n; i++){
        printf("%.2f  ", arr[i]);

    }
    printf("  ]\n\n");

}

void bubbleSortAlgorithm(float *arr, int n){
    for(int i = n-1; i >=0; i--){
        for(int j = 0; j <= i )
    }
}



int main(){

    float array[10] = {7.2,2.6,3.4,1.9,9.1,8.5,6.6,5.2,4.1,1.1};
    int n = (sizeof(array)/sizeof(array[0]));

    printf("\n\nBefore Sort-> ");
    arrayPrinter(array, n);



    printf("\n\nAfter Sort-> ");
    arrayPrinter(array, n);


    return 0;
}