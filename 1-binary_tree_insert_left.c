#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: a pointer to the created node or NULL if it fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);
	child->right = child->left = NULL;
	child->n = value;
	child->parent = parent;
	if (parent->left == NULL)
		parent->left = child;
	else
	{
		child->left = parent->left;
		parent->left->parent = child;
		parent->left = child;
	}



	return (child);
}
