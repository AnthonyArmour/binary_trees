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
		cnt_left = recurse_count(tree->left, count + 1);
	if (tree->right)
		cnt_right = recurse_count(tree->right, count + 1);
	if (binary_tree_is_leaf(tree))
		return (count);
	return (max(cnt_left, cnt_right));
}


/**
 * binary_tree_height - gets height of binary tree
 * @tree: tree to find height of
 * Return: tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if ((tree) && (binary_tree_is_leaf(tree) == 0))
		return (recurse_count(tree, 0));
	else
		return (0);
}

/**
 * binary_tree_balance - returns balance factor of tree
 * @tree: tree to find balance factor of
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree)
	{
		if (tree->left)
		{
			left += 1;
			left += binary_tree_height(tree->left);
		}
		if (tree->right)
		{
			right += 1;
			right += binary_tree_height(tree->right);
		}
		return (left-right);
	}
	return (0);
}
