#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 * @node: pointer to thew node to check
 * Return: 1 if leaf, else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node->parent)
		return (1);
	else
		return (0);
}
