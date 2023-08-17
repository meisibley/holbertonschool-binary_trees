#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth of a binary tree node
 *
 * @tree: A pointer to the node to measure the depth
 *
 * Return: depth, 0 if failure
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree)
	{
		while (tree->parent)
		{
			tree = tree->parent;
			d++;
		}
		return (d);
	}
	return (0);
}

