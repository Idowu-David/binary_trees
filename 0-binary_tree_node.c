#include "bimary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: a pointer to the new node or NULL if failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (parent == NULL)
		return (NULL);
	child = malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);
	child->n = value;
	child->left = NULL;
	child->right = NULL;

	parent->left = child;
	return (child);
}
