#include "binary_trees.h"

/**
 * binary_tree_sibling -	finds the sibling of a node.
 * @node:					pointer to the node to find its sibling.
 * Return:					pointer to sibling node.
 *							if node or parent is NULL, or no sibling: NULL.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);

	if (node->parent->left == node)
	{
		if (node->parent->right)
			sibling = node->parent->right;
		else
			return (NULL);
	}
	else if (node->parent->right == node)
	{
		if (node->parent->left)
			sibling = node->parent->left;
		else
			return (NULL);
	}

	return (sibling);
}
