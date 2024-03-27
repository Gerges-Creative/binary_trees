#include "binary_trees.h"

/**
 * binary_tree_is_perfect -	checks if a binary tree is perfect.
 * @tree:					pointer to the root node of the tree to check.
 * Return:					if tree is perfect: 1.
 *							if tree is NULL or imperfect: 0.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect = 0;
	int perfect_left = 1;
	int perfect_right = 1;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		/* if both child nodes exist */
		if (binary_tree_is_full(tree))
			if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
				perfect = 1;	/* if tree is full AND left and right heights are the same */

		/* make sure every child is perfect */
		perfect_left = binary_tree_is_perfect(tree->left);
		perfect_right = binary_tree_is_perfect(tree->right);
		if (perfect_left != 1 || perfect_right != 1)
			perfect = 0;
	}
	else if (!tree->left && !tree->right)
		perfect = 1;			/* if it's a single node */
	else
		perfect = 0;

	return (perfect);
}

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
