#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"
int fix_date(char* date){
    //returns days passed 2005-01-01
    int year;
    int month;
    int day;

   sscanf(date,"%d-%d-%d",&year,&month,&day);
   float days=((year-2005)*365)+((month-1)*30.4)+day-1;
   return (int)(days);
}
char* fix_date_rev(int date){
    int years=date/365 ;
    date-=years*365;
    int months = date/30.4;
    date-=months*30.4;
    int days=date;
    //int days=date-((years*365)+(months*30.4));
    years+=2005;
    months+=1;
    days+=1;
    char* sdate;
    sdate=(char*)malloc(sizeof(char)*11);
    sprintf(sdate,"%d-%d-%d",years,months,days);
    return sdate;
}


