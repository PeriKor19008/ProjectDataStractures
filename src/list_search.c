#include "functions2.h"
#include <stdio.h>
#include <string.h>
bucket* list_search(bucket* list,char* date){
    if(list=NULL)
        return NULL;
    if(strcmp(date,list->date)==0)
        return list;
    else
        list_search(list->next,date);
}