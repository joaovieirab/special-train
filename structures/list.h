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

