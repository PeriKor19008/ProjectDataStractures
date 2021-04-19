#include "functions.h"

void merge (value* arr,int l,int m , int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;

    //create temp arrays
    value L[n1], R[n2];
    //copy data to temp arrays
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    //merge two arrays
    i=0;
    j=0;
    k=l;
    while (i < n1 && j < n2) {
        if (L[i].open <= R[j].open) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

