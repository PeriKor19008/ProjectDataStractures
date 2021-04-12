#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct day_value{
    int date;
    float open;
    float high;
    float low;
    float close;
    int volume;
    int openint;
    struct day_value* next;
    struct day_value* prev;
}value;


int fix_date(char* date){
    //time in day from 2000/1/1
    char year[4];
    for (int i=0;i<4;i++){
        year[i]=date[i];
    }
    
   float epoch= (atoi(year)-2000)*365.242199;
    char month [2];
    for (int i=0;i<2;i++){
        month[i]=date[i+5];
    }
    
    epoch=epoch+((atoi(month)-1)*30.4368499);
    char day[2];
    for(int i=0;i<2;i++){
        day[i]=date[i+8];
    }
    epoch=epoch+((atoi(day)-1));
    return (int)(epoch+0.5);
}



value* get_data(char* path){
    //open file
    FILE *fp;
    fp= fopen(path,"r");
    if(fp == NULL) {
      perror("Error in opening file");
      return(NULL);
    }
    
    value* arr=NULL;
    char tmp[50];
    float open,high,low,close;
    int volume,openint;
	int count = 0;
	value new_value;
    while(fgets((tmp),sizeof(tmp),fp)){
        fscanf(fp,"%[^,],%f,%f,%f,%f,%d,%d",tmp,&open,&high,&low,&close,&volume,&openint);
        new_value.date=fix_date(tmp);
        new_value.open=open;
        new_value.high=high;
        new_value.low=low;
        new_value.close=close;
        new_value.volume=volume;
        new_value.openint=openint;
        arr= (value*)realloc(arr,sizeof(value)*(count+1));
		arr[count]=new_value;
		count++;
    }
    
    
    
    
    return  arr;
}





int main()
{
	struct day_value* agn=get_data("agn.us.txt");
    
    printf("%f",agn[1].open);
    
}