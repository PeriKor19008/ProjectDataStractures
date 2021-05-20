#include "functions2.h"
#include <stdio.h>

node* avl_search(node* tree,int key){
    node* found=NULL;
    if(tree==NULL){
        return found;
    }
    if(tree->key<key){
        avl_search(tree->right,key);
        return found;
    }
    avl_search(tree->left,key);
    return found;
}