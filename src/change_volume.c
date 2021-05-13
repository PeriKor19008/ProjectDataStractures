#include "functions2.h"
#include <stdio.h>

int change_volume(bucket** table,char* date, int new_vol){
    int h= hash(date);
    if(list_search(table[h],date)!=NULL){
        (list_search(table[h],date))->volume=new_vol;
        return ((list_search(table[h],date))->volume);
    }
    return -1;

}