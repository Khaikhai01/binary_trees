#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree to measure height
 *
 * Return: height of tree else 0
 */
int tree_height(const binary_tree_t *tree)
{
	int left, right, max;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	if (left < right)
		max = right;
	else
		max = left;
	return (max + 1);
}

/**
 * tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of tree else 0
 */
int tree_size(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
	count += 1;
	count += tree_size(tree->left);
	count += tree_size(tree->right);

	return (count);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i, max_nodes, size, height, power;

	if (tree == NULL)
		return (0);

	size = tree_size(tree);
	height = tree_height(tree);
	power = 1;

	for (i = 0; i < height; i++)
		power *= 2;

	max_nodes = power - 1;

	if (size == max_nodes)
		return (1);

	return (0);
}
