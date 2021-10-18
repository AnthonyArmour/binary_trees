#include "binary_trees.h"

/**
 * binary_tree_preorder - preorder traversal
 * @tree: tree to traverse
 * @func: function to call for each node in tree
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree) && (func))
	{
		func(tree->n);
		if (tree->left)
			binary_tree_preorder(tree->left, func);
		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
