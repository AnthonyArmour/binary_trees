#include "binary_trees.h"

/**
 * binary_tree_size - gets size of binary tree
 * @tree: tree to find height of
 * Return: tree size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t cnt = 0;

	if (tree)
	{
		cnt += 1;
		if (tree->left)
			cnt += binary_tree_size(tree->left);
		if (tree->right)
			cnt += binary_tree_size(tree->right);
	}
	return (cnt);
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
	if ((!tree->left) && (!tree->right))
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
	if ((tree) && (tree->right || tree->left))
		return (recurse_count(tree, 0));
	else
		return (0);
}

/**
 * exp_growth - finds expected exponential size from height
 * @height: height of tree
 * Return: expected size of full tree of spec height
 */
size_t exp_growth(size_t height)
{
    size_t x, exp = 1, size = 1;

    for (x = 0; x < height; x++)
    {
        exp *= 2;
        size += exp;
    }
    return size;
}

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: tree to search
 * Return: 1 if full, else 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
    size_t expected_size, true_size;

    true_size = binary_tree_size(tree);
    expected_size = exp_growth(binary_tree_height(tree));

    if (true_size != expected_size)
        return (0);
    return (1);
}
