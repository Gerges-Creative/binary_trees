#include "binary_trees.h"

/**
 * binary_tree_inorder - A function that goes through a binary tree using
 * in-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Return: No return.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);
	if (tree->right != NULL)
	{
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}

	func(tree->n);
}
