#include "binary_trees.h"

/**
 * binary_tree_delete - inserts node as right child
 * @tree: pointer to root node of tree to delete
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left)
			binary_tree_delete(tree->left);
		if (tree->right)
			binary_tree_delete(tree->right);
		free(tree);
	}
}
