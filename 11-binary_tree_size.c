#include "binary_trees.h"

/**
 * binary_tree_size - gets size of binary tree
 * @tree: tree to find height of
 * Return: tree size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t cnt = 0;

	if (tree)
	{
		cnt += 1;
		if (tree->left)
			cnt += binary_tree_size(tree->left);
		if (tree->right)
			cnt += binary_tree_size(tree->right);
	}
	return (cnt);
}
