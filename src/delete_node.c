#include "functions2.h"
#include <stdio.h>
#include <stdlib.h>

node* delete_node(node* tree,int key){
    if(tree==NULL)
        return NULL;
    if(key>tree->key)
        delete_node(tree->right,key);
    else if(key<tree->key)
        delete_node(tree->left,key);
    else{
        //one or no children
        if(tree->left==NULL){
            node* tmp=tree->right;
            free(tree);
            return tmp;
        }
        else if(tree->right==NULL){
            node* tmp=tree->left;
            free(tree);
            return tmp;
        }
        else{
            //two children
            node* tmp=min_val(tree->right);
            tree->key=tmp->key;
            tree->sdate=tmp->sdate;
            tree->data=tmp->data;
            tree->right= delete_node(tree->right,tmp->key);
        }
    }
}