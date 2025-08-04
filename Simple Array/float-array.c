#include<stdio.h>

int main(){
    int sizeOfArray;
    printf("Enter The Size Of The Array: ");
    scanf("%d", &sizeOfArray);

    float floatArray[sizeOfArray];

    printf("Float Array Created!!\n\n");

    printf("Enter Values of Float Array:-----------\n");
    for(int i = 0; i< sizeOfArray; i++){
        printf("Enter elelment %d: ",i+1);
        scanf("%f",&floatArray[i]);
    }

    
    printf("Float Array: ------------Forward Order-------------\n [");
    for(int i = 0; i< sizeOfArray; i++){
        printf("%.2f\t",floatArray[i]);
    }
    
    printf("\n\nFloat Array: ------------Forward Order-------------\n [");
    for(int i = sizeOfArray-1; i > -1; i--){
        printf("%.2f\t", floatArray[i]);
    }
    printf("\n\n------------------------------------------------------------\n\n");
    return 0;
}