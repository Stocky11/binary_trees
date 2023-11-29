#include "binary_trees.h"

/**
 * binary_tree_insert_left - Adds left child to roote
 * @parent: Pointer to the root of the new node to create
 * @value: The value to put in the new node
 * Return: Pointer to the new node, or NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}

	parent->left = node;

	return (node);
}
