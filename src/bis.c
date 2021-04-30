#include "functions.h"
#include <math.h>

char* bis(value* arr,int x,int low,int hi){
    if(testvolume(arr,hi)==-1){
        return "unsorted array";
    }
    //we did not sort the array inside the function so tha we did not introduse more veriables
    //to the analysis of the algorithm later
    int size=hi;
    long M=low+((hi-low)*(x-arr[low].volume)/(arr[hi].volume-arr[low].volume));

   int i=1;
    while (arr[M].volume!=x && i<sqrt(x)){

       int m= sqrt(size)*i;
       if(arr[M+m].volume==x)
           return arr[M+m].date;
       //if size of remaining array is small (3) we do a low cost linear search
       if(hi-low==3){
           for (int j=0;j<hi-low;j++){
               if (arr[j].volume==x)
                   return arr[j].date;
           }
           //failure to find any
           return "not found";
       }
       //check if x is in the next or previous sqrt
       //if it is in the next:
       if (arr[M+m].volume<x){
           low=M;
           hi=M+m;
           bis(arr,x,low,hi);
       }
       if(M>=m && arr[M-m].volume>x){
           hi=M;
           low=M-m;
           bis(arr,x,low,hi);
       }
       i++;
    }
    return "not found";
}
