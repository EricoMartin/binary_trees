#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: number of leaves
 *	or If tree is NULL, return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count;

	count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		count += 1;
		return (count);
	}
	else
	{
		count += binary_tree_leaves(tree->left);
		count += binary_tree_leaves(tree->right);
	}

	return (count);
}
