#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, and 0 otherwise. If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_height - function that measures the
 * height of a binary tree
 *
 * @tree: pointer to the root node of the tree
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_t, right_t, height;

	left_t = binary_tree_height(tree->left);
	right_t = binary_tree_height(tree->right);

	height = (left_t > right_t) ? (left_t) : (right_t);
	return (height + 1);
}

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
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
