#include "binary_trees.h"

/**
 * binary_tree_balance - calculates balance factor of a binary tree
 *
 * balance factor = height of left subtree - height of right subtree
 *
 * @tree: the tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (height(tree->left) - height(tree->right));
}

/**
 * height - finds height of a node
 * @node: the node
 * Return: height of the node
 */
int height(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (
		1 + MAX(height(node->left), height(node->right)));
}
