#include "binary_trees.h"

/**
 * binary_tree_preorder - A function that goes through a binary tree using
 * pre-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Return: No return.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *preorder;

	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	if (tree->left != NULL)
		binary_tree_preorder(tree->left, &func);
	if (tree->right != NULL)
		binary_tree_preorder(tree->right, &func);
}
