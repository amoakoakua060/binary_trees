#include "binary_trees.h"

/**
* binary_tree_node - create node in binary tree
* @parent: binary_tree_t
* @value: int
*
* Return: binary_tree_t *
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->left = NULL;
	node->right = NULL;
	node->n = value;
	node->parent = parent;

	return (node);
}
