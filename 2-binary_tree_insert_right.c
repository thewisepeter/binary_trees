#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightie = malloc(sizeof(binary_tree_t));

	if (!rightie)
		return (NULL);


	parent->right = rightie;
	rightie->parent = parent;
	rightie->n = value;
	rightie->left = NULL;
	rightie->right = NULL;

	return (rightie);
}
