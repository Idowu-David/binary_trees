#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the depth
 * Return: the depth of the tree or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	return 1 + MAX(binary_tree_depth(tree->left), binary_tree_depth(tree->right));
}
