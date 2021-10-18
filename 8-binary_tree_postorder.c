#include "binary_trees.h"

/**
 * binary_tree_postorder - postorder traversal
 * @tree: tree to traverse
 * @func: function to call for each node in tree
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree) && (func))
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);

	}
}
