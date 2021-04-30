#include "functions.h"
void heapify(value* arr, int size,int i ) //i is the root
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<size && arr[left].close>arr[largest].close)
        largest=left;

    if(right<size && arr[right].close>arr[largest].close)
        largest=right;


    if(largest != i){
        swap(&arr[i],&arr[largest]);
        heapify(arr,size,largest);

    }

}