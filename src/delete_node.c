#include "functions2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

node* delete_node(node* tree,int key){
    if(tree==NULL)
        return NULL;
    if(key>tree->key)
        tree->right= delete_node(tree->right,key);
    else if(key<tree->key)
       tree->left= delete_node(tree->left,key);
    else{
        if(tree->left==NULL||tree->right==NULL){
            node* tmp= tree->left ? tree->left : tree->right;
            if (tmp==NULL){
                tmp=tree;
                tree=NULL;
            }
            else
                *tree= *tmp;
            free(tmp);

        }
        else{
            //two children
            node* tmp=min_val(tree->right);
            tree->key=tmp->key;
            strcpy(tree->sdate,tmp->sdate);
            tree->data=tmp->data;
            tree->right= delete_node(tree->right,tmp->key);
        }
    }
    if(tree==NULL)
        return tree;
    tree->height=1+max(height(tree->left), height(tree->right));
    int balance=get_balance(tree);

    if(balance>1 && get_balance(tree->left)>=0)
        return right_rotate(tree);
    if(balance>1 && get_balance(tree->left)<0){
        tree->left = left_rotate(tree->left);
        return right_rotate(tree);
    }
    if(balance < -1 && get_balance(tree->right)<=0)
        return left_rotate(tree);
    if(balance<-1 && get_balance(tree->right)>0){
        tree->right= right_rotate(tree->right);
        return left_rotate(tree);
    }
    return tree;
}