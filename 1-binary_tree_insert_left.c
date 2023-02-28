#include "binary_trees.h"
/**
* binary_tree_insert_left - insert a node to the left
* @parent: parent of the node
* @value: value of the node
* Return: Null on failure and the node on success
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
<<<<<<< HEAD
{	
	binary_tree_t *OldNode = NULL;

	if (parent == NULL) 
=======
{
	binary_tree_t *OldNode = NULL;

	if (parent == NULL)
>>>>>>> c0b0589451c9d03506a8c5280bc37f8c09c83960
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
	}
	else
	{
		OldNode = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = OldNode;
		OldNode->parent = parent->left;
	}
	return (parent->left);
}
