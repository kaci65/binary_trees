#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightL, heightR;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		heightL = binary_tree_height(tree->left) + 1;
		heightR = binary_tree_height(tree->right) + 1;

		if (heightL > heightR)
		{
			return (heightL);
		}
		else
		{
			return (heightR);
		}
	}
}
