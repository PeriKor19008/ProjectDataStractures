#include "functions.h"
#include "functions2.h"
#include "menu.h"
#include <stdio.h>
#include <time.h>


int main() {

    double time=0;
    int x;
    for (int i=0;i<1000;i++){
        int size;
        value* arr= NULL;
        arr=get_data("agn.us.txt",&size);
        clock_t t=clock();
        x=bis(arr, fix_date("2005-03-02"),0,size);
        t=clock()-t;
        time= time+ ((double)t)/CLOCKS_PER_SEC;

    }
    time=time/1000;
    printf("%f\n",time);
    printf("%d",x);


}

