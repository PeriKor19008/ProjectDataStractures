#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct day_value{
    int date;
    float open;
    float high;
    float low;
    float close;
    int volume;
    int openint;
    struct day_value* next;
    struct day_value* prev;
};






struct day_value* get_data(char* path,struct day_value* arr){
    //open file
    FILE *fp;
    fp= fopen(path,"r");
    if(fp == NULL) {
      perror("Error in opening file");
      return(NULL);
    }
    
    struct day_value* head=NULL;
    struct day_value* tail=NULL;
    char tmp[50];
    float open,high,low,close;
    int volume,openint;
	int count = 0;
    while(fgets((tmp),sizeof(tmp),fp);){
        fscanf(fp,"%[^,],%f,%f,%f,%f,%d,%d",tmp,&open,&high,&low,&close,&volume,&openint);
        struct day_value* new_value= malloc(sizeof(day_value));
        new_value->date=fix_date(tmp);
        new_value->open=open;
        new_value->high=high;
        new_value->low=low;
        new_value->close=close;
        new_value->volume=volume;
        new_value->openint=openint;
        arr= (struct day_value*)realloc(arr,sizeof(struct day_value));
		arr[count]=new_value;
    }
    
    
    
    
    return  arr;
}





int main()
{
	struct day_value* agn=get_data("agn.us.txt");
    
    
    
}