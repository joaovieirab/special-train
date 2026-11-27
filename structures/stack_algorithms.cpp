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


int main()
{
    Istack * stack1;
    stack1 = empty_stack_gen();
    printf("%d\n", stack1->top->empty);
    return 0;
}