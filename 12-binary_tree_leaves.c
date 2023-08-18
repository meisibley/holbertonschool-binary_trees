#include "binary_trees.h"

/**
 * binary_tree_leaves - A function that counts the leaves in a binary tree
 * @tree: A pointer to the root node of the binary tree
 *
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_c, right_c, count;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_c = binary_tree_leaves(tree->left);
	right_c = binary_tree_leaves(tree->right);
	count = left_c + right_c;

	return (count);
}
