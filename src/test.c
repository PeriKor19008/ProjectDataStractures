#include "functions.h"
#include <stdio.h>
int testopen(value* arr,int size){
    for(int i=0;i<size;i++){
        if (arr[i].open>arr[i+1].open)
            return -1;
    }
    return 1;
}
int testclose(value* arr,int size){
    for(int i=0;i<size;i++){
        if (arr[i].close>arr[i+1].close)
            return -1;
    }
    return 1;
}
int testdate(value* arr,int size){
    for(int i=0;i<size;i++){
        if (arr[i].date>arr[i+1].date)
            printf("%d\n",i);
    }
    return 1;
}