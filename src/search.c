#include "functions2.h"
#include <stdio.h>
node* search(node* tree, int key){
    if(tree==NULL)
        return NULL;
    if(key<tree->key)
        return search(tree->left,key);
    else if(key>tree->key)
        return search(tree->right,key);
    else
        return tree;


}
