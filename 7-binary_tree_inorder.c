#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses tree in an in order fashion
 * @tree: tree to traverse
 * @func: function to call for each node
 *
 * inorder - call the nodes in order(ascending) left, parent, right
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
