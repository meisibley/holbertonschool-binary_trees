#include "binary_trees.h"

/**
 * binary_tree_nodes - A function that counts the nodes in a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: count of nodes, NULL if failure
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nc, right_nc, count;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_nc = binary_tree_nodes(tree->left);
	right_nc = binary_tree_nodes(tree->right);
	count = left_nc + right_nc + 1;
	return (count);
}
