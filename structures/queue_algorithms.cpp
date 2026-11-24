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

void print_queue(Iqueue * queue)
{
    if(queue->head->empty == 1)
        printf("The list is empty!\n") ;
    else
    {
        Inode * cursor;
        for(cursor = queue->head; cursor != NULL; cursor = cursor->next)
            printf("%d\n", cursor->elem);
    }
}

void enqueue(Iqueue ** queue, int sample)
{
    if((*queue)->head->empty == 1)
    {
        (*queue)->head->elem = sample;
        (*queue)->head->empty = 0;
        (*queue)->tail = (*queue)->head;
    }
    else
    {
        Inode * new_node;
        new_node = (Inode *) malloc(sizeof(Inode));
        new_node->elem = sample;
        new_node->empty = 0;
        new_node->next = NULL;
        if((*queue)->tail != NULL)
            (*queue)->tail->next = new_node;
        else
            (*queue)->head->next = new_node;
        (*queue)->tail = new_node;
    }
}

void dequeue (Iqueue ** queue)
{
    if((*queue)->head->empty == 1)
        printf("The queue is alreay empty\n");
    else
    {
        Inode * trash;
        trash = (*queue)->head;
        (*queue)->head = (*queue)->head->next;
        free(trash);
    }
}

int len(Iqueue * queue)
{
    int queue_length;
    Inode * cursor;
    queue_length = 0;
    for(cursor = queue->head; cursor != NULL; cursor = cursor->next)
        queue_length++;
    return queue_length;
}

/*TESTES*/

int main ()
{
    Iqueue * queue1;
    queue1 = empty_queue_gen();
    enqueue(&queue1, 1);
    enqueue(&queue1, 2);
    enqueue(&queue1, 3);
    printf("%d\n", len(queue1));
    return 0;
}