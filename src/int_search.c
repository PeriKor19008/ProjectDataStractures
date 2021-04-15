#include "functions.h"

int int_search(value* arr,int x,int low,int hi){

    if(low<=hi && x>=arr[low].volume && x<=arr[hi].volume){
        int M=low+((hi-low)*(x-arr[low].volume)/(arr[hi].volume-arr[low].volume));

        if(arr[M].volume==x)
            return x;
        if(arr[M].volume<x)
            return int_search(arr,x,M+1,hi);
        if(arr[M].volume>x)
            return int_search(arr,x,low,M-1);
    }
    return -1;
}