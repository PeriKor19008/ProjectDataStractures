#include <stdio.h>
#include "menu.h"

void open();
void close();
void BIS();
void volume();

void Part1(void){
    for (;;)
    {
        printf("            PART 1\n__________________________________\n");
        printf("-Classification for open  (press 1)\n");
        printf("-Classification for close (press 2)\n");
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
        printf("-Binary Research         (press 1)\n");
        printf("-Anazitisi me Paremvoli  (press 2)\n");
        printf("-Leave sub menu          (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);

        if(choice==1)
        {

        }
        if(choice==2){

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

        if(choice==1)
        {

        }
        if(choice==2){

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

        if(choice==1)
        {

        }
        if(choice==2){

        }

        else if(choice==0)
            break;

        else
            printf("You have entered an invalid choice. Please try again\n\n----------------------------------------\n\n");

    }

}
