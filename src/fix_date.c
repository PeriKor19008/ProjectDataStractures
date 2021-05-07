#include <stdio.h>
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
char fix_date_rev(int days){

}
