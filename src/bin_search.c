#include "functions.h"
#include <stdio.h>
int bin_search(value* arr,int x,int low,int hi){



    if(low<=hi){
        int mid= low+(hi-low)/2;
        //if x is at middle:
        if(arr[mid].date==x)
            return arr[mid].volume;
        //if x is smaller than value at middle:
        if(arr[mid].date>x)
            return bin_search(arr,x,low,mid-1);
        //else x is bigger than value at middle:

        return bin_search(arr,x,mid+1,hi);
    }
    return -1;
}

