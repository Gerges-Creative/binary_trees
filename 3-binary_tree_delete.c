#include "binary_trees.h"

/**
 * binary_tree_delete - A function that deletes an entire binary tree.
 *
 * @tree: Pointer to the root node of the tree to delete.
 *
 * Return: No return.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	if (tree->left != NULL)
		binary_tree_delete(tree->left);

	free(tree);
}
