#include "functions.h"
#include <math.h>

int improved_bis(value* arr,int x,int low,int hi){



    hi--;
    int size=hi-low+1;
    long M=low+(size*(x-arr[low].date)/(arr[hi].date-arr[low].date));


    while (arr[M].date!=x){
        if (hi-low<=3){                 //if arr small then leaner search
            for (int j=0;j<hi-low;j++){

                if (arr[j].date==x)
                    return arr[j].volume;
            }
            return -1;
        }
        int i=0;
        int m= sqrt(hi-low);


        if(arr[M+m].date==x)
            return arr[M+m].volume;
        if(arr[M-m].date==x)
            return arr[M-m].volume;


        if(arr[M].date<x){
            while(M+(m*pow(2,i))<=size && arr[M+(int)(m*pow(2,i))].date<=x){
                i++;
            }

            hi=M+(m*pow(2,i));
            if(hi>size-1)
                hi=size-1;
            low=hi-m;
            if(low<0)
                low=0;
        }
        if(arr[M].date>x){
            while(M>=(m*pow(2,i)) && arr[M-(int)(m*pow(2,i))].date>=x){
                i++;
            }
            low=M-(m*pow(2,i));
            if(low<0)
                low=0;
            hi=low+m;
            if(hi>size-1)
                hi=size-1;
        }


        M=low+((hi-low)*(x-arr[low].date)/(arr[hi].date-arr[low].date));
    }
    if(arr[M].date==x)
        return arr[M].volume;
    return -1;
}
