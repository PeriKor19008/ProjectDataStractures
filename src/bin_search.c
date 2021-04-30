#include "functions.h"
#include <stdio.h>
char* bin_search(value* arr,int x,int low,int hi){
    if(testvolume(arr,hi)==-1){
        return "unsorted array";
    }
    //we did not sort the array inside the function so tha we did not introduse more veriables
    //to the analysis of the algorithm later

    if(low<=hi){
        int mid= low+(hi-low)/2;
        //if x is at middle:
        if(arr[mid].volume==x)
            return arr[mid].date;
        //if x is smaller than value at middle:
        if(arr[mid].volume>x)
            return bin_search(arr,x,low,mid-1);
        //else x is bigger than value at middle:

        return bin_search(arr,x,mid+1,hi);
    }
    return "not found";
}

