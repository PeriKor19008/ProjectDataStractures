#include <stdio.h>
//#include <string.h>
#include <stdlib.h>
#include "functions.h"

value* get_data(char* path,int* count){
    //open file
    FILE *fp;
    fp= fopen(path,"r");
    if(fp == NULL) {
        perror("Error in opening file");
        return(NULL);
    }

    value* arr=NULL;
    char tmp[50];
    char temp[10];
    float open,high,low,close;
    int volume,openint;
     *count = 0;
    value new_value;
    fgets((tmp),sizeof(tmp),fp);
    while(fgets((tmp),sizeof(tmp),fp)){
        fscanf(fp,"%[^,],%f,%f,%f,%f,%d,%d",temp,&open,&high,&low,&close,&volume,&openint);

        new_value.date= fix_date(temp);
        new_value.open=open;
        new_value.high=high;
        new_value.low=low;
        new_value.close=close;
        new_value.volume=volume;
        new_value.openint=openint;
        arr= (value*)realloc(arr,sizeof(value)*(*count+1));
        arr[*count]=new_value;
        *count=*count+1;
    }
    fclose(fp);

    *count--;

    return  arr;
}