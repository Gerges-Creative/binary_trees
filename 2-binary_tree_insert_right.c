#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node as the right-child
 * of another node.
 *
 * @parent: The parent node of the inserted node.
 * @value: The value of the inserted node.
 *
 * Return: Pointer to the created node or NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *temp;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = node;
		node->right = temp;
		node->right->parent = node;
	}
	else
	{
		parent->right = node;
	}

	return (node);
}
