#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height -> check the height of tree
 * @tree: node to be used to check
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_side = 0, right_side = 0;

    if (tree)
    {
        if (tree->left)
            left_side = 1 + binary_tree_height(tree->left);
        else
            left_side += 0;
        if (tree->right)
            right_side = 1 + binary_tree_height(tree->right);
        else
            right_side += 0;
        return ((left_side > right_side) ? left_side : right_side);
    }
    return (0);
}
