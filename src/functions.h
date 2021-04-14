#ifndef FUNCTIONS_H
#define FUNCTIONS_H

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
int fix_date(char* date);//arguments: takes a date formated : YEAR/MO/DA (year/month/day)
						 //and returns the time in days sins 2000/01/01

					
value* get_data(char* path,int* count);//argument: path to txt file
										//returns pointer to list of structs

#endif