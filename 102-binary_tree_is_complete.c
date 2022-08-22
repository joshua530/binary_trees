#include "binary_trees.h"

/**
 * is_complete - binary_tree_is_complete helper function
 * @index: index of root node
 * @tree: current node
 * @number_nodes: total nodes in tree
 * Return: 1 if complete else, 0
 */
int is_complete(const binary_tree_t *tree, size_t index, size_t number_nodes)
{
	if (!tree)
		return (1);

	if (index >= number_nodes)
		return (0);
	return (
		is_complete(tree->left, (2 * index + 1), number_nodes) &&
		is_complete(tree->right, (2 * index + 2), number_nodes));
}

/**
 * _nodes - counts nodes with at least one child
 * @tree: tree we're traversing
 * Return: number of nodes with at least one child
 */
size_t _nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + _nodes(tree->left) + _nodes(tree->right));
}

/**
 * binary_tree_is_complete - checks if binary tree is complete
 * @tree: pointer to node of tree to check
 * Return: 1 if complete or 0 if not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_complete(tree, 0, _nodes(tree)));
}
