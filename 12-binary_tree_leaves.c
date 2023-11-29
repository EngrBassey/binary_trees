#include "binary_trees.h"

/**
  * binary_tree_leaves - function that count number of leaves binary tree
 * @tree: the binary tree
 * Return: the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		count += (!tree->left && !tree->right) ? 1 : 0;
		count += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	}
	return (count);
}
