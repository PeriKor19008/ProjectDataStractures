#include "functions2.h"
#include <stdio.h>

void print_inorder(node* tree){
    if(tree==NULL)
        return;
    print_inorder(tree->left);
    printf("date: %s \nvolume: %d\n\n",tree->sdate,tree->volume);
    print_inorder((tree->right));

}