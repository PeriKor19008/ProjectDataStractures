#include "functions2.h"
#include <stdio.h>

node* avl_change_data(node* tree,int key,int data){
    tree= avl_search(tree,key);
    if(tree!=NULL){
        tree->data=data;
        return tree;
    }
    return NULL;
}