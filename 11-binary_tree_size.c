#include "binary_trees.h"
/**
 * binary_tree_size - is used to determine the size of the binary tree
 * @tree: is the tree to be determined
 * Return: the size of the tree or 0 if any failure
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree)
	{
		i = i + 1;
		i = i + binary_tree_size(tree->left);
		i = i + binary_tree_size(tree->right);
	}
	return (i);
}
