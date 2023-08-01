#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: node to be checked
 *
 * Return: 1 Node 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
		return (1);
	return (0);
}
