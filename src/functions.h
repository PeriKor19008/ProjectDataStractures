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

}value;

int improved_bis(value* arr,int x,int low,int hi);
void countingsort(value* arr,int size);
int findbigger(value* arr, int size);
void bubbleSort(value* arr, int size);
int testopen(value* arr,int size);
int testdate(value* arr,int size);
int testclose(value* arr,int size);
void Heap_Sort(value* arr,int size);
void heapify(value* arr, int size,int i );
void quick_sort(value* array, int low, int high);
void swap(value* x,value* y);
void print(value* arr,int size);
char* fix_date_rev(int date);
void mergeSort(value* arr, int l, int r);
void merge (value* arr,int l,int m , int r);
int bis(value* arr,int x,int low,int hi); //binary interpolation search at volume needs sorted array
int bin_search(value* arr,int x,int low,int hi);//binary search at volume needs sorted array
int int_search(value* arr,int x,int low,int hi);//interpolation search at volume needs sorted array
int fix_date(char* date);//arguments: takes a date formated : YEAR/MO/DA (year/month/day)
						 //and returns the time in days sins 2000/01/01

					
value* get_data(char* path,int* count);//argument: path to txt file
										//returns pointer to list of structs


#endif