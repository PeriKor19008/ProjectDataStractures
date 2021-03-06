#include "functions.h"
#include <math.h>

int improved_bis(value* arr,int x,int low,int hi){



    hi--;
    int size=hi-low+1;
    long M=low+(size*(x-arr[low].date)/(arr[hi].date-arr[low].date));


    while (arr[M].date!=x){
        if (hi-low<=3){                 //if arr small then leaner search
            for (int j=0;j<hi-low;j++){

                if (arr[low+j].date==x)
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
            int j=1;
            while(arr[(M+(int)(m*pow(2,i)))-j*m].date>x)
                j++;

            hi=M+(m*pow(2,i))-((j-1)*m);
            low=hi-m;

        }
        if(arr[M].date>x){
            while(M>=(m*pow(2,i)) && arr[M-(int)(m*pow(2,i))].date>=x){
                i++;
            }
            int j=1;
            while(arr[M-(int)(m*pow(2,i))+(j*m)].date<x)
                j++;
            hi=M-(int)(m*pow(2,i))+(j*m);
            low=hi-m;

        }


        M=low+((hi-low)*(x-arr[low].date)/(arr[hi].date-arr[low].date));
    }
    if(arr[M].date==x)
        return arr[M].volume;
    return -1;
}
