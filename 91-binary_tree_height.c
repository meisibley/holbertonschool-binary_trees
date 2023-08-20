#include "binary_trees.h"

/**
 * binary_tree_height - It measures the height of a binary tree
 *
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: height, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0, left_h = 0, right_h = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	h = left_h > right_h ? left_h : right_h;

	return (h + 1);
}
