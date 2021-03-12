#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t BT_size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	BT_size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (BT_size);
}
