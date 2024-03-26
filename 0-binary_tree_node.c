#include "binary_trees.h"

/**
 * binary_tree_node -	creates a binary tree node.
 * @parent:				parent of the node.
 * @value:				data to be saved in the node.
 * Return:				pointer to created node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/**
	 * allocating memorey for the created node
	 * and pointing to it using "new_node"
	 */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* adding data to the node */
	if (parent)
		new_node->parent = parent;
	else
		new_node->parent = NULL;

	new_node->left = NULL;
	new_node->right = NULL;

	if (value)
		new_node->n = value;
	else
		new_node->n = 0;

	return (new_node);
}
