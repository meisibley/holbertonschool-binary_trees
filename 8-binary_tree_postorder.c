#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order traversa
 *
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree) /*depth-first search*/
		binary_tree_postorder(tree->left, func);
	if (tree)
		binary_tree_postorder(tree->right, func);
	if (tree && func) /*post-order traversal*/
		func(tree->n);
}
