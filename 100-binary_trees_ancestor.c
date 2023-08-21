#include "binary_trees.h"

/**
 * binary_trees_ancestor - A function finds lowest common ancesote of 2 nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * Return: A pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *f_node = first, *s_node = second;

	if (!first || !second)
		return (NULL);
	while (s_node)
	{
		while (f_node)
		{
			if (f_node->n == s_node->n)
				return ((binary_tree_t *)f_node);
			if (f_node->parent)
				f_node = f_node->parent;
			else
				break;
		}
		f_node = first;
		if (s_node->parent)
			s_node = s_node->parent;
		else
			break;
	}
	return (NULL);
}
