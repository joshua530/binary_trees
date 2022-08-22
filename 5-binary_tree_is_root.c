#include "binary_trees.h"

/**
 * binary_tree_is_root - checks whether a node is the root node
 *
 * @node: the node to check
 *
 * Return: 1 if root, 0 if not root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (!(node->parent));
}
