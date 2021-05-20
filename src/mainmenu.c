#include <stdio.h>
#include "menu.h"

void mainmenu(void){
    int input;

    printf("                              Hello ADMIN\n");
    printf("                  Welcome to Domes Dedomenwn Project 2021\n");

    do{

        printf("\n\n\n-Part 1                   (press 1)\n-Part 2                   (press 2)\n EXIT                     (press 3)\nTo terminate the programe (press 0)\n");
        printf("[Press]->");
        scanf("%d", &input);
        printf("----------------------------------------\n\n\n");
        if(input==0){
            return ; //program will be terminate
        }
        switch(input){
            case 1:
                if(input==1){
                    Part1();
                }
                break;
            case 2:
                if(input==2){
                    Part2();
                }
                break;
            case 3:
                if(input==3){
                    printf("Thank you!\n"); }
                break;

            default:
                printf("You have entered an invalid choice. Please try again\n\n----------------------------------------\n\n");
                break;
        }

    }while(input!='3');

}