#include "functions2.h"
#include <stdio.h>

node* avl_find_max(node* tree){
    if(tree==NULL)
        return tree;
    if(tree->right==NULL)
        return tree;
    return avl_find_max(tree->right);
}