#include "functions2.h"

int d_hash(char* date ,int mode){
    int hash=0;
    for(int i=0;i<10;i++){
        hash+=date[i];
    }
    int temp=date[6]+date[8]+date[9];
    temp=temp*mode;
    hash+=temp;
    hash=hash%11;
    return hash;
    };

