#include "binary_trees.h"

/**
  * binary_tree_postorder - function that pre-oder tranverse binary tree
 * @tree: the binary tree
 * @func: func pointer
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
