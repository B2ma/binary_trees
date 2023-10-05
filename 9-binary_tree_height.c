#include "binary_trees.h"
/**
 * binary_tree_height- measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height..
 * Return: height of tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t tree_left = 0, tree_right = 0;

		tree_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		tree_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((tree_left > tree_right) ? tree_left : tree_right);
	}
	return (0);
}
