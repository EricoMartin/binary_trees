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
	if (tree != NULL && (tree->left != NULL || tree->right != NULL))
	{
		int left_t, right_t, height;

		left_t = binary_tree_height(tree->left);
		right_t = binary_tree_height(tree->right);
		
		height = (left_t > right_t) ? (left_t) : (right_t);
		return (height + 1);
	}
	else
	{
		return (0);
	}
}
