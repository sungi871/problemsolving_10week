#include<stdio.h>
#include<stdlib.h>
struct CAR{
    char name[20];
    int year;
}cars[2]={{"Avante",2007},{"sonata",2008}};

int main(){
    FILE *inFile;
    char line[100];

    inFile=fopen("/Users/admin/Downloads/input_files/cars.txt","w");
    if(inFile==NULL){
        printf("you can't open cars.txt");
        exit(1);
    }

    for (int i=0;i<2;i++){
        fprintf(inFile,"car name:%-20s year:%4d\n",cars[i].name,cars[i].year);
    }
    fclose(inFile);

    inFile=fopen("/Users/admin/Downloads/input_files/cars.txt","r"); //파일 내용을 다시 터미널에 출력하기 위해서는 r로 다시 열기
    while (fgets(line,sizeof(line),inFile)>0){
        printf("%s",line);
    }
    fclose(inFile);
    return 0;

}
