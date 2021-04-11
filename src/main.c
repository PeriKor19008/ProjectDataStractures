#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double** get_data(const char* path){
    //open file
    FILE *fp;
    fp= fopen(path,"r");
    if(fp == NULL) {
      perror("Error in opening file");
      return(-1);
    } 
    //create the dynamic array 
    char tmp[50];
    double** arr = (double**)malloc(sizeof(double*)*7);
    //read the first line (it has notihng important)
    fgets((tmp),sizeof(tmp),fp);
    int arr_size=0;


    



    //from line #2 
    while (fgets((tmp),sizeof(tmp),fp)){
        printf("%s",tmp);
        //put an extra line on the array
        for (int i= 0; i<7; i++){
            /////////realloc mayu change the address so realoc the entire arr
            arr[i]=(double*)realloc(arr[i],arr_size*sizeof(double*));
        }
        
        arr_size++;
        char data [10];
        int i=0;

        //initialase the data string
        for (int j=0;j<10;j++)   
            data[j]= '\0';       
        
        //look in the line read for the values to put in the array
        int count=0;
        while(tmp[i]){
            //if tmp[i]=',' then the number is completed so we put it in the array
            if(tmp[i]==','){
                arr[count][arr_size-1]=strtod(data,NULL);
                count++;
            }
            //if the next char (tmp[i+1]) is empty it means that the number  
            //and the line is completed
            else if(tmp[i+1]=='\0'){
                arr[count][arr_size-1]=strtod(data,NULL);
            }
            //else the char is just an other digit for the number so we append it to data
            else{
                const char x=tmp[i];
                strcat(data,x);
            }
        }
        
    }
    return(arr);
}
int main (){
    get_data("agn.us.txt");
}