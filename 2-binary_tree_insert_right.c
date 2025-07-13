#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node.
 * Return: a pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = node->right = NULL;
	if (node->parent->right)
	{
		node->right = node->parent->right;
		node->parent->right = node;
	}
	node->parent->right = node;
	return (node);
}