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
 * binary_tree_leaves - Counts number of leaves in binary tree
 * @tree: tree to find height of
 * Return: tree size
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t cnt = 0;

	if (tree)
	{
        if (binary_tree_is_leaf(tree))
		    cnt += 1;
		if (tree->left)
			cnt += binary_tree_leaves(tree->left);
		if (tree->right)
			cnt += binary_tree_leaves(tree->right);
	}
	return (cnt);
}
