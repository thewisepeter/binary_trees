#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 *
 * Return: number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (1 + left + right);
}
