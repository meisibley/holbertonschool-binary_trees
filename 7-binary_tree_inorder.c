#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 *
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree) /*depth-first search*/
		binary_tree_inorder(tree->left, func);
	if (tree && func) /*in-order traversal*/
		func(tree->n);
	if (tree)
		binary_tree_inorder(tree->right, func);
}
