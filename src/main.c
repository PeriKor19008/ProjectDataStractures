#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"

///the main() is used for testing at this time

int main()
{
    int agn_size;
	struct day_value* agn=get_data("agn.us.txt",&agn_size);
    int ainv_size;
    struct day_value* ainv=get_data("ainv.us.txt",&ainv_size);
    int ale_size;
    struct day_value* ale=get_data("ale.us.txt",&ale_size);


    quick_sort(agn,0,agn_size);
    print(agn,agn_size);
    
}