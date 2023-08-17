#include "binary_trees.h"

/**
 * binary_tree_preorder - It goes through binary tree using pre-order traversal
 *
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a funciton to call for each node.
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
		func(tree->n);
	if (tree)
		binary_tree_preorder(tree->left, func);
	if (tree)
		binary_tree_preorder(tree->right, func);
}
