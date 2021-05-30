#include "functions.h"
#include <stdlib.h>
#include <math.h>
#include <string.h>
void countingsort(value* arr,int size){

    int count_size=findbigger(arr,size)+1;
    int* count=(int*) malloc((count_size)*sizeof(int)+1);
    //initialise count
    for (int i=0;i<count_size;i++){
        count[i]=0;
    }
    int tmp;
    for (int i=0; i<size; i++){
        tmp=(int)(arr[i].close + 0.5);
        count[tmp]++;
    }
    for(int i=1; i<count_size;i++){
       count[i] += count[i-1];
    }
    //now count contanes the posisiont eatch number must go
    //create temp array
    value* temp = (value*)malloc(sizeof(value)*(size));
    for(int i=size-1;i>=0;i--){
        int pos=(int)(arr[i].close +0.5);
        temp[count[pos]-1]=arr[i];
        count[pos]=count[pos]-1;
    }

    //memcpy(arr,temp,size*sizeof(value));
    for(int i=0;i<size;i++){
        arr[i]=temp[i];
    }

    free(temp);

}

