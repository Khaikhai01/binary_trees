#include "binary_trees.h"

/**
* binary_tree_node - creates a tree node
* @parent: parent of the node
* @value: value of the node
* Return: Null on failure and the node on success
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = value;
	temp->parent = parent;
	temp->left = NULL;
	temp->right = NULL;
	return (temp);
}
