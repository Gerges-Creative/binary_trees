#include "binary_trees.h"

/**
 * binary_tree_height -	measures the height of a binary tree.
 * @tree:				pointer to the root node of the tree to measure the height/
 * Return:				height of the tree.
 *						IF TREE IS NULL: 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t right_h = 0;
	size_t left_h = 0;

	if (!tree)
		return (0);

	/* recursively check left and right tree heights */
	if (tree->right)
	{
		right_h = binary_tree_height(tree->right);
		right_h++;
	}
	if (tree->left)
	{
		left_h = binary_tree_height(tree->left);
		left_h++;
	}

	/* return the largest number */
	if (left_h > right_h)
		height = left_h;
	else
		height = right_h;
	return (height);
}
