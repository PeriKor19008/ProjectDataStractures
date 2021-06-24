#include "functions.h"
#include "functions2.h"
#include "menu.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {

    double time=0;
    clock_t t;
    int x;
    value* arr=NULL;
    int size=0;
    int r;
    arr= get_data("agn.us.txt",&size);
    for (int i=0;i<1000;i++){

        t=clock();
        x=0;
        x= fix_date("2005-03-02");
        improved_bis(arr,x,0,size);
        t=clock()-t;
        time=time+  ((double)t)/CLOCKS_PER_SEC;
    }


    printf("%f\n%d",time,r);




}