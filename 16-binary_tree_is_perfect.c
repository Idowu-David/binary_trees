#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if perfect, 0, otherwise
 * A perfect binary tree has:
 * - All levels completely filled
 * - All leaf nodes at the same depth
 * - All internal nodes have two children
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int dep;

	if (!tree)
		return (0);

	dep = depth(tree);
	return (is_perfect_helper(tree, dep, 1));
}

/**
 * depth - measures the depth of the leftmost leaf node
 * @tree: Pointer to the root node of the tree
 * Return: Depth of the leftmost path
 */
int depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * is_perfect_helper - to check for perfect tree
 * @tree: a pointer to the tree
 * @level: the level of the tree
 * @depth: the depth of the tree
 * Return: 1, if perfect, 0, otherwise
 */
int is_perfect_helper(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);
	if (!tree->left && !tree->right) /* Leaf node check */
		return (depth == level);
	if (!tree->left || !tree->right) /* One child is missing */
		return (0);
	return (
			(is_perfect_helper(tree->left, depth, level + 1) &&
			 is_perfect_helper(tree->right, depth, level + 1)));
}
