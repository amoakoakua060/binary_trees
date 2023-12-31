#include "binary_trees.h"

/**
* binary_tree_inorder - traverses binary tree
* using in-order traversal
* @tree: pointer to binary_tree_t
* @func: pointer to function
*
*/
void binary_tree_inorder(
	const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
