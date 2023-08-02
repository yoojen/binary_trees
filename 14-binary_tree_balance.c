#include "binary_trees.h"
/**
 * binary_tree_balance - is used to measure the balance factor of a binary tree
 * @tree: is the tree to be measured
 * Return: the balance or zero
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (height(tree->left) - height(tree->right));

	return (0);
}

/**
 * height - is used to measure the heit of a tree
 * @tree: is the binary tree to be measured
 * Return: the height or 0 if any error occurs
 */
size_t height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t height_l = 0;
		size_t height_r = 0;

		height_l = tree->left ? 1 + height(tree->left) : 1;
		height_r = tree->right ? 1 + height(tree->right) : 1;
		return (height_l > height_r ? height_l : height_r);
	}
	return (0);
}

