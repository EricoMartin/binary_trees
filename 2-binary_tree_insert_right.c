#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the
 * right-child of another node
 *
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent,
		int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);

	right_node = binary_tree_node(parent, value);

	if (right_node == NULL)
		return (NULL);

	right_node->right = parent->right;

	if (right_node->right != NULL)
	{
		right_node->right->parent = right_node;
	}

	parent->right = right_node;
	return (parent->right);
}
