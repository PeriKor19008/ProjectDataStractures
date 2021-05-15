#include "functions2.h"
#include <stdio.h>
int height(node* node1){
    if (node1==NULL)
        return 0;
    return node1->height;
}