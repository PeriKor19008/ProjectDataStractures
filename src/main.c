#include "functions.h"
#include "functions2.h"
#include "menu.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {

    double time=0;

    value* arr=NULL;
    int size=0;
    arr= get_data("agn.us.txt",&size);

    clock_t t=clock();
    int x= improved_bis(arr, fix_date("2005-03-02"),0,size);
    printf("%d",x);
    t=clock()-t;
    time=  ((double)t)/CLOCKS_PER_SEC;



    printf("%f\n",time);



}

