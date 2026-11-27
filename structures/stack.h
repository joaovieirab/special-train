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

/**
 * @brief Insert a new node with the specified integer element at th top of stack.
 * 
 * @param stack double pointer for a stack using a linked list of integer elements.
 * @param new_elem integer value for a new node element.
 * 
 * @note If the queue is empty, it prints a warning message. 
 */

void push(Istack ** stack, int new_elem);

#endif