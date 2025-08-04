#include<stdio.h>
#define MAX 10
    // Implementation Of Queue Data Structure using C.
    /*
        Queue is one of the basic and primary data structure. 
        Queue follows FIFO(First-in-First-out) principle. Where the data element which was inserted first will remove first. 
        Importent Temrminologies:
            - EnQueue: 
                EnQueue is an insertion Operation in Queue Data Structure. It insert values in the front index of queue.
            - DeQueue: 
                In Queue, Removal operation is called Dequeue. It remove data from thre rear index.
            - Front & Rear:
                Two importent indexs in Queue are 'Front' & 'Rear' . between Front and Rear the actual datas are present.  
            - Way of Implementation:



    */

int queue[MAX];     // Statically define the queue size.
int front = -1;     // front index use to insert values in Queue
int rear = -1;      // rear index is used to remove/eject values from the Queue.



