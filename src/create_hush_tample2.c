#include "functions2.h"
#include <stdio.h>
#include <stdlib.h>

bucket2** create_hash_table2(char* path,bucket2** table){
    //open file
    FILE *fp;
    fp= fopen(path,"r");
    if(fp == NULL) {
        perror("Error in opening file");
        return(NULL);
    }

    table = (bucket2**)malloc(sizeof(bucket2*)*11);

    char tmp[50];
    float t;
    while(fgets((tmp),sizeof(tmp),fp)){
        bucket2* b=(bucket2*) malloc(sizeof(bucket2));
        b->next_level=NULL;
        fscanf(fp,"%[^,],%f,%f,%f,%f,%d,%d",b->date,&t,&t,&t,&t,&b->volume,&t);
        insert_bucket(table,b,0);
    }

    fclose(fp);
    return table;
}