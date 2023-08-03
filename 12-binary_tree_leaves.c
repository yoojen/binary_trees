#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_leaves -> count number of leaves
 * @tree: node to be used to check
 * Return: number of leaves in atree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			count++;
	else
		count += 0;
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	}
	return (count);
}
