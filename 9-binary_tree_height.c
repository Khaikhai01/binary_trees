#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a tree
 * @tree: the tree to measure
 *
 * Return: int
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightleft = 0;
	size_t heightright = 0;
	size_t treeheight = 0;
	
	if (tree == NULL || (!tree->left && !tree->right))
		return (0);

	heightleft = binary_tree_height(tree->left);
	heightright = binary_tree_height(tree->right);

	treeheight = max(heightleft, heightright) + 1;
	return (treeheight);
}

/**
 * max; returns the maximuim integer
 * @left: the first integer to use
 * @right: the second integer to use
 *
 * Return: the max interger
 */
int max(int left, int right)
{
	if (left > right)
	{
		return (left);
	}
	return (right);
}
