#ifndef STACK_H
#define STACK_H
#include"node.h"

typedef struct int_node Inode; 

/**
 * @brief Linked list data structure for a single stack of integers.
 */

struct int_stack
{
    Inode * top;
};

typedef struct int_stack Istack;



#endif