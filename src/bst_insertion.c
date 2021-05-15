#include "functions2.h"
#include <stdio.h>
node* bst_insertion(node* tree,node* node1){

    if(tree==NULL){
        node1->height=0;
        tree=node1;
        //recursively
        return tree;
    }
    if(node1->date<=tree->date){
        tree->left=bst_insertion(tree->left,node1);
        tree->height++;
    }


    else{
        tree->right=bst_insertion(tree->right,node1);
        tree->height++;
    }

    tree->height=1+max(height(tree->left), height(tree->right));
    int balance=get_balance(tree);

    if(balance>1 || balance<-1)
        tree=rebalance(tree,node1->date,balance);
    return tree;
}
