#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses tree in a post order fashion
 * @tree: tree to traverse
 * @func: function to call for each node
 *
 * postorder - call the parent after calling the others in order(ascending)
 * ie left, right then parent since left < parent < right
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
