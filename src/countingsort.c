#include "functions.h"
#include <stdlib.h>
void countingsort(value* arr,int size){

    int count_size=findbigger(arr,size);
    int count[count_size];
    //initialise count
    for (int i=0;i<count_size;i++){
        count[i]=0;
    }
    int tmp;
    for (int i=0; i<=size; i++){
        tmp=arr[i].close = 0.5;
        count[tmp]++;
    }
    for(int i=1; i<count_size;i++){
        count[i] += count[i-1];
    }
    //now count contanes the posisiont eatch number must go
    //create temp array
    value* temp = (value*)malloc(sizeof(value)*(size+1));
    for(int i=0;i<=size;i++){
        int pos=arr[i].close =0.5;
        temp[count[pos]]=arr[i];
        count[pos]--;
    }

    arr=temp;
}

