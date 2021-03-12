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

	if ((tree == NULL) || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	else
	{
		heightL = binary_tree_height(tree->left);
		heightR = binary_tree_height(tree->right);

		if (heightL > heightR)
		{
			return (heightL + 1);
		}
		else
		{
			return (heightR + 1);
		}
	}
}
