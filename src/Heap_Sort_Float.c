#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"


//Paratiriseis: 1.na ftiaksw main
//2.na dw to length
//3.na gyrisw toumpa tis seires


public void Heap_Sort(value* arr)
{

    //length of the .Close   
    int size=arr[]; // thelei douleia
    //opou length prepei na to koitaksw




    //Build Heap
    for (int i=size/2-1 ; i>=0 ;i--)
        heapify(value* arr, size, i)

    //Once by one extract an ellement from heap
    for(int i= size-1; i>0; i--){
        int temp=arr[0].Close;
        arr[0].Close=arr[i].Close;
        arr[i].Close=temp;


    //call max heapify on the reduced heap
        heapify(value* arr,i,0);

    }

}


void heapify(value* arr, int size, float i) //i is the root
{
    float big =i; //Make the largest number root
    float left=2* i +1; 
    float right= 2*i+2;

    //if left child is larger than root
    if(left<size && arr[left].Close >arr[big].Close )
    big=left;

    //If right child is larger
    if(right<size && arr[right].Close >arr[big].Close)
    big=right;

    //if big isn't root
    if(big != i){
        float swap = arr[i].Close;
        arr[i].Close=arr[big].Close;
        arr[big].Close=swap;


//prepei na ginei prosthiki tis allagis twn seirwn! ! !

        //sub tree
        heapify(value* arr,size,big);
        }
}
