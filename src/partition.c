#include "functions.h"
int partition(value* array, int low, int high) {

    // select the rightmost element as pivot
    float pivot = array[high].open;

    // pointer for greater element
    int i = (low - 1);

    // traverse each element of the array
    // compare them with the pivot
    for (int j = low; j < high; j++) {
        if (array[j].open <= pivot) {

            // if element smaller than pivot is found
            // swap it with the greater element pointed by i
            i++;

            // swap element at i with element at j
            swap(array[i], array[j]);
        }
    }

    // swap the pivot element with the greater element at i
    swap(array[i + 1], array[high]);

    // return the partition point
    return (i + 1);
}