#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts child node tp the left
* of another node
* @parent: binary_tree_t
* @value: int
*
* Return: binary_tree_t *
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->left != NULL)
		parent->left = node;
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
	}

	return (node);
}
