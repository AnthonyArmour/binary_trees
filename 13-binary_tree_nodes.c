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

/**
 * binary_tree_nodes - counts nodes with at least 1 child
 * @tree: tree to search
 * Return: number of nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t cnt = 0;

	if (tree)
	{
		if ((tree->left) || (tree->right))
			cnt += 1;
		if (tree->left)
			cnt += binary_tree_nodes(tree->left);
		if (tree->right)
			cnt += binary_tree_nodes(tree->right);
	}
	return (cnt);
}
