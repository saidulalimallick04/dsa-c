
// Q1. Find Sum of all elements present in array(Integer Array)

#include<stdio.h>

int main(){

    int n;
    printf("Enter size of the array(in int): ");
    scanf("%d",&n);                                             // taking size of the array from user.

    int array[n];                                               // initialized the array.

    for(int i=0; i<n; i++){
        printf("Enter The Number_%d: ",i+1);
        scanf("%d",&array[i]);                                  // take array value input from user.
    }

    int sumOfArrayElements=0;                                   // initialized a variable for storing Sum.
    for(int i=0;i<n;i++){
        sumOfArrayElements += array[i];
    }

    printf("\nSum Of All Elements: %d",sumOfArrayElements);       // printing sum.

    return 0;
}