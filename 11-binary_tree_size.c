#include "binary_trees.h"

/**
* binary_tree_size - calculate the size of binary tree
* @tree: pointer to binary_tree_t
*
* Return: size_t
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t rh = 0, lh = 0;

	if (tree == NULL)
		return (0);

	lh = binary_tree_size(tree->left);
	rh = binary_tree_size(tree->right);

	return (1 + rh + lh);
}
