#include "functions2.h"
#include <stdio.h>
#include <stdlib.h>

bucket2** insert_bucket(bucket2** table,bucket2* b,int h_mode){
    int index=d_hash(b->date,h_mode);
    if(table[index]==NULL){
        table[index]=b;
        return table;
    }
    if(table[index]->next_level==NULL){
        table[index]->next_level=(bucket2**)malloc(sizeof(bucket2*)*11);
        table[index]->next_level= insert_bucket(table[index]->next_level,b,h_mode++);
        return table;
    }
    table[index]->next_level= insert_bucket(table[index]->next_level,b,h_mode++);
    return table;

}
