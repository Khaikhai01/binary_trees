#include "binary_trees.h"

/**
 * max - finds maximum height between two paths in a tree
 * @left: length of left path
 * @right: length of right path
 *
 * Return: max between the two paths
 */
size_t max(size_t left, size_t right)
{
	if (left < right)
		return (right);
	return (left);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree to measure height
 *
 * Return: height of tree else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (max(left, right) + 1);
}
