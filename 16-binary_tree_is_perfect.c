#include "binary_trees.h"

/**
 * get_depth - find depth of tree
 * @tree: Tree to be measured
 * Return: depth
 */

int get_depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree)
	{
		d++;
		tree = tree->left;
	}

	return (d);
}

/**
 * perfection - recursive function checking perfection of tree
 * @tree: tree being checked
 * @d: depth
 * @level: level in search
 * Return: 1 if perfect, else 0
 */

int perfection(const binary_tree_t *tree, int d, int level)
{
	if (!tree)
		return (1);

	if ((!tree->left) && (!tree->right))
		return (d == level + 1);

	if ((!tree->left) || (!tree->right))
		return (0);

	return (perfection(tree->left, d, level + 1) &&
					   perfection(tree->right, d, level + 1));
}


/**
 * binary_tree_is_perfect - checks for perfect binary tree
 * @tree: Tree to check for perfection
 * Return: 1 if perfect, else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (!tree)
		return (0);

	d = get_depth(tree);
	return (perfection(tree, d, 0));
	}
