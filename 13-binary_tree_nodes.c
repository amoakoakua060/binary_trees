#include "binary_trees.h"

/**
* binary_tree_nodes - get number of nodes with at
* least 1 child in binary tree
* @tree: pointer to binary_tree_t
*
* Return: size_t
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t rh = 0, lh = 0, extra = 0;

	if (tree == NULL)
		return (0);

	if (tree->right || tree->left)
		extra = 1;

	lh = binary_tree_nodes(tree->left);
	rh = binary_tree_nodes(tree->right);

	return (rh + lh + extra);
}
