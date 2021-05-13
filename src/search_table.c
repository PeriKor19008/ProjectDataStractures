#include "functions2.h"

int search_table(bucket** table,char* date){
    int h= hash(date);
    return ((list_search(table[h],date))->volume);
}