#ifndef LIST_H
#define LIST_H

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

#endif

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