#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_is_perfect - checks whether a binary tree is perfect
 * @tree: the tree
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tree_height, num_nodes, perfect_node_num;

	if (!tree)
		return (0);

	tree_height = height(tree);
	num_nodes = binary_tree_size(tree);
	perfect_node_num = perfect_tree_nodes(tree_height);

	return (num_nodes == perfect_node_num);
}

/**
 * height - finds height of a tree
 * @tree: the tree
 * Return: height of the tree
 */
int height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (
		1 + MAX(height(tree->left), height(tree->right)));
}

/**
 * binary_tree_size - calculates number of nodes in a binary tree
 * @tree: the tree
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * perfect_tree_nodes - finds number of nodes in perfect tree
 * @height: height of tree
 * Return: number of nodes
 */
int perfect_tree_nodes(int height)
{
	return (to_power(2, height) - 1);
}

/**
 * to_power - calculates power
 * @a: base
 * @b: exponent
 * Return: a^b
 */
int to_power(int a, int b)
{
	if (b == 0)
		return (1);
	if (a == 1)
		return (b);
	return (a * to_power(a, b - 1));
}
