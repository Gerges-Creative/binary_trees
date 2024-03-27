#include "binary_trees.h"

/**
 * binary_tree_is_perfect -	checks if a binary tree is perfect.
 * @tree:					pointer to the root node of the tree to check.
 * Return:					if tree is perfect: 1.
 *							if tree is NULL or imperfect: 0.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect = 1;
	int perfect_left;
	int perfect_right;

	if (!tree)
		return (0);

	if (tree->left)
	{
		if (tree->right)
		{
			/* if both child nodes exist */
			perfect_left = binary_tree_is_perfect(tree->left);
			perfect_right = binary_tree_is_perfect(tree->right);
			if (perfect_left != perfect_right)
				perfect = 0;
		}
		else
		{
			/* if left child exists and right child doesn't */
			perfect = 0;
		}
	}
	else if (tree->right)
		perfect = 0;	/* if left child doesn't exist and right child exists */
	return (perfect);
}
