#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a tree
 * @tree: pointer to the tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = help_scale(tree->left);
	right = help_scale(tree->right);

	return (left - right);
}

/**
 * help_scale - helper function to find longest path
 * @tree: pointer to root
 * Return: biggest side
 */

int help_scale(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);
	left = help_scale(tree->left);
	right = help_scale(tree->right);

	return (1 + (left > right ? left : right));
}
