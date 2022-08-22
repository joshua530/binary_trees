#include "binary_trees.h"

/**
 * print_level - prints values at all levels of given tree
 * @tree: the tree
 * @func: function to be executed for each node
 * @level: level of printing
 */
void print_level(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(
			tree->left, func, level - 1);
		print_level(
			tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder - prints level order
 * @tree: node to be printed
 * @func: function to execute for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, count;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree) + 1;
	for (count = 1; count <= height; count++)
		print_level(tree, func, count);
}

/**
 * binary_tree_height - calculates height of binary tree
 * @tree: the tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* empty node or leaf node */
	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}
