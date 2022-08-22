#include "binary_trees.h"

/**
 * binary_tree_is_full - checks whether binary tree is full
 * @tree: the tree
 * Return: 0 if not full, 1 if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	/* node is a leaf */
	if (!tree->left && !tree->right)
		return (1);
	/* for a tree to be full, it's left and right subtrees must be full */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
