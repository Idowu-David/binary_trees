#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: a pointer to the created node or NULL if it fails
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (parent == NULL)
		return (NULL);
	child = malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);
	child->right = child->left = NULL;
	child->n = value;
	child->parent = parent;
	if (parent->right == NULL)
		parent->right = child;
	else
	{
		child->right = parent->right;
		parent->right->parent = child;
		parent->right = child;
	}



	return (child);
}
