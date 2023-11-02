#include "binary_trees.h"

/**
* binary_tree_postorder - traverse binary tree
* using post-order traversal
* @tree: popostter to binary_tree_t
* @func: popostter to function
*
*/
void binary_tree_postorder(
	const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
