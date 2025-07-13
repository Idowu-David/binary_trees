#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *ptr = tree;

	if (tree == NULL)
		return;
	binary_tree_delete(ptr->left);
	binary_tree_delete(ptr->right);
	free(ptr);
}