#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftie = malloc(sizeof(binary_tree_t));

	if (!leftie)
		return (NULL);


	parent->left = leftie;
	leftie->parent = parent;
	leftie->n = value;
	leftie->left = NULL;
	leftie->right = NULL;

	return (leftie);
}
