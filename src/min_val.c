#include "functions2.h"
#include <stdio.h>

node* min_val(node* tree){
    if(tree || tree->left==NULL)
        return tree;
    return min_val(tree->left);
}