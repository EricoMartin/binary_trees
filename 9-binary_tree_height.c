#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the
 * height of a binary tree
 *
 * @tree: pointer to the root node of the tree
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		int left, right, height;

		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		
		height = (left > right) ? left + 1 : right + 1;
		return (height);
	}
	else
	{
		return (0);
	}
}
