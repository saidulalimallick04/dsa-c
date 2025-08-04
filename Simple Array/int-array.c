#include<stdio.h>

int main(){
    int sizeOfArray;
    printf("Enter Size of The Array: ");
    scanf("%d",&sizeOfArray);

    int array[sizeOfArray];

    printf("Array Created!!\n\n");

    printf("Enter Values of Array:---------\n");

    for(int i = 0; i < sizeOfArray; i++){
        printf("Enter Element %d: ",i+1);
        scanf("%d",&array[i]);
    }

    printf("Array: ------------Forward Order----------------\n\n");
    for(int i = 0; i < sizeOfArray; i++){
        printf("%d\t",array[i]);
    }

    printf("\n\nArray: ------------Reverse Order----------------\n\n");
    for(int i = sizeOfArray-1; i > -1; i--){
        printf("%d\t",array[i]);
    }
    printf("\n\n------------------------------------------------------------\n\n");
    return 0;
}