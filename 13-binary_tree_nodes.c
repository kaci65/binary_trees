#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: 0 if tree is NULL (NULL pointer is not node)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t BT_node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left || tree->right)
	{
		BT_node = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	}
	return (BT_node);
}
