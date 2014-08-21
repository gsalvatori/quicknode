#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "quicknode.h"

int main (){


	node *root = NULL;
	node *two;
	node *three;

        /* set keys and values for nodes */
	char *key = "first";
	char *value = "element1";

	char *key1 = "second";
	char *value1 = "element2";

	char *key2 = "third";
	char *value2 = "element3";

        /* insert nodes into the tree */
	root = insert(root, key, value);
	two = insert(root,key1,value1);
	three = insert(root,key2,value2);

        /* printing the entire tree */
	print_tree(root);

        /* delete the node with the "key1" key */
	node* dlt;
        dlt = delete(root,key1);

        /* printing again tree to see differences */
	print_tree(root);
	

	return 0;

}
