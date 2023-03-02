#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a tree has complete nodes
 * @tree: pointer to the root tree
 * Return: 0 if not full and 1 if full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL	 && tree->right == NULL)
		return (1);
	return (binary_tree_is_full(tree->left) & binary_tree_is_full(tree->right));
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree to measure height
 * Return: height of tree else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right, max;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left < right)
                max = right;
        else
                max = left;
        return (max + 1);	
}
/**
 * binary_tree_balance - Calculate the balance factor of a tree
 * @tree: The binary tree
 * Return: The bf
 */
size_t binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: The binary tree
 * Return: 1 if perfect else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;
	if (tree == NULL)
		return (0);
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	if (left != right)
		return (0);
	if (!binary_tree_balance(tree) && binary_tree_is_full(tree))
		return (1);
	return (0);
} 
