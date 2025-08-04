#include<stdio.h>

void swapValues(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}
void arrayPrinter(int *arr, int size){
    printf("Array(%d): [ ",size);
    for(int i = 0; i< size; i++){
        printf("%d ",arr[i]);
    }
    printf("]\n\n");
}
void selectionSortAlgorithm(int *arr,int size){
    for(int i = 0; i < size-1; i++){
        int min_index = i;
        for(int j = i+1; j<size; j++){
            if (arr[min_index] > arr[j]){
                min_index = j;
            }
        } 

        if(min_index != i){
            swapValues(&arr[min_index], &arr[i]);
        }
        
        printf("Step_%d: ",i+1);
        arrayPrinter(arr, size);
    }
}



int main(){
    int array[10] = {254,569,991,750,450,730,112,525,817,412};

    int size = (sizeof(array)/sizeof(array[0]));

    printf("Before Sort: \n");

    arrayPrinter(array, size);
    printf("-----------------------------------------------------\n");
    selectionSortAlgorithm(array,size);
    printf("-----------------------------------------------------\n");

    printf("After Sort: \n");

    arrayPrinter(array, size);
    return 0;
}