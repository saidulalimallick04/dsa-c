#include<stdio.h>


void swap(int* ptr1, int* ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void bubbleSortAlgorithom(int arr[]){
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = n-1; i >= 0 ; i--){
        for (int j = 0; j <= i-1; j++){
            if (arr[j]<arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}


int main(){

    int array[2] = {1,0};

    printf("Before Swap:\t[%d , %d]",array[0],array[1]);

    bubbleSortAlgorithom(array);

    printf("\n\nAfter Swap:\t[%d , %d]",array[0],array[1]);


    return 0;
}