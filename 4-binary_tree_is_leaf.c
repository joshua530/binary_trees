#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks whether node is leaf
 *
 * @node: the node to check
 *
 * Return: 1 if leaf, 0 if not leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (!(node->left) && !(node->right));
}
