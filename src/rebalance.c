#include "functions2.h"

node* rebalance(node* node,int key,int balance){
    //left left case
    if(balance>1 && key<node->left->key){
        return right_rotate(node);
    }
    //right right case
    if(balance<-1 && key>node->right->key){
        return left_rotate(node);
    }
    //left right case
    if(balance>1 && key>node->left->key){
        node->left= left_rotate(node->left);
        return right_rotate(node);
    }
    //right left case
    if(balance<-1 && key<node->right->key){
        node->right= right_rotate(node->right);
        return left_rotate(node);
    }
}