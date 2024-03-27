#include "binary_trees.h"

/**
 * binary_tree_nodes -	counts the nodes with at least 1 child in a binary tree.
 * @tree:				pointer to the root node of the tree to count the number of nodes.
 * Return:				number of nodes with at least 1 child.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num = 0;
	size_t num_left = 0;
	size_t num_right = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		num++;

	/* check left and right trees */
	if (tree->left)
	{
		num_left = binary_tree_nodes(tree->left);
	}
	if (tree->right)
	{
		num_right = binary_tree_nodes(tree->right);
	}

	num += num_left + num_right;
	return (num);
}
