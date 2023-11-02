#include "binary_trees.h"

/**
* binary_tree_depth - calculates the depth of binary tree
* @tree: pointer to binary_tree_t
*
* Return: size_t
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parents_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		parents_count = binary_tree_depth(tree->parent);
	else
		return (0);

	return (parents_count + 1);
}
