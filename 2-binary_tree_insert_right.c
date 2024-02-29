#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 * 
 * return: a pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value) {
    parent->right = binary_tree_node(parent, value);
    return parent->right;
}