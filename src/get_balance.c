#include "functions2.h"
#include <stdio.h>

int get_balance(node* node1){
    if(node1==NULL)
        return 0;
    return ((height(node1->left))-(height(node1->right)));
}