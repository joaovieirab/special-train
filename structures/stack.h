#ifndef STACK_H
#define STACK_H

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

struct int_stack
{
    Inode * top;
};

typedef struct int_stack Istack;



#endif