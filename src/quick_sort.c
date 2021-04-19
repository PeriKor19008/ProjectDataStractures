#include "functions.h"
void quick_sort(value* list, int left, int right)
{
    int  leftArrow, rightArrow;
    float pivot;
    leftArrow = left;
    rightArrow = right;
    pivot = list[(left + right) / 2].open;
    do
    {
        while (list[rightArrow].open > pivot)
            --rightArrow;
        while (list[leftArrow].open < pivot)
            ++leftArrow;
        if (leftArrow <= rightArrow)
        {
            swap(list[leftArrow], list[rightArrow]);
            ++leftArrow;
            --rightArrow;
        }
    }
    while (rightArrow >= leftArrow);
    if (left < rightArrow)
        quick_sort(list, left, rightArrow);
    if (leftArrow < right)
        quick_sort(list, leftArrow, right);
}

