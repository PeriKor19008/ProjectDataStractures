#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"
node* create_avl_tree(value* arr,int low,int hi){
    node* new=(node*) malloc(sizeof(node));
    node* tree=new;
    new->right=NULL;
    new->left=NULL;
    if(low>hi){
        if(new->left==NULL && new->right==NULL){
            new->height=0;
        }
        else{
            new->height=1+((new->left->height < new->right->height)? new->left->height : new->right->height);
        }
        return tree;
        return NULL;
    }

    new->date=fix_date(arr[hi/2].date);
    new->volume=arr[hi/2].volume;
    int mid=(hi+low)/2;
    new->right= create_avl_tree(arr,mid+1,hi);
    new->left= create_avl_tree(arr,low,mid-1);


}
