#include "binary_trees.h"
/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves 0 otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_nos = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leaves_nos += binary_tree_leaves(tree->left);
	leaves_nos += binary_tree_leaves(tree->right);
	return (leaves_nos);
}
