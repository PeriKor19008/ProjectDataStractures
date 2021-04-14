#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"

///the main() is used for testing at this time

int main()
{
    int agn_size=999;
	struct day_value* agn=get_data("agn.us.txt",&agn_size);
    printf("%f\n%d",agn[0].open,agn_size);

    
}