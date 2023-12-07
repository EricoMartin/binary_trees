#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a
 * binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: balance factor or if tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	balance  = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (balance);
	}
	else if (tree->left == NULL || tree->right == NULL)
	{
		return (balance - 1);
	}
	else if (tree->left != NULL && tree->right != NULL)
	{
		return (balance + 2);
	}

	balance += binary_tree_balance(tree->left);
	balance += binary_tree_balance(tree->right);
	return (balance);
}
