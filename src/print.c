#include "functions.h"
#include <stdio.h>
void print(value* arr,int size){
    for (int i=0;i<=size;i++){
        printf("%d,%f,%f,%f,%f,%d,%d\n",arr[i].date,arr[i].open,arr[i].high,arr[i].low,arr[i].close,arr[i].volume,arr[i].openint);
    }
}
