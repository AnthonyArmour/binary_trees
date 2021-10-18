#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left child
 * @parent: parent node
 * @value: value to put in new node
 * Return: pointer to new node, else NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (node)
	{
		node->left = parent->left;
		if (node->left)
			node->left->parent = node;
		parent->left = node;
	}
	else
		return (NULL);

	return (node);
}
