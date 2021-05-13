#include <stdio.h>
#include "functions2.h"
#include "functions.h"

///the main() is used for testing at this time



int main()
{
    value* agn=NULL;
    int a;
    node* agn_tree=NULL;
    node* ainv_tree=NULL;
    node* ale_tree=NULL;


    create_avl_tree(agn_tree,"agn.us.txt");
    print_inorder(agn_tree);
}