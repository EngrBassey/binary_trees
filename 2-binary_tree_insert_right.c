#include "binary_trees.h"

/**
  * binary_tree_insert_right - function that creare binary tree
  * @parent: link to another link
  * @value: elements in a link
  * Return: newnode to tthe right
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
		binary_tree_t *new;

		if (parent == NULL)
			return (NULL);
		new = binary_tree_node(parent, value);

		if (parent->right != NULL)
		{
			new->right = parent->right;
			parent->right->parent = new;
		}
		parent->right = new;

		return (parent->right);
}
