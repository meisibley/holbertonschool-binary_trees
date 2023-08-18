#include "binary_trees.h"

/**
 * binary_tree_size - A function that measures the size of a binary tree
 *
 * @tree: A pointer to the root node of the tree to measure the size
 *
 * Return: nothing
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 0, left_s = 0, right_s = 0;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_s = binary_tree_size(tree->left);
	right_s = binary_tree_size(tree->right);
	size = left_s + right_s + 1;
	return (size);
}
