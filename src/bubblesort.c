#include "functions.h"
void bubbleSort(value* arr, int size)
{
    int i, j;
    int swaped=0;
    for (i = 0; i <= size-1; i++) {

        // Last i elements are already in place
        for (j = 0; j <=size - i - 1; j++) {
            if (arr[j].volume > arr[j + 1].volume) {
                swap(&arr[j], &arr[j + 1]);
                swaped = 1;
            }
        }
        if (swaped==0){
            break;
        }
    }
}