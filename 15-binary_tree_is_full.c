#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the tree to check
 *
 * Return: int
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int check;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);

	check = binary_tree_is_full(tree->left) & binary_tree_is_full(tree->right);
	return (check);
}
