#include<stdio.h>
    // Impelement Stack Data Structure using C.
    /*  Stack is one of the primary data structure in DSA.
        It follows LIFO(Last-in-First-out) principle, here the element which insrted last will remove first.
        It has mainly two method : 
            - Push Method: 
                In push mehod, we insert element into the stack. It insert elements in 'tos'/'top'-> [Top of Stack] position of the stack.
            
            -Pop Method:
                In Pop method, we remove element from the stack. This removal opreation also perform ofn the same index 'top'/'tos', remove element from the top position of the stack.
            
            -Top/Tos:
                This is mainly one index, that indicate the top most position of the stack.
            
            -Way of Implementation:
                Two main way of implementation is --
                                            (1) Array 
                                            (2) Linked List
    */
#define MAX 100     //statically defining Stack size = 100.

int stack[MAX];
int top =-1;


void push(){

    int newValue;
    printf("Enter value to insert Value: ");
    scanf("%d",&newValue);
    top ++;
    stack[top] = newValue;
}

int pop(){
    int poped_element;
    poped_element = stack[top];    
    top--; 
    return poped_element;
}

void display_stack(){
    printf("Total Elements: %d\n",top+1);
    printf("Stack:");
    for(int i = 0; i<=top; i++){
        printf(" --> %d",stack[i]);
    }
    printf("\n");

}

int main(){
    int size;   // This will store array size of stack oven by user.
    int poped; 

    printf("-------------_Explore_---------------\n\n");

    int choosenOption;
    do{
        printf("--------Select Option---------\n");
        printf("1.Push\t2.Pop\n");
        printf("3.Display Stack\t4.Exit\n    >> ");

        scanf("%d",&choosenOption);

        switch(choosenOption){
            case 1:
                push();
                break;
            case 2:
                if (top == -1){
                    printf("No Element to pop!!\n\n");
                }
                else{
                    poped = pop();
                    printf("Poped Element: %d",poped);
                }
                break;
            case 3:
                
                display_stack();
                break;
            case 4:
                return 0;
        }
    }while(1==1);
}   