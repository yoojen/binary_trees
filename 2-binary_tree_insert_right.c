#include "binary_trees.h"
/**
 * binary_tree_insert_right - Is used to insert a binary tree to the right
 * @parent: is the parent of the new node
 * @value: is the value to be added to the new node
 * Return: the new node or null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *inner = malloc(sizeof(binary_tree_t));

	if (inner == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	inner = binary_tree_node(parent, value);
	if (inner == NULL)
		return (NULL);

	if (parent->right)
	{
		inner->right = parent->right;
		parent->right->parent = inner;
	}
	parent->right = inner;
	return (inner);
}
