#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child
 * @parent: parent node
 * @value: value to put in new node
 * Return: pointer to new node, else NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (node)
	{
		node->right = parent->right;
		if (node->right)
			node->right->parent = node;
		parent->right = node;
	}
	else
		return (NULL);

	return (node);
}
