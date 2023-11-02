#include "binary_trees.h"

/**
* binary_tree_height - calculates the height of binary tree
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
* binary_tree_same_height - check if height is same for both subtrees
* @tree: pointer to binary_tree_t
*
* Return: size_t
*/
size_t binary_tree_same_height(const binary_tree_t *tree)
{
	size_t rh = 0, lh = 0;

	if (tree == NULL)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (rh == lh)
		return (1);

	return (0);
}

/**
* binary_tree_zero_two_node - check if node has two or zero children
* @tree: pointer to binary_tree_t
*
* Return: size_t
*/
size_t binary_tree_zero_two_node(const binary_tree_t *tree)
{
	size_t rh = 0, lh = 0, yes = 0;

	if (tree == NULL)
		return (1);

	lh = binary_tree_zero_two_node(tree->left);
	rh = binary_tree_zero_two_node(tree->right);

	if ((tree->left && tree->right) || (!tree->left && !tree->right))
		yes = 1;

	return (yes *  lh * rh);
}

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: pointer to binary_tree_t
*
* Return: int
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t right = 1, left = 1, yes = 0, same = 0;

	if (tree == NULL)
		return (0);

	yes = binary_tree_zero_two_node(tree);
	same = binary_tree_same_height(tree);

	if (tree->right)
		right = binary_tree_is_perfect(tree->right);
	if (tree->left)
		left = binary_tree_is_perfect(tree->left);

	if (yes && same && left && right)
		return (1);

	return (0);
}
