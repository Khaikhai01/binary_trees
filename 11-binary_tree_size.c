#include "binary_trees.h"

/**
 * binary_tree_size - finds the size of tree
 * @tree: the tree to find size
 *
 * Return: the size of the tree
 */
size_t binary_tree_size(binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
