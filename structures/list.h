#ifndef LIST_H
#define LIST_H
#include"node.h"

/**
 * @brief Creates an empty node for a linked list.
 * 
 * @note By default, 'empty == 1' 
 * 
 * @return Pointer for the newly empty node, or NULL pointer if failure.
 */

Inode * empty_node_gen(void);

/**
 * @brief Alocates a node with the new element value and inserts
 *        at the last position of linked list.
 * 
 * @param Double Pointer to an Inode linked list.
 * @param Integer value for the element of the new node.
 */

void insert_last(Inode ** list, int sample);

/**
 * @brief Prints the elements, at sequence, of a linked list.
 * 
 * @param Pointer for a no empty linked list.
 * 
 * @note If the linked list is empty, it prints a warning message.
 */

void print_list(Inode * list);

/**
 * @brief Searchs for the min element in the linked list.
 * 
 * @param Pointer for a no empty linked list.
 * 
 * @note If the linked list is empty, prints an warning message and exit the program.
 *
 * @return The min element of the linked list.
 */

int min_search(Inode * list);

/**
 * @brief Searchs for the max element in the linked list.
 * 
 * @param Pointer for a no empty linked list.
 * 
 * @note If the linked list is empty, prints an warning message and exit the program.
 *
 * @return The max element of the linked list.
 */

int max_search(Inode * list);

/**
 * @brief Searchs the position of the 1st node with the specified element value.
 * 
 * @param Pointer for a linked list.
 * @param Integer searched value.
 * 
 * @note if the linked list is empty, returns 0.
 * 
 * @return The position of the first node with specified element value.
 * 
 */

int search(Inode * list, int value);

/**
 * @brief Removes the first node of linked list with the spcified integer value.
 * 
 * @param Double pointer for a linked list.
 * @param Integer value to be removed.
 * 
 * @note If the linked list is empty, prints an warning message and exit the program.
 */

void remove(Inode ** list, int trahs_elem_value);

/**
 * @brief Insert a new node with an integer specified value at a specified position.
 * 
 * @param Double pointer for a linked list
 * @param Integer value for a new node element
 * @param Integer value for the insert position
 * 
 */

void insert(Inode ** list, int new_elem_value, int position);

/**
 * @brief Insert a new node with specified integer value as 
 *        element in the first position of a linked list.
 * 
 * @param Double pointer for a linked list.
 * @param Integer value for a new node element.
 * 
 */

void insert_1st(Inode ** list, int sample);

/**
 * @brief Create a linked list with the elements, in order, of a integer vector.
 * 
 * @param Vector of integer elements.
 * @param Integer value for the vector length.
 * 
 * @note If the 'length <= 0' as input, prints an warning message and exit the program.
 * 
 * @return The new linked list with the vector elements.
 */

Inode * vec2list(int vec[], int length);

/**
 * @brief Create a vector of integer elements using a linked list.
 * 
 * @param Pointer for a linked list.
 * @param Integer value as the linked list length.
 * 
 * @note If the linked list is empty, prints an warning message and exit the program.
 * 
 * @return The new vector using the linked list.
 */

int * list2vec(Inode * list, int length);

/**
 * @brief Create a copy of a linked list.
 * 
 * @param Pointer for a linked list.
 * 
 * @note If the linked list is empty, prints an warning message and exit the program.
 * 
 * @return The copy of the linked list.
 */

Inode * copy(Inode * original_list);

/**
 * @brief Concatenate two linked lists.
 * 
 * @param Pointer for the first linked list.
 * @param Pointer for the second linked list.
 * 
 * @return The first linked list concatenated with the second one.
 */

void list_cat(Inode * list1, Inode * list2);

/**
 * @brief Count the number of nodes in a linked list.
 * 
 * @param Pointer for the linked list.
 * 
 * @return The number of nodes of the linked list.
 */

int len(Inode * list);

/**
 * @brief deletes from memory all nodes of the linked list.
 * 
 * @param Double pointer for the linked list.
 */

void free_list(Inode ** list);

#endif