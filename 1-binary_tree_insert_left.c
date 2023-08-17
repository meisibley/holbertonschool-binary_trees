#include "binary_trees.h"

/**
 * binary_tree_t - insert a node as the left_child of another node
 *
 * @parent: It's a pointer to the node to insert the left-child in
 * @value: It's the value to store in the new node
 *
 * Return: A pointer to the created node, NULL for failure or parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *temp = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if(!new_node)
		return (NULL);
	temp = parent->left;
	if (temp)
		temp->parent = new_node;
	new_node->left = temp;
	parent->left = new_node;
	return (new_node);
}
