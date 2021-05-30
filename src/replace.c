#include "functions2.h"
#include <stdio.h>

bucket2* replace(bucket2* b,float dist){
    if(b->next_level==NULL){
        return b;
    }
    int index=11*dist;
    bucket2* r=NULL;
    bucket2** level=NULL;
    level=b->next_level;
    if(level[index]==NULL){
        for(int i=1;i<10;i++){
            if(i+index<=10){
                if(level[index+i]!=NULL){
                    r=level[index+i];
                    return replace(level[index+i],dist);
                }
            }
            if(index-i>=0){
                if(level[index-i]!=NULL){
                    r=level[index-i];
                    return replace(level[index-i],dist);
                }
            }
    }


}
    return replace(level[index],dist);
}