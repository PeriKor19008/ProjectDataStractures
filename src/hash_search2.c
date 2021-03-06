#include "functions2.h"
#include <stdio.h>
#include <string.h>


bucket2* hash_search2(bucket2** table,char* date,int h_mode){

    int index=d_hash(date,h_mode);
    if(table==NULL || table[index]==NULL){
        return NULL;
    }

    if(strcmp(table[index]->date,date)==0){
        return table[index];
    }
    return hash_search2(table[index]->next_level,date,h_mode+1);

}