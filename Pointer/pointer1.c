# include<stdio.h>

int main(){
    int myAge = 42;

    printf(" -> My Age = %d\n\n",myAge);
    printf(" -> My Age stored in Memory address: %p\n\n",&myAge);

    printf("-------------------------- Now I am storing 'myAge' variable into ptr_myAge. ------------------------------\n\n");

    int* ptr_myAge = myAge;

    printf(" -> Let's Print ptr_myAge: %p\n\n", ptr_myAge);
    printf(" -> Let's Print My Age using ptr_myAge: %d\n\n",ptr_myAge);
    
    return 0;
}