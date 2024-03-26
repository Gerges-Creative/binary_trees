#include "binary_trees.h"

/**
 * binary_tree_insert_left -	inserts a node as the left child of another node.
 * @parent:						pointer to the node to insert the left-child in
 * @value:						value to store in the new node.
 * Return:						SUCCESS: pointer to the created node.
 *								FAILURE or PARENT IS NULL : NULL.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	/* create the new node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* insert it as left child */
	if (parent->left == NULL)
		parent->left = new_node;			/*if parent doesn't have a left child*/
	else
	{
		new_node->left = parent->left;		/* if parent already has a left child*/
		parent->left = new_node;
		new_node->left->parent = new_node;
	}

	return (new_node);
}
