#include "binary_trees.h"

/**
 * binary_tree_is_root - A function that checks if a given node is a root.
 *
 * @node: Pointer to the node to check.
 *
 * Return: Upon success 1 otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
