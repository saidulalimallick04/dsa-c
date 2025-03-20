#include<stdio.h>

int main(){
    int number;                                                     // variable to store the number.
    printf("Enter Number to check: ");
    scanf("%d",&number);                                            // take the number as input from user.
    
    if(number <= 0){
        printf("0 is Not Prime Number (Prime numbers are greater than 1)");     // handle if 0 OR less than 0.
    }
    else if(number==1){
        printf("1 is Not Prime Number (A prime number must have exactly two factors: 1 and itself)");   // handle if 1.
    }
    else if(number==2){
        printf("2 is Prime Number");                        // handle if 2, we use pre define to avoid error.
    }
    else{
        int iteration = number/2 + 1;                       // reduce the number of iteration.
        int is_prime= 1;                                    // first we conside the number as prime.

        for(int i=2;i<iteration;i++){       
            if(number%i==0){                                // start checking from 2 to half of the number.
                printf("%d can divide.\n",i);               // show which number actully divide our number first.
                is_prime=0;
                break;                                      // if any other number can divide our number the break the loop.
            }
        }

        if(is_prime==0){                                    // after iteration it checks is the number remains prime or our assumption is false.
            printf("-------\n%d is Not Prime Number.",number);
        }
        else{
            printf("-------\n%d is Prime Number.",number);

        }
    }
    return 0;
}