#include "binary_trees.h"

/**
 * binary_tree_insert_right - It inserts a node as right-child of given node
 *
 * @parent: A pointer to node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node, or NULL on failure or parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *temp = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	temp = parent->right;
	if (temp)
		temp->parent = new_node;
	new_node->right = temp;
	parent->right = new_node;

	return (new_node);
}
