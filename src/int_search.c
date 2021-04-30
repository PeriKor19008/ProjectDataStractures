#include "functions.h"

char* int_search(value* arr,int x,int low,int hi){
    if(testvolume(arr,hi)==-1){
        return "unsorted array";
    }
    //we did not sort the array inside the function so tha we did not introduse more veriables
    //to the analysis of the algorithm later
    if(low<=hi && x>=arr[low].volume && x<=arr[hi].volume){
        int M=low+((hi-low)*(x-arr[low].volume)/(arr[hi].volume-arr[low].volume));

        if(arr[M].volume==x)
            return arr[M].date;
        if(arr[M].volume<x)
            return int_search(arr,x,M+1,hi);
        if(arr[M].volume>x)
            return int_search(arr,x,low,M-1);
    }
    return "not found";
}