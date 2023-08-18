#include "binary_trees.h"

/**
 * binary_tree_is_full - A function that checks if a binary tree is full
 * @tree: A pointer to the root node of the tree
 *
 * Return: 1 if it's full, 0 if otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int half;

	if (tree == NULL)
		return (0);
	half = binary_t_i_f_half(tree);
	if (half == 0)
		return (1);
	else
		return (0);
}

/**
 * binary_t_i_f_half - Check the tree half by half
 * @tree: A pointer to the root node of the tree
 *
 * Return: 0 if it's full, greater than 0 if it's not full
 */
int binary_t_i_f_half(const binary_tree_t *tree)
{
	size_t left_hf, right_hf;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_hf = binary_t_i_f_half(tree->left);
	right_hf = binary_t_i_f_half(tree->right);
	if (tree->left && tree->right)
		return (left_hf + right_hf);
	return (left_hf + right_hf + 1);
}
