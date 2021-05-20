#include "functions2.h"
#include <stdio.h>

node* avl_find_min(node* tree){
    if(tree==NULL)
        return tree;
    if(tree->left==NULL)
        return tree;
    return avl_find_max(tree->left);
}