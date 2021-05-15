#include "functions2.h"

node* right_rotate(node* y){
    node* x=y->left;
    node* T2=x->right;

    x->right=y;
    y->left=T2;

    y->height=1+max(y->left->height,y->right->height);
    x->height=1+ max(x->left->height,x->right->height);

    return x;
}

node* left_rotate(node* x){
    node* y=x->right;
    node* T2=y->left;

    y->left=x;
    x->right=T2;

    x->height=1+max(height(x->left),height(x->right));
    y->height=1+max(height(y->left),height(y->right));

    return y;
}