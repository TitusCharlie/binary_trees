#!/usr/bin/bash
#include "binary_tree.h"

/**
 *binary_tree_insert_left - function that inserts a node as the left-child of another node
 *@parent: pointer to the node to insert the first child in
 *@value: value to store in the new node
 *Return: a pointer to the created node. NULL on failure
 */

binary_tree_t *binary_tree_insert_left( binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (parent == NULL || new_node == NULL)
	{
		return NULL;
	}
	new_node->n = value;
	new_node->left = parent->left;
	new_node->right = NULL;

	parent->left = new_node;
	return new_node;
}
