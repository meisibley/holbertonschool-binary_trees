#include "binary_trees.h"

/**
 * binary_tree_sibling - A function that finds the sibling of a node
 * @node: A pointer to the node
 *
 * Return: The node, NULL if node or its parent is NULL, or no sibing
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->n <= node->parent->n)
	{
		if (!node->parent->right)
		{
			return (NULL);
		}
		else
			return (node->parent->right);
	}
	else
	{
		if (!node->parent->left)
		{
			return (NULL);
		}
		else
		{
			return (node->parent->left);
		}
	}
}
