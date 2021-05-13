#include "functions2.h"
#include <stdio.h>
#include <stdlib.h>

bucket** create_hash_table(char* path,bucket** table){
    //open file
    FILE *fp;
    fp= fopen(path,"r");
    if(fp == NULL) {
        perror("Error in opening file");
        return(NULL);
    }

    table= NULL;

    table = (bucket**)malloc(sizeof(bucket*)*11);

    char tmp[50];
    float t;
    while(fgets((tmp),sizeof(tmp),fp)){
        bucket* b=(bucket*) malloc(sizeof(bucket));
        b->next=NULL;
        fscanf(fp,"%[^,],%f,%f,%f,%f,%d,%d",b->date,&t,&t,&t,&t,&b->volume,&t);
        int h= hash(b->date);
        b->next=table[h];
        table[h]=b;

    }

    fclose(fp);
    return table;
}