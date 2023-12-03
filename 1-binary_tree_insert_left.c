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
	binary_tree_t *left_node, new_node;

	left_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL || left_node == NULL || new_node == NULL)
		return (NULL);

	left_node->n = value;
	left_node->parent = parent;
	left_node->left = NULL;
	left_node->right = NULL;

	if (parent->left != NULL)
	{
		binary_tree_t *temp = parent->left

		parent->left = left_node;
		left_node->left = temp;
		return (left_node);
	}

	parent->left = left_node;
	free(left_node);
	return (parent->left);
}
