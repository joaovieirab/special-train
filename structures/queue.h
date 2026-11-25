#ifndef QUEUE_H
#define QUEUE_H

/**
 * @brief Node data structure for (Inode) for a single linked list of integers.
 * 
 * @note By default, 'empty = 1' indicates an empty node, and 'empty = 0' indicates a no empty node.
 */

struct int_node
{
    int elem;                       /** - Integer value stored in the node. */
    int empty;                      /** -Status flag: 1 if empty, 0 othercase */
    struct int_node * next;         /** - Pointer for the next node in the linked list. */
};

typedef struct int_node Inode; 

/**
 * @brief Linked list data structure for a single queue of integers.
 */

struct int_queue
{
    Inode * head; /** Pointer for head node of the queue structure.*/
    Inode * tail; /** Pointer for tail node of the queue structure.*/
};

typedef struct int_queue Iqueue;

/**
 * @brief Creates an empty queue using a linked list.
 * 
 * @note By default, 'empty == 1'
 * @note The pointer for next node of 'head' node is the 'tail' node, which by default is NULL pointer
 * 
 * @return Pointer for the newly empty queue.
 */

Iqueue * empty_queue_gen(void);

/**
 * @brief Prints the elements of a queue.
 * 
 * @param queue pointer for a queue of integer elements
 * 
 * @note If the queue is empty, it prints a warning message.
 */

void print(Iqueue * queue);

#endif