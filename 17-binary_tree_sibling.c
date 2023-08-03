#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling -> check if node has siblings
 * @node: node in the tree
 * Return: sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node->parent)
		return (NULL);

	binary_tree_t *par = node->parent;

	if (node == NULL || par == NULL || !par->left || !par->right)
		return (NULL);
	if (par->left == node)
		return (par->right);
	return (par->left);
}
