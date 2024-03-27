#include "binary_trees.h"

/**
 * binary_tree_balance -	measures the balance factor of a binary tree.
 * @tree:					pointer to the root node of the tree
 *							to measure the balance factor.
 * Return:					the balance factor.
 *							if tree is NULL: 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	size_t height_left = 0;
	size_t height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		/* get height of left child tree*/
		height_left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		/* get height of right child tree */
		height_right = binary_tree_height(tree->right) + 1;

	/**
	 * return the balance factor:
	 * diff between height of left and right child trees
	 */
	return (balance = height_left - height_right);
}

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
