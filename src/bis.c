#include "functions.h"
#include <math.h>

int bis(value* arr,int x,int low,int hi){


   //if array small then do linear search

    int size=hi;
    int M=low+((hi-low)*(x-arr[low].date)/(arr[hi].date-arr[low].date));


    while (arr[M].date!=x){
        if (hi-low<=3){
            for (int j=0;j<hi-low;j++){

                if (arr[j].date==x)
                    return arr[j].volume;
            }
            return -1;
        }
        int i=0;
        int m= sqrt(size);

        if(arr[M+m].date==x)
            return arr[M+m].volume;
        if(arr[M-m].date==x)
            return arr[M-m].volume;



        if(arr[M].date>x){
            while(arr[M-(m*i)].date>=x){
                i++;
            }
            low=M-(m*i);
            hi=low+m;
        }
        if(arr[M].date<x){
            while(arr[M+(m*i)].date<=x){
                i++;
            }
            hi=M+(m*i);
            low=hi-m;

        }

        M=low+((hi-low)*(x-arr[low].date)/(arr[hi].date-arr[low].date));
    }
    if(arr[M].date==x)
        return arr[M].volume;
    return -1;
}
