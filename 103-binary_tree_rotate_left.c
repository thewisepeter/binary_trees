#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointer to the new root node of the tree after rotation
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL || tree->right == NULL)
		return (tree);
	new_root = tree->right;
	tree->right = new_root->left;
	new_root->left = tree;
	new_root->parent = tree->parent;
	tree->parent = new_root;
	if (tree->right)
		tree->right->parent = tree;
	return (new_root);
}

