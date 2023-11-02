#include "binary_trees.h"

/**
* binary_tree_height - calculate the height of binary tree
* @tree: pointer to binary_tree_t
*
* Return: size_t
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rh = 0, lh = 0, extra = 0;

	if (tree == NULL)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (tree->left || tree->right)
		extra = 1;

	if (rh >= lh)
		return (extra + rh);
	else
		return (extra + lh);
}

/**
* binary_tree_balance - calculate the balance factor of a binary tree
* @tree: pointer to binary_tree_t
*
* Return: int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t rh = 0, lh = 0;

	if (tree == NULL)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (tree->left)
		lh++;
	if (tree->right)
		rh++;

	return ((int) (lh - rh));
}
