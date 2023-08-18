#include "binary_trees.h"

/**
 * binary_tree_uncle - A function that finds the uncle of a node
 * @node: A pointer to the node to find uncle
 *
 * Return: The uncle node, NULL if node or parent or uncle is NULL
 */
binary_tree_t *binary_tree_uncle(const binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->n < node->parent->parent->n)
	{
		if (!node->parent->parent->right)
		{
			return (NULL);
		}
		else
			return (node->parent->parent->right);
	}
	else
	{
		if (!node->parent->parent->left)
		{
			return (NULL);
		}
		else
			return (node->parent->parent->left);
	}
}
