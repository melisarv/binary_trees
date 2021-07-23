#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_right = 0, h_left = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left > h_right)
		return (h_left + 1);

	return (h_right + 1);
}
