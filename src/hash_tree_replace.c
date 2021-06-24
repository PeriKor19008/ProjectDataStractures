#include <stdio.h>
#include "functions2.h"

int hash_tree_replace(bucket2** tree, char* date,int vol){
    bucket2* b=hash_search2(tree,date,0);
    if (b==NULL)
        return -1;
    b->volume=vol;
    return b->volume;
}