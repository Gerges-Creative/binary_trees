#include "binary_trees.h"

/**
 * binary_tree_leaves - A function that counts the leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count the number of leaves.
 *
 * Return: Number of leaves or 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->right != NULL)
		leaves += binary_tree_leaves(tree->right);
	if (tree->left != NULL)
		leaves += binary_tree_leaves(tree->left);

	if (tree->right == NULL && tree->left == NULL)
		leaves++;

	return (leaves);
}
