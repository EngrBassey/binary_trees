#include "binary_trees.h"

/**
  * binary_tree_is_root - function that checks root of a binary tree
 * @node: the binary tree
 * Return: return 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
