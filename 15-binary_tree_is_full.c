#include <stdlib.h>
#include "binary_trees.h"

/**
 * check_full_recursive -> check if tree is full
 * @tree: binary tree to be checked
 * Return: 1 on success, 0 on fail
*/
int check_full_recursive(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left == NULL && tree->right != NULL) ||
		    (tree->left != NULL && tree->right == NULL) ||
		    (check_full_recursive(tree->left) == 0) ||
		    (check_full_recursive(tree->right) == 0))
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full -> check if tree is full
 * @tree: node to be used to check
 * Return: number of leaves in atree
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (check_full_recursive(tree));
}
