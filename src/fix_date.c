#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"
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
