/*
 *
 * quicknode
 *
 * This file is part of quicknode, a library to use dictionaries
 * (associative arrays) in C language
 * 
 * Copyright(c) 2014 Gabriele Salvatori
 * http://www.salvatorigabriele.com
 * salvatorigabriele@gmail.com

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */



#ifndef 	__QUICKNODE_H
#define 	__QUICKNODE_H



#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*
 *
 *  Struct that represent a node with key, value and pointers to the left and right childs
 *
 *
 */

typedef struct node{

        char *key;
	char *value;

	struct node *left;
	struct node *right;

} node;



node* create_node(char *key, char *value);
node* insert(node *root, char *key, char *value);
node* min(node *root);
node* delete(node *root, char *key);
node* search(node *root, char *key);


void print_node(node *target);
void print_tree(node *target);


#endif
