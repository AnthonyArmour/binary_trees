#include "binary_trees.h"

/**
 * binary_tree_node - creates binary tree node
 * @parent: parent node
 * @value: value to put in new node
 * Return: pointer to new node, else NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node)
	{
		node->parent = parent;
		node->n = value;
		node->left = NULL;
		node->right = NULL;
	}

	return (node);
}