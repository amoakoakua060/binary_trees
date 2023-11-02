#include "binary_trees.h"

/**
* binary_tree_is_root - checks if node is
* binary tree root
* @node: pointer to binary_tree_t
*
* Return: int
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent)
		return (0);

	return (1);
}
