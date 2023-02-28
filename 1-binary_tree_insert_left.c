#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node to the left
 * @parent: parent of the node
 * @value: value of the node
 * Return: null on failure and the node on success
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = binary_tree_node(parent, value);
	binary_tree_t *OldNode = NULL;

	if (parent == NULL || NewNode == NULL) 
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = NewNode;
	}
	else
	{
		OldNode = parent->left;
		parent->left = NewNode;
		NewNode->left = OldNode;
		OldNode->parent = NewNode;
	}
	return (NewNode);
}	
