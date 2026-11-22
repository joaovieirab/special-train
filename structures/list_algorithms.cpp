#include"list.h"
#include<stdio.h>
#include<stdlib.h>

Inode * empty_node_gen()
{
    Inode * new_node = (Inode *) malloc(sizeof(Inode));
    new_node->empty = 1;
    new_node->next =  NULL;
    return new_node;
}

void insert_last(Inode ** list, int sample)
{
    if((*list)->empty == 1)
        (*list)->elem = sample;
    else
    {
        Inode * new_node = (Inode *) malloc(sizeof(Inode));
        new_node->elem = sample;
        new_node->next = NULL;
        Inode * cursor;
        while(cursor->next != NULL)
            cursor = cursor->next;
        cursor->next = new_node;
    }
}

void print_list(Inode * list)
{
    if(list->empty == 1)
        printf("The list is empty!\n");
    else
    {
        Inode * cursor;
        for(cursor = list; cursor != NULL; cursor = cursor->next)
            printf("%d\n", cursor->elem);
    }
}

int min_search(Inode * list)
{
    if(list->empty == 1)
    {
        printf("The list is empty!\n");
        exit(-1);
    }
    else
    {
        Inode * cursor;
        int min;
        min = list->elem;
        for(cursor = list; cursor->next != NULL; cursor = cursor->next)
            if(cursor->elem < min)
                min = cursor->elem;
        return min;
    }
}

int max_search(Inode * list)
{
    if(list->empty == 1)
    {
        printf("The list is empty!\n");
        exit(-1);
    }
    else
    {
        Inode * cursor;
        int max;
        max = list->elem;
        for(cursor = list; cursor->next != NULL; cursor = cursor->next)
            if(cursor->elem > max)
                max = cursor->elem;
        return max;
    }
}

int search(Inode * list, int value)
{
    if(list->empty == 1)
        return 0;
    else
    {
        int position;
        position = 1;
        Inode * cursor;
        cursor = list;
        while(cursor != NULL && cursor->elem != value)
        {
            cursor = cursor->next;
            position++;
        }
        if(cursor == NULL)
            return 0;
        else
            return position;
    }
}

void remove(Inode ** list, int trash_elem_value)
{
    if((*list)->empty == 1)
    {
        printf("The list is empty!\n");
        exit(-1);
    }
    Inode * cursor, * trash;
    cursor = (*list);
    trash = (*list)->next;
    while(trash != NULL && trash->elem != trash_elem_value)
    {
        cursor = trash;
        trash = trash->next;
    }
    if (trash != NULL)
    {
        cursor->next = trash->next;
        free(trash);
    }
}

void insert(Inode ** list, int new_elem_value, int position)
{
    Inode * new_node;
    new_node = (Inode *) malloc(sizeof(Inode));
    new_node->elem = new_elem_value;
    int i;
    i = 0;
    Inode * cursor;
    cursor = (*list);
    while (i < position - 1)
    {
        cursor = cursor->next;
        i++;
    }
    new_node->next = cursor->next;
    cursor->next = new_node;
}

void inser_1st(Inode ** list, int sample)
{   
    Inode * new_node;
    new_node = (Inode *) malloc(sizeof(Inode));
    new_node->elem = sample;
    new_node->next = (*list);
    (*list) = new_node;
}

/*Vetor para lista*/

Inode * vec2list(int vec[], int length)
{
    /*Verificação se vetor vazio*/
    if(length <= 0)
    {
        printf("The vector is empty or input length is invalid\n");
        exit(-1);
    }
    Inode * head;
    head = (Inode *) malloc(sizeof(Inode));
    head->elem = vec[0];
    if(length == 1) // Se vetor de um único elemento...
        head->next = NULL;
    else
    {
        Inode * new_node, * cursor;
        cursor = head;
        int i;
        for(i = 1; i < length; i++)
        {
            new_node = (Inode *) malloc(sizeof(Inode));
            new_node->elem = vec[i];
            cursor->next = new_node;
            cursor = new_node;
        }
        cursor->next = NULL;
    }
    return head;
}

/*Lista para vetor*/

int * list2vec(Inode * list, int length)
{
    /*Verificação se vazio*/

    if(list->empty == 1)
    {
        printf("The list is empty!\n");
        exit(-1);
    }
    else
    {
        int * vec;
        vec = (int *) malloc((length + 1) * sizeof(int));
        Inode * cursor;
        int i;
        i = 0;
        for(cursor = list; cursor != NULL; cursor = cursor->next)
        {
            vec[i] = cursor->elem;
            i++;
        }
        return vec;
    }
}

/*Copia de uma lista*/

Inode * copy(Inode * original_list)
{
    /*Verificação se vazio*/
    if(original_list->empty == 1)
    {
        printf("The list is empty\n");
        exit(-1);
    }
    Inode * new_list;
    new_list = (Inode *) malloc(sizeof(Inode));
    new_list->elem = original_list->elem;
    if(original_list->next == NULL) // Se for uma lista de elemento único...
        new_list->next = NULL;
    else
    {
        Inode * cursor, * new_node;
        new_node = new_list;
        for(cursor = original_list->next; cursor != NULL; cursor = cursor->next)
        {
            new_node->next = (Inode *) malloc(sizeof(Inode));
            new_node->next->elem = cursor->elem;
            new_node = new_node->next;
        }
    }
    return new_list;
}

/*Concatenação de listas*/

void list_cat(Inode * list1, Inode * list2)
{
    Inode * cursor;
    cursor = list1;
    while(cursor->next != NULL)
        cursor = cursor->next;
    cursor->next = list2;
}

/*Tamanho da lista*/

int len(Inode * list)
{
    int length;
    length = 0;
    Inode * cursor;
    for(cursor = list; cursor != NULL; cursor = cursor->next)
        length++;
    return length + 1;
}

/*Liberação de todas as células da lista*/

void free_list(Inode ** list)
{
    Inode * cursor;
    cursor = (*list);
    while(cursor != NULL)
    {
        printf("entrou\n");
        Inode * trash;
        trash = cursor;
        cursor = cursor->next;
        free(trash);
        printf("deu bom\n");
    }
    (*list) =  NULL;
}

/*TESTES*/

int main()
{
    Inode * node1;
    int vec[] = {1, 2, 3, 4, 5};
    node1 = vec2list(vec, 5);
    insert(&node1, 6, 4);
    remove(&node1, 6);
    print_list(node1);
    return 0;
}