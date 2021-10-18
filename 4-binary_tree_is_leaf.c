#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: pointer to thew node to check
 * Return: 1 if root, else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if ((!node) || node->right || node->left)
		return (0);
	else
		return (1);
}
