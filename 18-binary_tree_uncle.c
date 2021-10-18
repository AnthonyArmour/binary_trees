#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of node
 * @node: node to find sibling of
 * Return: pointer to sibling node, else NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if ((!node) || (!node->parent))
		return (NULL);

	if ((!node->parent->left) || (!node->parent->right))
		return (NULL);

	if (node->parent->left->n == node->n)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle - finds uncle of node in tree
 * @node: node to find uncle of
 * Return: Uncle of node, else NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if ((!node) || (!node->parent))
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
