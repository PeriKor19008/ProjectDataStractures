#include <stdio.h>
#include "menu.h"
#include "functions.h"

void open();
void close();
void BIS();
void volume();
char* choose_file(void);

void Part1(void){
    for (;;)
    {
        printf("            PART 1\n__________________________________\n");
        printf("-Classification for open  (press 1)\n");   //change
        printf("-Classification for close (press 2)\n");   //change
        printf("-Volume finding           (press 3)\n");
        printf("-BIS                      (press 4)\n");
        printf("-Leave sub menu           (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);


        if(choice==1)
        {
            open();
        }
        if(choice==2){
            close();
        }

        if(choice==3){
            volume();
        }

        if(choice==4){
            BIS();
        }
        else if(choice==0)
            break;

        else
            printf("You have entered an invalid choice. Please try again\n\n----------------------------------------\n\n");

    }

}

void BIS(void){ //4o ypoerwtima part1
    for (;;)
    {
        printf("\n\n\n            BIS\n__________________________________\n");
        printf("-time test      (press 1)\n");
        printf("-Leave sub menu (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf(" %d", &choice);

        if(choice==1)
        {
            value* arr=NULL;
            int size;
            arr= get_data("agn.us.txt",&size);
            char x[10];
            printf("input the date you want to search");
            scanf("%s",x);
            int v=bis(arr, fix_date(x),0,size);
            if(v==-1)
                printf("not found");
            printf("%d",v);



        }

        else if(choice==0)
            break;

        else
            printf("You have entered an invalid choice. Please try again\n\n----------------------------------------\n\n");

    }

}

void volume(void){  //3o ypoerwtima part1
    for (;;)
    {
        printf("\n\n\n          VOLUME FINDING\n__________________________________\n");
        printf("-Binary search         (press 1)\n");
        printf("-Interpolation search  (press 2)\n");
        printf("-Leave sub menu          (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);
        value* arr=NULL;
        int size;
        arr= get_data("agn.us.txt",&size);
        char x[10];
        printf("input the date you want to search");
        scanf("%s",x);
        if(choice==1)
        {

            int v= bin_search(arr, fix_date(x),0,size);
            if(v==-1)
                printf("not found");
            printf("%d",v);
        }
        if(choice==2){
            int v= int_search(arr, fix_date(x),0,size);
            if(v==-1)
                printf("not found");
            printf("%d",v);
        }

        else if(choice==0)
            break;

        else
            printf("You have entered an invalid choice. Please try again\n\n----------------------------------------\n\n");

    }

}


void close(void){  //2o ypoerwtima part1
    for (;;)
    {
        printf("\n\n\n       CLASSIFICATION FOR CLOSE\n__________________________________\n");
        printf("-Heap Sort      (press 1)\n");
        printf("-Counting Sort  (press 2)\n");
        printf("-Leave sub menu (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);
        value* arr=NULL;
        int size;
        arr= get_data(choose_file(),&size);
        if(choice==1)
        {

            Heap_Sort(arr,size);
            print(arr,size);
        }
        if(choice==2){
            quick_sort(arr,0,size);
            print(arr,size);
        }

        else if(choice==0)
            break;

        else
            printf("You have entered an invalid choice. Please try again\n\n----------------------------------------\n\n");

    }

}



void open(void){  //1o ypoerwtima part1
    for (;;)
    {
        printf("\n\n\n       CLASSIFICATION FOR OPEN\n__________________________________\n");
        printf("-Merge Sort     (press 1)\n");
        printf("-Quick Sort     (press 2)\n");
        printf("-Leave sub menu (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);
        value* arr=NULL;
        int size;
        arr= get_data(choose_file(),&size);
        if(choice==1)
        {
            //merge sort

            mergeSort(arr,0,size);
            print(arr,size);
        }
        if(choice==2){
            //quick sort

            quick_sort(arr,0,size);
            print(arr,size);
        }

        else if(choice==0)
            break;

        else
            printf("You have entered an invalid choice. Please try again\n\n----------------------------------------\n\n");

    }


}
char* choose_file(void){
    int choise;
    printf("input which file you wish to open\n"
           "(1) for agn\n (2) for ainv\n (3) for ale\n");
    do{
        scanf("%d",&choise);
        if(choise==1)
            return "agn.us.txt";
        else if(choise==2)
            return "ainv.us.txt";
        else if(choise==3)
            return "ale.us.txt";
        printf("wrong input no such file\n");
    }while( choise!=1&&choise!=2&&choise!=3);

}