#include "binary_trees.h"

/**
 * binary_tree_uncle - A function that finds the uncle of a node
 * @node: a pointer to the node
 * Return: NULL if not found for pointer to uncle if found
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandfather, *father;

	if (node == NULL)
		return (NULL);
	if (!node->parent || !node->parent->parent)
		return (NULL);

	grandfather = node->parent->parent;
	father = node->parent;

	if (grandfather->left && grandfather->right)
	{
		if (grandfather->left == father)
			return (grandfather->right);
		else if (grandfather->right == father)
			return (grandfather->left);
	}
	return (NULL);
}
