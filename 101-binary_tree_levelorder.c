#include "binary_trees.h"

/**
 * binary_tree_levelorder - implementation level-order traversal
 * @tree: pointer to root node
 * @func: pointer to function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	int front = 0, rear = 0;
	binary_tree_t *current;
	binary_tree_t **quene = malloc(sizeof(binary_tree_t) * 100);

	if (!quene)
		return;

	quene[rear++] = (binary_tree_t *) tree;
	while (front < rear)
	{
		current = quene[front++];
		func(current->n);

		if (current->left != NULL)
		{
			quene[rear++] = current->left;
		}

		if (current->right != NULL)
			quene[rear++] = current->right;
	}
	free(quene);
}
