#include "functions2.h"

int hash(char* date){
    int hash=0;
    for(int i=0;i<10;i++){
        hash+=date[i];
    }
    hash=hash%11;
    return hash;
}