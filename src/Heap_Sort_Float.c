#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"


 void Heap_Sort(value* arr,int size)
{
    
    //Build Heap
    for (int i=size/2-1 ; i>=0 ;i--)
        heapify(arr, size, i)

    //Once by one extract an ellement from heap
    for(int i= size-1; i>0; i--){
        swap(arr[i],arr[0]);
    

    //call max heapify on the reduced heap
        heapify(arr,i,0);

    }

}


