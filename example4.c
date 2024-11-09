#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *inFile;
    char ch;

    inFile=fopen("charstream.txt","r");
    if(inFile==NULL){
        printf("Could Not open charstream.txt!\n");
        exit(1);
    }
    while((ch=fgetc(inFile))!=EOF){
        putchar(ch);
    }
    printf("\nFinished printing the file \n");
    fclose(inFile);

    return 0;
}
