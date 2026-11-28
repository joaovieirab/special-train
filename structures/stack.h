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
 * @note If the stack is empty, it prints a warning message. 
 */

void push(Istack ** stack, int new_elem);

/**
 * @brief Print the stack elements, in order. 
 * 
 * @note If the stack is empty, it prints a warning message. 
 */

void print_stack(Istack * stack);

/**
 * @return the integer element of the stack top node.
 * 
 * @note If the stack is empty, prints a warning message anda exit the program.
 */

int top(Istack * stack);

/**
 * @brief Remove the top node of the stack.
 * 
 * @param stack double pointer for a stack using a linked list of integer elements.
 * 
 * @note If the stack is empty, it prints a warning message.
 */

void pop(Istack ** stack);

/**
 * @brief Counts the number of nodes of stack.
 * 
 * @param stack pointer for a stack implemented using a linked list of integer elements.
 * 
 * @return the number of nodes.
 */

int len(Istack * stack);
#endif