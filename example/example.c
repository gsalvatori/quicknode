#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "quicknode.h"

int main (){


	node *root = NULL;
	node *due;
	node *tre;

	char *key = "first";
	char *value = "element1";

	char *key1 = "second";
	char *value1 = "element2";

	char *key2 = "third";
	char *value2 = "element3";

	root = insert(root, key, value);
	due = insert(root,key1,value1);
	tre = insert(root,key2,value2);


	print_tree(root);

	node* dlt;

	dlt = delete(root,key1);

	print_tree(root);
	

	return 0;

}