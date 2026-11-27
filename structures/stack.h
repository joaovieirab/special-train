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

/**
 * @brief Creates an empty stack using a linked list.
 * 
 * @note By default, 'empty == 1'
 * 
 * @return Pointer for the newly empty stack.
 */

Istack * empty_stack_gen(void);

#endif