#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find sibling
 *
 * Return: pointer to sibling node else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		temp = node->parent->right;
	else
		temp = node->parent->left;

	if (temp == NULL)
		return (NULL);

	return (temp);
}
/**
 *binary_tree_uncle - finds the uncle in a binary tree
 *@node: pointer to the node of to find uncle
 *Return: NULL if node is null and NULL if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node)
		return (NULL);
	uncle = binary_tree_sibling(node->parent);
	return (uncle);
}
