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
 * recurse_count - get tree height recursivley
 * @tree: pointer to tree to count height of
 * @count: current direction count
 * Return: count
 */

size_t recurse_count(const binary_tree_t *tree, size_t count)
{
	size_t cnt_left = 0;
	size_t cnt_right = 0;

	if (tree->left)
		cnt_left += recurse_count(tree->left, count+1);
	if (tree->right)
		cnt_left += recurse_count(tree->right, count+1);
	if (binary_tree_is_leaf(tree))
		return (1);
	return (max(cnt_left, cnt_right));
}


/**
 * binary_tree_postorder - postorder traversal
 * @tree: tree to traverse
 * @func: function to call for each node in tree
 * Return: void
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (binary_tree_is_leaf(tree) == 0)
		return (recurse_count(tree, 0));
	else
		return (0);
}
