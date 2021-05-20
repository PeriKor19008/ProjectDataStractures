#include "functions2.h"
#include <stdio.h>
int search(node* tree, int key){
    if(tree==NULL)
        return -1;
    if(key==tree->key)
        return tree->key;
    if(key>tree->key)
        return search(tree->right,key);
    if(key<tree->key)
        return search(tree->left,key);


}
