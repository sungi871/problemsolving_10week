#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *inFile;
    char line[100];
    int lcount=0;

    inFile=fopen("/Users/admin/Downloads/input_files/charstream.txt","r");
    if(inFile)==NULL){
        printf("File Could Not Be Opened.\n");
        exit(1);
    }
    while (fgets(line,sizeof(line),inFile)>0){
        lcount++;
        printf("Line %d: %s",lcount,line);
    }
    fclose(inFile);
    return 0;
}
