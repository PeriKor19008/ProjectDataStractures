#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct day_value{
    char* date[10];
    float open;
    float high;
    float low;
    float close;
    int volume;
    int openint;

}value;
void quick_sort(value* array, int low, int high);
int partition(value* array, int low, int high);
void swap(value x,value y);
void print(value* arr,int size);
void mergeSort(value* arr, int l, int r);
void merge (value* arr,int l,int m , int r);
int bin_search(value* arr,int value,int first,int last);//binary search at volume
int int_search(value* arr,int x,int low,int hi);//interpolation search at volume
int fix_date(char* date);//arguments: takes a date formated : YEAR/MO/DA (year/month/day)
						 //and returns the time in days sins 2000/01/01

					
value* get_data(char* path,int* count);//argument: path to txt file
										//returns pointer to list of structs


#endif