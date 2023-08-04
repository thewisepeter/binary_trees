#include "binary_trees.h"


/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
    if (!tree)
        return 0;

    return is_complete_recursive(tree, 0, binary_tree_size(tree));
}

/**
 * is_complete_recursive - recursively checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * @index: index of the current node
 * @node_count: total number of nodes in the tree
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int is_complete_recursive(const binary_tree_t *tree, size_t index, size_t node_count)
{
    if (!tree)
        return 1;

    if (index >= node_count)
        return 0;

    return (is_complete_recursive(tree->left, 2 * index + 1, node_count) &&
            is_complete_recursive(tree->right, 2 * index + 2, node_count));
}

