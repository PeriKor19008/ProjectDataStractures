#include <stdio.h>
#include "menu.h"

void Hashing();
void Volume();
void Date();
void selection();


void Part2(void){
    for (;;)
    {
        printf("\n\n\n            PART 2\n__________________________________\n");
        printf("Run a file: \n");
        printf("-agn.us.txt on a DDA    (press 1)\n");
        printf("-Hashing me alysides    (press 2)\n");
        printf("-Leave sub menu         (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);

        if(choice==1)
        {
            selection();
        }
        if(choice==2){
            Hashing();
        }

        else if(choice==0)
            break;

        else
            printf("You have entered an invalid choice. Please try again\n\n----------------------------------------\n\n");

    }

}



void Hashing(void){   //g ypoerwtima part2
    for (;;)
    {
        printf("\n\n\n              HASHING\n__________________________________\n");
        printf("-Search of Volume's value of the transaction by your choosen date    (press 1)\n");
        printf("-Change the Volume's Value of the record by your choosen date        (press 2)\n");
        printf("-Delete a record value by your choosen date                          (press 3)\n");
        printf("-Leave sub menu                                                      (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);

        if(choice==1)
        {

        }
        if(choice==2){

        }
        if(choice==3)
        {

        }

        else if(choice==0)
            break;

        else
            printf("You have entered an invalid choice. Please try again\n\n----------------------------------------\n\n");

    }

}


void Volume(void){ //b ypoerwtima part2
    for (;;)
    {
        printf("\n\n\n              VOLUME\n__________________________________\n");
        printf("-Find day(days) by the MINIMUM value of transaction   (press 1)\n");
        printf("-Find day(days) by the MAXIMUM value of transaction   (press 2)\n");
        printf("-Leave sub menu                                       (press 0)\n");
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

void Date(void){  //a ypoerwtima part2
    for (;;)
    {
        printf("\n\n\n              DATE\n__________________________________\n");
        printf("-Apeikonisi DDA me endodiatagmeni diaxisi             (press 1)\n");
        printf("-Search Value of Volume by your choosen date          (press 1)\n");
        printf("-Change Value of Volume by your choosen date          (press 3)\n");
        printf("-Delete a Value by your choosen date                  (press 4)\n");
        printf("-Leave sub menu                                       (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);

        if(choice==1)
        {

        }
        if(choice==2){

        }
        if(choice==3)
        {

        }
        if(choice==4){

        }

        else if(choice=0)
            break;

        else
            printf("You have entered an invalid choice. Please try again\n\n----------------------------------------\n\n");

    }

}



void selection(void){
    for (;;)
    {
        printf("\n\n\n              D.D.A\n__________________________________\n");
        printf("Select: \n");
        printf("-Date            (press 1)\n");
        printf("-Volume          (press 2)\n");
        printf("-Leave sub menu  (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);


        if(choice==1)
        {
            Date();
        }
        if(choice==2){
            Volume();
        }

        else if(choice==0)
            break;

        else
            printf("You have entered an invalid choice. Please try again\n\n----------------------------------------\n\n");

    }

}