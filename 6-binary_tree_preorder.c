#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses tree in a pre order fashion
 * @tree: tree to traverse
 * @func: function to call for each node
 *
 * preorder - call the root node before calling the others in order(ascending)
 * ie parent, left then right since left < right
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
