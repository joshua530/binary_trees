#include "binary_trees.h"

/**
 * binary_tree_depth - measures node depth
 * @tree: node whose depth is to be measured
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *iter = (binary_tree_t *)tree;
	size_t height = 0;

	if (!iter)
		return (0);

	while (iter->parent)
	{
		height += 1;
		iter = iter->parent;
	}

	return (height);
}
