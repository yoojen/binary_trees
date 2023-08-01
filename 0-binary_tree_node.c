#include "binary_trees.h"

/**
 * binary_tree_node - is used to create the binary tree
 * @parent: is the parent of the binary tree to be created
 * @value: is the value of the created binary tree
 * Return: the binary tree or NULL if any failure occures
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *inner = malloc(sizeof(binary_tree_t));

	if (inner == NULL)
		return (NULL);

	inner->left = NULL;
	inner->n = value;
	if (parent)
		inner->parent = parent;
	else
		inner->parent = NULL;
	inner->right = NULL;

	return (inner);
}
