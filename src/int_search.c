#include "functions.h"

int int_search(value* arr,int x,int low,int hi){

    //we did not sort the array inside the function so tha we did not introduse more veriables
    //to the analysis of the algorithm later
    if(low<=hi && x>=arr[low].date && x<=arr[hi].date){
        int M=low+((hi-low)*(x-arr[low].date)/(arr[hi].date-arr[low].date));

        if(arr[M].date==x)
            return arr[M].volume;
        if(arr[M].date<x)
            return int_search(arr,x,M+1,hi);
        if(arr[M].date>x)
            return int_search(arr,x,low,M-1);
    }
    return "not found";
}