#include "functions2.h"

node* rebalance(node* node,int balance){
    //left left case
    if(balance>1 && node->date<node->left->date){
        return right_rotate(node);
    }
    //right right case
    if(balance<-1 && node->date>node->right->date){
        return left_rotate(node);
    }
    //left right case
    if(balance>1 && node->date>node->left->date){
        node->left= left_rotate(node->left);
        return right_rotate(node);
    }
    //right left case
    if(balance<-1 && node->date<node->right->date){
        node->right= right_rotate(node->right);
        return left_rotate(node);
    }
}