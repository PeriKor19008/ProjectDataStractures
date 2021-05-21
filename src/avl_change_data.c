#include "functions2.h"
#include <stdio.h>

node* avl_change_data(node* tree,int key,int data){
    node*tmp= search(tree,key);
    if(tmp!=NULL){
        tmp->data=data;
        return tmp;
    }
    return NULL;
}