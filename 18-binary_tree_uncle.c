#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle -> check uncle of node in tree
 * @node: node to be used to check
 * Return: pointer to node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *node_par;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	node_par = node->parent->parent;
	if (node_par->left == node->parent)
		return (node_par->right);
	return (node_par->left);
}
