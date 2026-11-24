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
#endif