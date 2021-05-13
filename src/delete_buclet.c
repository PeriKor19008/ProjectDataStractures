#include "functions2.h"
#include <stdio.h>

int delete_bucket(bucket** table,char* date){
    int h = hash(date);
    return delete_from_list(table[h],date);
}
