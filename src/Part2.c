#include <stdio.h>
#include "menu.h"
#include "functions.h"
#include "functions2.h"

void Hashing();
void Volume();
void Date();
void selection();
void selection2();


void Part2(void){
    for (;;)
    {
        printf("\n\n\n            PART 2\n__________________________________\n");
        printf("Choose Data Structure: \n");
        printf("-AVL tree        (press 1)\n");
        printf("-hashing         (press 2)\n");
        printf("-Leave sub menu  (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);

        if(choice==1)
        {
            selection();
        }
        else if(choice==2){
            selection2();
        }

        else if(choice==0)
            break;

        else
            printf("You have entered an invalid choice. Please try again\n\n----------------------------------------\n\n");

    }

}



void Hashing1(void){   //g ypoerwtima part2
    for (;;)
    {
        printf("\n\n\n    CHAIN_HASHING\n__________________________________\n");
        printf("-Search Volume by date    (press 1)\n");
        printf("-Change Volume by date    (press 2)\n");
        printf("-Delete date record       (press 3)\n");
        printf("-Leave sub menu           (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);
        bucket** table=NULL;
        table= create_hash_table("agn.us.txt",table);
        if(choice==1)
        {
            printf("Insert date :");
            printf("\n[Press]->");
            char date[10];
            scanf("%s",date);
            int tmp= search_table(table,date);
            if(tmp==-1)
                printf("date not found");
            else
                printf("the volume at %s was %d",date,tmp);
        }
        else if(choice==2){
            printf("Insert date :");
            printf("\n[Press]->");
            char date[10];
            scanf("%s",date);
            printf("Insert new value :");
            printf("\n[Press]->");
            int value;
            scanf("%d",&value);
            int tmp=change_volume(table,date,value);
            if(tmp==-1)
                printf("change failed-date not found");
            else
                printf("the volume was changed to:%d",tmp);
        }
        else if(choice==3)
        {
            printf("Input the date you wish to delete:");
            printf("\n[Press]->");
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


void Hashing2(void){   //g ypoerwtima part2
    for (;;)
    {
        printf("\n\n\n     TREE_HASHING\n__________________________________\n");
        printf("-Search Volume by date    (press 1)\n");
        printf("-Change Volume by date    (press 2)\n");
        printf("-Delete date record       (press 3)\n");
        printf("-Leave sub menu           (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);
        bucket2** table=NULL;
        table= create_hash_table2("agn.us.txt",table);
        if(choice==1)
        {
            printf("Insert date :");
            printf("\n[Press]->");
            char date[10];
            scanf("%s",date);
            bucket2* tmp= hash_search2(table,date,0);
            if(tmp==NULL)
                printf("date not found");
            else
                printf("the volume at %s was %d",tmp->date,tmp->volume);
        }
        else if(choice==2){
            printf("Insert date :");
            printf("\n[Press]->");
            char date[10];
            scanf("%s",date);
            printf("Input the new value you want to set");
            printf("\n[Press]->");
            int value;
            scanf("%d",&value);
            int tmp=hash_tree_replace(table,date,value);
            if(tmp==-1)
                printf("change failed-date not found");
            else
                printf("the volume was changed to:%d",tmp);
        }
        else if(choice==3)
        {
            printf("Input the date you wish to delete:");
            printf("\n[Press]->");
            char date[10];
            scanf("%s",date);
            int tmp=hash_tree_delete(table,date);
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
        printf("\n\n\n      VOLUME\n__________________________________\n");
        printf("-Find MINIMUM value of day(days)   (press 1)\n");
        printf("-Find MINIMUM value of day(days)   (press 2)\n");
        printf("-Leave sub menu                    (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);
        node* tree=NULL;
        tree= create_avl_tree(tree,"agn.us.txt",1);
        if(choice==1)
        {
            printf("%s", avl_find_min(tree)->sdate);
        }
        else if(choice==2){
            printf("%s", avl_find_max(tree)->sdate);
        }


        else if(choice==0)
            break;

        else
            printf("You have entered an invalid choice. Please try again\n\n----------------------------------------\n\n");

    }

}

void Date(void){  //a ypoerwtima part2
    node* tree=NULL;
    tree= create_avl_tree(tree,"agn.us.txt",0);
    for (;;)
    {
        printf("\n\n\n              DATE\n__________________________________\n");
        printf("-Print tree inorder                                   (press 1)\n");
        printf("-Search Value of Volume by your choosen date          (press 2)\n");
        printf("-Change Value of Volume by your choosen date          (press 3)\n");
        printf("-Delete a Value by your choosen date                  (press 4)\n");
        printf("-Leave sub menu                                       (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);

        if(choice==1)
        {
            print_inorder(tree);
        }
        else if(choice==2){

            printf("Input the date you want to search the volume for: ");
            printf("\n[Press]->");
            char d[10];
            scanf("%s",d);

            node* v=search(tree, fix_date(d));
            if(v==NULL)
                printf("date not fund");
            else
                printf("the volume for that date was:%d",v->data);

        }
        else if(choice==3)
        {
            printf("Input the date you want to change the volume");
            printf("\n[Press]->");
            char date [10];
            scanf("%s",date);
            printf("Input the new volume you want to set");
            printf("\n[Press]->");
            int v;
            scanf("%d",&v);
            node* tmp=avl_change_data(tree, fix_date(date),v);
            if (tmp==NULL)
                printf("date not found and change did not suched");
            else
                printf("change suched new volume:%d",tmp->data);
        }
        else if(choice==4){
            printf("Insert the date you wish to delete");
            printf("\n[Press]->");
            char date[10];
            scanf("%s",date);
            tree=delete_node(tree, fix_date(date));
        }

        else if(choice==0)
            return;

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
        else if(choice==2){
            Volume();
        }

        else if(choice==0)
            break;

        else
            printf("You have entered an invalid choice. Please try again\n\n----------------------------------------\n\n");

    }

}

void selection2(){
    for (;;)
    {
        printf("\n\n\n              HASHING\n__________________________________\n");
        printf("Select: \n");
        printf("-Chain Hahshing       (press 1)\n");
        printf("-Tree  Hashing        (press 2)\n");
        printf("-Leave sub menu       (press 0)\n");
        printf("[Press]->");
        int choice;
        scanf("%d", &choice);


        if(choice==1)
        {
            Hashing1();
        }
        else if(choice==2){
            Hashing2();
        }

        else if(choice==0)
            break;

        else
            printf("You have entered an invalid choice. Please try again\n\n----------------------------------------\n\n");

    }

}