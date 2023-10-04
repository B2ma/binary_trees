#include "binary_trees.h"
/**
 * binary_tree_balance - a function that measures the balance factor of a
 *	binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: balance factor, 0 otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree == NULL)
		return (0);
	leftHeight = (int)binary_tree_height(tree->left);
	rightHeight = (int)binary_tree_height(tree->right);
	return (leftHeight - rightHeight);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return ((leftHeight > rightHeight ? leftHeight : rightHeight) + 1);
}
