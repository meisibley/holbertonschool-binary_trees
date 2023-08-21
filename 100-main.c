#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * launch_test - Test ancestor function and print informations
 *
 * @n1: First node
 * @n2: Second node
 */
void launch_test(binary_tree_t *n1, binary_tree_t *n2)
{
	binary_tree_t *ancestor;

	ancestor = binary_trees_ancestor(n1, n2);
	printf("Ancestor of [%d] & [%d]: ", n1->n, n2->n);
	if (!ancestor)
		printf("(nil)\n");
	else
		printf("%d\n", ancestor->n);
}

/**
 * main - E
 *
 * Return: A
 */
int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	root->left->right = binary_tree_node(root->left, 54);
	root->right->right = binary_tree_node(root->right, 128);
	root->left->left = binary_tree_node(root->left, 10);
	root->right->left = binary_tree_node(root->right, 45);
	root->right->right->left = binary_tree_node(root->right->right, 92);
	root->right->right->right = binary_tree_node(root->right->right, 65);
	binary_tree_print(root);

	launch_test(root->left, root->right);
	launch_test(root->right->left, root->right->right->right);
	launch_test(root->right->right, root->right->right->right);
	return (0);
}
/*gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 14-binary_tree_balance.c 141-main.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 141-balance*/
