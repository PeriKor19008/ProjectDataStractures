#include "functions.h"
void quick_sort(value* arr, int left, int right)
{
    int  leftArrow, rightArrow;
    float pivot;
    leftArrow = left;
    rightArrow = right;
    pivot = arr[(left + right) / 2].open;
    do
    {
        while (arr[rightArrow].open > pivot)
            --rightArrow;
        while (arr[leftArrow].open < pivot)
            ++leftArrow;
        if (leftArrow <= rightArrow)
        {
            swap(&arr[leftArrow], &arr[rightArrow]);
            ++leftArrow;
            --rightArrow;
        }
    }
    while (rightArrow >= leftArrow);
    if (left < rightArrow)
        quick_sort(arr, left, rightArrow);
    if (leftArrow < right)
        quick_sort(arr, leftArrow, right);
}

