#include "functions2.h"
#include <stdio.h>
int search_table(bucket** table,char* date){
    int h= hash(date);
    bucket* tmp=(list_search(table[h],date))->volume;
    if (tmp==NULL)
        return -1;
    return tmp->volume;
}