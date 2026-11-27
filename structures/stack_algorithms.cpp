#include"stack.h"
#include<stdlib.h>
#include<stdio.h>

Istack * empty_stack_gen()
{
    Istack * new_stack;
    new_stack = (Istack *) malloc(sizeof(Istack));
    new_stack->top = (Inode *) malloc(sizeof(Inode));
    new_stack->top->empty = 1;
    new_stack->top->next = NULL;
    return new_stack;
}

void push(Istack ** stack, int new_elem)
{
    Inode * new_node;
    new_node = (Inode *) malloc(sizeof(Inode));
    new_node->elem = new_elem;
    if((*stack)->top->empty == 1)
    {
        new_node->next = NULL;
        (*stack)->top = new_node;
        (*stack)->top->empty = 0;
    }
    else
    {
        new_node->next = (*stack)->top;
        (*stack)->top = new_node;
    }
}

void print_stack(Istack * stack)
{
    if(stack->top->empty == 1)
        printf("The stack is empty");
    Inode * cursor;
    for(cursor = stack->top; cursor != NULL; cursor = cursor->next)
        printf("%d\n", cursor->elem);
}

int main()
{
    Istack * stack1;
    stack1 = empty_stack_gen();
    push(&stack1, 1);
    push(&stack1, 2);
    print_stack(stack1);
    return 0;
}