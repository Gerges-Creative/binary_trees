#include "binary_trees.h"

/**
 * binary_tree_postorder -	goes through a binary tree using
 *							post-order traversal.
 * @tree:					pointer to the root node of the tree to traverse.
 * @func:					pointer to a function to call for each node.
 *								THE VALUE IN THE NODE MUST BE PASSED AS A PARAMETER TO THIS FUNCTION.
 * Return:					nothing.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		/* recursion call */
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);

		/* operation on data of the node */
		if (tree->n)
			func(tree->n);
	}
}
