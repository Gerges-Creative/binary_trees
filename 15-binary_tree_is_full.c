#include "binary_trees.h"

/**
 * binary_tree_is_full - A function that checks if a binary tree is full.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is full otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		is_full = 1;
	else if (tree->right != NULL && tree->left != NULL)
		is_full = 1;
	else
	{
		is_full = 0;
		return (is_full);
	}

	if (tree->right != NULL && is_full == 1)
		is_full = binary_tree_is_full(tree->right);
	if (tree->left != NULL && is_full == 1)
		is_full = binary_tree_is_full(tree->left);

	return (is_full);
}
