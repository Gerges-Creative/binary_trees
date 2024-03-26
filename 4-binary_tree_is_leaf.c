#include "binary_trees.h"

/**
 * binary_tree_is_leaf -	checks if a node is a leaf.
 * @node:					pointer to the node to check.
 * Return:					IF NODE IS LEAF:			 1.
 *							IF NODE IS NULL OR NOT LEAF: 0.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
