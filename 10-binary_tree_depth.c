#include "binary_trees.h"

/**
 * binary_tree_depth - gets depth of binary tree node
 * @tree: tree to find height of
 * Return: node depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    int cnt = 0;

	while (tree->parent)
    {
        tree = tree->parent;
        cnt += 1;
    }
    return (cnt);
}
