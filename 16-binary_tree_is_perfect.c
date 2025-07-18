#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if perfect, 0, otherwise
 * A perfect Binary Tree has all leaf nodes on the same level, which means that all levels are full of nodes,
 * and all internal nodes have two child nodes.
 * The properties of a perfect Binary Tree means it is also full, balanced, and complete.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left || !tree->right)
		return (0);
	if ((!tree->left && !tree->right))
		return (1);
	return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
