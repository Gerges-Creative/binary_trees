#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth of a node in a binary
 * tree.
 *
 * @tree: Pointer to the node to measeure the depth.
 *
 * Return: Depth(in type size_t) of the tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		depth = binary_tree_depth(tree->parent);
	else
		return (0);

	depth++;

	return (depth);
}
