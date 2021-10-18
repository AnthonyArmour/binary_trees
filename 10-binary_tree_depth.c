#include "binary_trees.h"

/**
 * binary_tree_depth - gets depth of binary tree node
 * @tree: tree to find height of
 * Return: node depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    int cnt = 0;

	if ((!tree) || (binary_tree_is_leaf(tree)))
		return (0);
	if (tree->left)
        cnt += 1;
    if (tree->right)
        cnt += 1;
    return (cnt);
}
