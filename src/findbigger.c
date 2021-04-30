#include "functions.h"
#include <limits.h>
int findbigger(value* arr, int size){
    int max = INT_MIN;
    for (int i=0;i<=size;i++){
        if (arr[i].close>max)
            //arr[i].close rounded to the closest int
            max=0.5+arr[i].close;
    }
    return max;
}