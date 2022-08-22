#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds common ancestor of two nodes
 * @first: first node
 * @second: second node
 * Return: ancestor node
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *left, *right;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return (first->parent);

	left = binary_trees_ancestor(first->parent, second);
	right = binary_trees_ancestor(second->parent, first);

	if (binary_tree_depth(first) > binary_tree_depth(second))
		return (left);
	else if (binary_tree_depth(second) > binary_tree_depth(first))
		return (right);
	return (binary_trees_ancestor(first->parent, second->parent));
}

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
