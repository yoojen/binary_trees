#include "binary_trees.h"
/**
 * binary_tree_delete - function is used to delete the entire tree
 * @tree: is the tree to be delated
 * Return: Void;
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
