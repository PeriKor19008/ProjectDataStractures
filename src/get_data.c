struct day_value* get_data(char* path){
    //open file
    FILE *fp;
    fp= fopen(path,"r");
    if(fp == NULL) {
      perror("Error in opening file");
      return(NULL);
    }
    
    struct day_value* head=NULL;
    struct day_value* tail=NULL;
    char tmp[50];
    float open,high,low,close;
    int volume,openint;
    while(fgets((tmp),sizeof(tmp),fp);){
        fscanf(fp,"%[^,],%f,%f,%f,%f,%d,%d",tmp,&open,&high,&low,&close,&volume,&openint);
        struct day_value* new_value= malloc(sizeof(day_value));
        new_value->date=fix_date(tmp);
        new_value->open=open;
        new_value->high=high;
        new_value->low=low;
        new_value->close=close;
        new_value->volume=volume;
        new_value->openint=openint;
        list_append(head,tail,new_value);
    }
    
    
    
    
    return  head;
}