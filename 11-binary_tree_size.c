#include "binary_trees.h"

/**
 * binary_tree_size -	measures the size of a binary tree.
 * @tree:				pointer to the root node of the tree to measure the size.
 * Return:				size of the tree.
 *						if NULL or empty : return 0.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	size_t size_left = 0;
	size_t size_right = 0;

	if (!tree)
		return (0);

	/* count root node */
	size++;
	/* check size of left and right child trees */
	if (tree->right)
		size_right = binary_tree_size(tree->right);
	if (tree->left)
		size_left = binary_tree_size(tree->left);

	/* sum of right and left trees and the root node */
	size += size_right + size_left;
	return (size);
}
