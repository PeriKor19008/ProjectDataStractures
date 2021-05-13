#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions2.h"
node* create_avl_tree(node* tree,char*path){

    //open file
    FILE *fp;
    fp= fopen(path,"r");
    if(fp == NULL) {
        perror("Error in opening file");
        return(NULL);
    }

    node* node1=(node*) malloc(sizeof(node));
    tree=NULL;
    float t0;
    char tmp[50];
    float tem;
    while(fgets((tmp),sizeof(tmp),fp)){
        node* node1=(node*) malloc(sizeof(node));
        fscanf(fp,"%[^,],%f,%f,%f,%f,%d,%d",node1->sdate,&t0,&t0,&t0,&t0,&node1->volume,&t0);
        node1->date= fix_date(node1->sdate);
        tree=bst_insertion(tree,node1);
    }

    return tree;
}
