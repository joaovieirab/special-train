#include"queue.h"
#include<stdio.h>
#include<stdlib.h>

Iqueue * empty_queue_gen()
{
    Iqueue * new_queue;
    new_queue = (Iqueue *) malloc(sizeof(Iqueue));
    new_queue->head = (Inode *) malloc(sizeof(Inode));
    new_queue->tail = (Inode *) malloc(sizeof(Inode));
    new_queue->head->empty = 1;
    new_queue->head->next = new_queue->tail;
    new_queue->tail = NULL;
    return new_queue;
}



/*TESTES*/

int main ()
{
    Iqueue * queue1;
    queue1 = empty_queue_gen();
    printf("%d\n", queue1->head->empty);
    return 0;
}