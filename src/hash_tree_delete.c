#include "functions2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hash_tree_delete(bucket2** tree,char* date){
    float dist=0.5;
    bucket2* b=hash_search2(tree,date,0);
    if(b==NULL)
        return -1;
    bucket2* r=replace(b,dist);
    if(r==b){
        free(b);
        return 1;
    }
    memcpy(b,r,sizeof(bucket2));
    free(r);
    return 1;
}