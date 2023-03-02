#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with atleast one child
 * @tree: the tree to count
 *
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + count + 1);
}
