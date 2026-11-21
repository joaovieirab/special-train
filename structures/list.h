/*Estrutura de dados tipo nó                                                */
/*--------------------------------------------------------------------------*/
/*-Atributos:                                                               */
/*  *elem: Dado armazenado pelo nó = tipo inteiro                           */
/*  *empty: Flag para apontar se o nó está ou não vazio = tipo inteiro      */
/*  *int_node: Ponteiro para o próximo nó = tipo ponteiro de inteiro        */
/*--------------------------------------------------------------------------*/
/*-Restrições:                                                              */
/* *Por padrão, empty = 1 para nós vazios e empty = 0 para nós não vazios   */
/*--------------------------------------------------------------------------*/

struct int_node
{
    int elem;
    int empty;
    struct int_node * next;
};

typedef struct int_node Inode;
