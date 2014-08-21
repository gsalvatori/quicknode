/*
 * quicknode
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



#include "quicknode.h"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>




/*
 *
 * Create a new node with key and value
 *
 * -param key:    new node key
 * -param value:  new node value
 *
 * -return: a new node with the specified parameters
 *
 *
 */

node* create_node(char *key, char *value){

	node *new;
        new = (node*)malloc( sizeof(node) );

	// copying values to node
	strcpy(new->key,key);
	strcpy(new->value,value);

	// "new" childs are NULL
	new->left = NULL;
	new->right = NULL;

	return new;

}



/*
 *
 * Insert a new node with key and value
 *
 * -param root:   root
 * -param key:    new node key
 * -param value:  new node value
 *
 * -return: 
 *
 *
 */

node* insert(node *root, char *key, char *value){

	if (root == NULL){

		node *new = (node*)malloc( sizeof(node) );

		new->key = key;
		new->value = value;

		new->left = NULL;
		new->right = NULL;

		return new;

	}

	if (key < root->key){

		root->left = insert(root->left,key,value);

	}
	
	else if (key > root->key){

		root->right = insert(root->right,key,value);

	}

	else{

		root->value = value;

	}

	return root;


}



node* min(node *root){

	if (root == NULL){

		return NULL;

	}

	else if (root->left){

		return min(root->left);

	}

	else{

		return root;

	}

}


/*
 *
 * Remove a node with specified key and value
 *
 * -param root
 * -param key
 * -param value
 *
 * -return
 *
 *
 */


node* delete(node *root, char *key){


	node *tmp;


	if (root == NULL){

		return NULL;

	}

	else if (key < root->key){

		root->left = delete(root->left,key);

	}

	else if (key > root->key){

		root->right = delete(root->right, key);

	}

	else{

		if (root->right && root->left){

			tmp = min(root->right);
			root->key = tmp->key;

			root->right = delete(root->right, tmp->key);

		}

		else{

			tmp = root;

			if (root->left == NULL){

				root = root->right;

			}

			else if (root->right == NULL){

				root = root->left;

			}

			free(tmp);

		}

	}

	return root;

}



/*
 *
 * Search a node for a specified key
 *
 * -param root: root node
 * -param key: key to search
 *
 * -return: node searched
 *
 *
 */

node* search(node *root, char *key){

	if (root == NULL){

		return NULL;

	}

	int cmp;

	node *i = root;

	while (i != NULL){
		
		cmp = strcmp(key,i->key);

		if (cmp < 0){

			i = i->left;

		}

		else if (cmp > 0){

			i = i->right;

		}

		else{

			return i;

		}

	}

	return i;

}


/*
 *
 * Print a node
 *
 *
 * -param target: node to print
 *
 * -return /
 *
 *
 */

void print_node(node *target){

	if (target != NULL){

		printf("%s",target->value);

	}

}


/*
 *
 * Print the entire tree
 *
 *
 * -param target: first node
 *
 * -return /
 *
 *
 */

void print_tree(node *target){

	if (!target){

		return;

	}

	if (target->left){

		print_tree(target->left);

	}


	printf("\n%s\n",target->value);


	if (target->right){

		print_tree(target->right);

	}

}























