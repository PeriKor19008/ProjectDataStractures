#include "functions2.h"
#include <stdio.h>

void print_inorder(node* tree){
    if(tree==NULL)
        return;
    print_inorder(tree->left);
    print_node(tree);
    print_inorder((tree->right));

}