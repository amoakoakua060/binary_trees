#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks if binary tree node
* is a leaf node
* @node: pointer to binary_tree_t
*
* Return: int (0 or 1)
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left || node->right)
		return (0);

	return (1);
}
