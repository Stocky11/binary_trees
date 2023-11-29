#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: If tree is NULL, the function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (tree == NULL)
		return (0);
	left_nodes = binary_tree_size(tree->left);
	right_nodes = binary_tree_size(tree->right);
	return (left_nodes + right_nodes + 1);
}
