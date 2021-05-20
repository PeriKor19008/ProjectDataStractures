#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions2.h"
node* create_avl_tree(node* tree,char*path,int mode){

    //open file
    FILE *fp;
    fp= fopen(path,"r");
    if(fp == NULL) {
        perror("Error in opening file");
        return(NULL);
    }


    tree=NULL;
    float t0;
    char tmp[50];
    float tem;

    while(fgets((tmp),sizeof(tmp),fp)){
        node* node1=(node*) malloc(sizeof(node));
        fscanf(fp,"%[^,],%f,%f,%f,%f,%d,%d",node1->sdate,&t0,&t0,&t0,&t0,&node1->data,&t0);
        node1->key= fix_date(node1->sdate);
        //if mode=1 then the keys of the tree is the volume
        //and data is the date
        if (mode==1){

            int t=node1->key;
            node1->key=node1->data;
            node1->data=t;
        }

        tree=bst_insertion(tree,node1);
    }

    fclose(fp);
    return tree;
}
