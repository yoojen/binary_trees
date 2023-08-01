#include "binary_trees.h"
/**
 * binary_tree_postorder - is used to print the binary tree in a pre order mode
 * @tree: is the tree to be printed
 * @func: is the function used to print
 * Return: Void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
