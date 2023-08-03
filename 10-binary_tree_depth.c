#include "binary_trees.h"

/**
 * binary_tree_depth - is used to find the debth of the binary tree
 * @tree: is the tree to be measured
 * Return: depth or 0 if error occurs
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	int i;

	i = binary_tree_depth(tree->parent);

	return (i + 1);
}
