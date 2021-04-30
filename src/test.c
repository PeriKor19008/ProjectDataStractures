#include "functions.h"

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
int testvolume(value* arr,int size){
    for(int i=0;i<size;i++){
        if (arr[i].volume>arr[i+1].volume)
            return -1;
    }
    return 1;
}