#include "binary_trees.h"

/**
 * binary_tree_balance - A function that measures the balance factor a b-tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The off balance number, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance, left_b, right_b;

	if (!tree)
		return (0);
	if (!tree->left)
		left_b = 0;
	else
		left_b = binary_tree_height(tree->left) + 1;
	if (!tree->right)
		right_b = 0;
	else
		right_b = binary_tree_height(tree->right) + 1;
	balance = left_b - right_b;
	return (balance);
}

/**
 * binary_tree_height - A function measures the height of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The height, 0 if failure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h, left_h, right_h;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h > right_h)
		h = left_h;
	else
		h = right_h;
	return (h + 1);
}
