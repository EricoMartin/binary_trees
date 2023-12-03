#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_node - A function that creates a binary tree node
 *
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 *
 * Return: a pointer to the new node,
 * 	or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
	
	binary_tree_t *node;
	
	if (*parent == NULL)
		return NULL;
	node = malloc(sizeof(*parent)* 2);

	node = createNode(value, parent);
	return *node;
}

binary_tree_t *createNode(int value, binary_tree_t *parent_data){
	binary_tree_t *nodeNew = new binary_tree_t();
	nodeNew->n = value;
	nodeNew->parent = parent_data;
	nodeNew->left = nodeNew->right = NULL;
}
