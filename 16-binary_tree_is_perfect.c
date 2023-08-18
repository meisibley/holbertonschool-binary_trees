#include "binary_trees.h"

/**
 * binary_tree_is_perfect - A function that checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree
 *
 * Return: 1 if it's perfect, 0 else
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_full, is_balance;

	if (tree == NULL)
		return (0);
	is_full = binary_tree_is_full(tree);
	is_balance = binary_tree_balance(tree);
	if (is_full == 1 && is_balance == 0)
		return (1);
	else
		return (0);
}

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

/**
 * binary_tree_balance - A function that measures of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The off balance number, postve means left longer, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal, left_b, right_b;

	if (!tree)
		return (0);
	if (!tree->left)
		left_b = 0;
	else
		left_b = binary_tree_height(tree->left);
	if (!tree->right)
		right_b = 0;
	else
		right_b = binary_tree_height(tree->right);
	bal = left_b - right_b;
	return (bal);
}

/**
 * binary_tree_height - A function measures height of a binary tree
 * @tree: A pointer to root of a binary tree
 *
 * Return: The height of the tree, 0 of failue or one node tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h, left_h, right_h;

	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h > right_h)
		h = left_h;
	else
		h = right_h;
	return (h + 1);
}
