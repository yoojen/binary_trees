#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root -> check if node is root
 * @node: node to be used to check
 * Return: 1 on success 0 on fail
*/

int binary_tree_is_root(const binary_tree_t *node)
{
    if (!node || node->parent != NULL)
        return 0;
    return 1;
}
