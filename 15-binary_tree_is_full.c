#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: tree to search
 * Return: 1 if full, else 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 1;

	if (!tree)
		return (0);

	if ((tree->left) && (!tree->right))
		return (0);
	else if ((!tree->left) && (tree->right))
		return (0);
	else if ((tree->right) && (tree->left))
	{
		full = binary_tree_is_full(tree->left);
		if (full == 0)
			return (0);
		full = binary_tree_is_full(tree->right);
		if (full == 0)
			return (0);
	}
	return (1);
}
