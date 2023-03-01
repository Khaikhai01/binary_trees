#include "binary_trees.h"

/**
 *binary_tree_preorder - function that goes through a binary tree using pre-order traversal
 *@tree: pointer to root node
 *@func: pointer to function to call each node
 *Return: nothing if tree and function is NULL and the data in func
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
