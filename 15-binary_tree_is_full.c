#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if full, 0, otherwise
 * A FULL binary tree is one whose nodes have at least 0 or 2 children
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
