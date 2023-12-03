#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left - A unction that inserts a
 * node as the left-child of another node
 *
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node,
 *	or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent,
		int value)
{
	binary_tree_t *left_node;


	if (parent == NULL)
		return (NULL);

	left_node = binary_tree_node(parent, value);

	if (left_node == NULL)
		return (NULL);

	left_node->left = parent->left;
	if (left_node->left != NULL)
	{

		left_node->left->parent = left_node;
	}
	parent->left = left_node;
	return (left_node);
}
