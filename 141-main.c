#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - E
 *
 * Return: A
 */
int main(void)
{
	binary_tree_t *root;
	int balance;

	root = binary_tree_node(NULL, 70);
	root->left = binary_tree_node(root, 50);
	root->right = binary_tree_node(root, 90);
	root->left->left = binary_tree_node(root->left, 40);
	root->left->right = binary_tree_node(root->left, 60);
	root->right->left = binary_tree_node(root->right, 80);
	root->right->right = binary_tree_node(root->right, 110);
	root->right->right->left = binary_tree_node(root->right->right, 105);
	root->right->right->right = binary_tree_node(root->right->right, 120);
	root->right->left->left = binary_tree_node(root->right->left, 75);
	root->right->left->right = binary_tree_node(root->right->left, 85);
	//root->left->right->left = binary_tree_node(root->left->right, 55);
	//root->left->right->right = binary_tree_node(root->left->right, 65);
	root->left->left->left = binary_tree_node(root->left->left, 35);
	root->left->left->right = binary_tree_node(root->left->left, 45);
	binary_tree_print(root);

	balance = binary_tree_balance(root);
	printf("Balance of %d: %+d\n", root->n, balance);

	binary_tree_delete(root);
	return (0);
}
gcc -Wall -Wextra -Werror -peda
ntic binary_tree_print.c 14-binary_tree_balance.c 141-main.c 0-binary_tree_node.
c 3-binary_tree_delete.c -o 141-balance
