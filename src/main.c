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

    printf("%f\n%d\n\n",agn[agn_size].open,agn_size);
    printf("%f\n%d\n\n",ainv[ainv_size].open,ainv_size);
    printf("%f\n%d\n\n",ale[ale_size].open,ale_size);

    
}