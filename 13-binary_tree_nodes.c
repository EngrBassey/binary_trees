#include "binary_trees.h"

/**
 * binary_tree_nodes - function that count node atleats with one child
 * @tree: the binary tree
 * Return: the number of child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		count += (tree->left || tree->right) ? 1 : 0;
		count += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	}
	return (count);
}
