#include<stdio.h>
#include<stdlib.h>
void main(){
  FILE *myInFile, *myOutFile;
  char ch;

  myInFile=fopen("charstream.txt\n");
  if(myInFil==NULL){
    printf("Could noy open charstream.txt!\n");
    exit(1);
  }
  myOutFile=fopen("samedata.txt\n");
  if(myInFil==NULL){
     printf("Could noy open samedata.txt!\n");
     exit(1);
  }

  while((ch=fgetc(myInFile))!=EOF){
    fputc(ch, myOutFile);
  }
  fclose(myInFile);
  fclose(myOutFile);
}
