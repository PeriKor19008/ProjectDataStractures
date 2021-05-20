#include <stdio.h>
#include "menu.h"
#include "functions.h"
#include "functions2.h"

void Hashing();
void Volume();
void Date();
void selection();


void Part2(void){
    for (;;)
    {
        printf("\n\n\n            PART 2\n__________________________________\n");
        printf("Run a file: \n");
        printf("-AVL tree    (press 1)\n");
        printf("-Chain hashing    (press 2)\n");
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
        bucket** table=NULL;
        table= create_hash_table("agn.us.txt",table);
        if(choice==1)
        {
            printf("insert the date you want to search the volume for");
            char date[10];
            scanf("%s",date);
            int tmp= search_table(table,date);
            if(tmp==-1)
                printf("date not found");
            else
                printf("the volume at %s was %d",date,tmp);
        }
        if(choice==2){
            printf("input the date you want to change the volume");
            char date[10];
            scanf("%s",date);
            printf("input the new value you want to set");
            int value;
            scanf("%d",&value);
            int tmp=change_volume(table,date,value);
            if(tmp==-1)
                printf("change failed-date not found");
            else
                printf("the volume was changed to:%d",tmp);
        }
        if(choice==3)
        {
            printf("input the date you wish to delete:");
            char date[10];
            scanf("%s",date);
            int tmp=delete_bucket(table,date);
            if(tmp==-1)
                printf("deletion failed-date not found");
            else
                printf("deleted successfully");
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
        node* tree=NULL;
        tree= create_avl_tree(tree,"agn.us.txt",1);
        if(choice==1)
        {
            printf("%s", avl_find_min(tree)->sdate);
        }
        if(choice==2){
            printf("%s", avl_find_max(tree)->sdate);
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
        printf("-print tree inorder                                   (press 1)\n");
        printf("-Search Value of Volume by your choosen date          (press 1)\n");
        printf("-Change Value of Volume by your choosen date          (press 3)\n");
        printf("-Delete a Value by your choosen date                  (press 4)\n");
        printf("-Leave sub menu                                       (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);
        node* tree=NULL;
        tree= create_avl_tree(tree,"agn.us.txt",0);
        if(choice==1)
        {
            print_inorder(tree);
        }
        if(choice==2){

            printf("input the date you want to search the volume for: ");
            char d[10];
            scanf("%s",d);
            int v=search(tree, fix_date(d));
            if(v==-1)
                printf("date not fund");
            else
                printf("the volume for that date was:%d",v);

        }
        if(choice==3)
        {
            printf("input the date you want to change the volume");
            char date [10];
            scanf("%s",date);
            printf("input the new volume you want to set");
            int v;
            scanf("%d",&v);
            node* tmp=avl_change_data(tree, fix_date(date),v);
            if (tmp==NULL)
                printf("date not found and change did not suched");
            else
                printf("change suched new volume:%d",tmp->data);
        }
        if(choice==4){
            printf("insert the date you wish to delete");
            char date[10];
            scanf("%s",date);
            tree=delete_node(tree, fix_date(date));
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