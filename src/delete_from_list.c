#include "functions2.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int delete_from_list(bucket* list,char* date){
    if(list==NULL)
        return -1;
    if(strcmp(date,list->date)==0){
        bucket* tmp=list->next;
        free(list);
        list=tmp;
        return 1;
    }
}