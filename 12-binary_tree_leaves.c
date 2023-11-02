#include "binary_trees.h"

/**
* binary_tree_leaves - calculate the leaves of binary tree
* @tree: pointer to binary_tree_t
*
* Return: size_t
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t rh = 0, lh = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	lh = binary_tree_leaves(tree->left);
	rh = binary_tree_leaves(tree->right);

	return (rh + lh);
}
