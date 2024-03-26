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

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;

	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = node;
		node->right = temp;
	}
	else
	{
		parent->right = node;
	}

	return (node);
}
