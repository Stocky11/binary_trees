#include "binary_trees.h"

/**
 * binary_tree_nodes - A function that conts the node of a tree
 * @tree: pointer to the root of the tree
 * Return: If tree is NULL, the function must return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (left + right + 1);
}
