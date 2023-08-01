#include "binary_trees.h"
/**
 * binary_tree_insert_left - Is used to insert a binary tree to the left
 * @parent: is the parent of the new node
 * @value: is the value to be added to the new node
 * Return: the new node or null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *inner;

	if (parent == NULL)
		return (NULL);

	inner = binary_tree_node(parent, value);
	if (inner == NULL)
		return (NULL);

	if (parent->left)
	{
		inner->left = parent->left;
		parent->left->parent = inner;
	}
	parent->left = inner;
	return (inner);
}
