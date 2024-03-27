#include "binary_trees.h"


binary_tree_t *check_ancestor(const binary_tree_t *first, const binary_tree_t *second);

/**
 * binary_trees_ancestor -	finds the lowest common ancestor of two nodes.
 * @first:					pointer to the first node.
 * @second:					pointer to the second node.
 * Return:					pointer to the lowest common ancestor node
 *							of the two given nodes.
 *							if none were found return NULL.
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,const binary_tree_t *second)
{
	binary_tree_t *ancestor = NULL;

	if (!first || !second)
		return (NULL);
	while (!first->parent && !second->parent)
	{
		ancestor = check_ancestor(first, second);
		if (ancestor != NULL)
			break;
		first = first->parent;
		ancestor = check_ancestor(first, second);
		if (ancestor != NULL)
			break;
		second = second->parent;
	}
	return (ancestor);
}

/**
 * check_ancestor -			checks tree for the ancestor.
 * @first:					pointer to the first node.
 * @second:					pointer to the second node.
 * Return:					pointer to the lowest common ancestor node
 *							of the two given nodes.
 *							NULL if no ancestor.
*/
binary_tree_t *check_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *ancestor = NULL;
	binary_tree_t *p_first = NULL;
	binary_tree_t *p_second = NULL;
	*p_second = *first;
	*p_second = *second;

	if (p_first->parent == p_second->parent)
		ancestor = p_first->parent;
	else if (p_first->parent == p_second)
		ancestor = p_second;
	else if (p_second->parent == p_first)
		ancestor = p_first;
	
	return (ancestor);
}