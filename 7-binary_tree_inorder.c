#include "binary_trees.h"
/**
 * binary_tree_inorder - is used to print the binary tree in a pre order mode
 * @tree: is the tree to be printed
 * @func: is the function used to print
 * Return: Void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
