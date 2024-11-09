#include<stdio.h>
#include<stdlib.h>
struct CAR{
    char name[20];
    int year;
    double price;
}cars[4]={{"Avante",2007,13000.00},{"sonata",2008,18000.00},{"SM7",2009,22000.00},{"Eqaus",2010,35000.00}};

int main(){
    FILE *inFile;
    char line[100];

    inFile=fopen("/Users/admin/Downloads/input_files/cars2.txt","w");
    if(inFile==NULL){
        printf("you can't open cars.txt");
        exit(1);
    }
    //파일 안에 ----\n|name  |year   |price    |\n-------
    fprintf(inFile,"--------------------------------------\n|NAME                |YEAR|PRICE     |\n--------------------------------------\n");
    for (int i=0;i<4;i++){
        fprintf(inFile,"|%-20s|%4d|%10.2f|\n",cars[i].name,cars[i].year,cars[i].price);
    }
    fprintf(inFile,"--------------------------------------");
    fclose(inFile);

    inFile=fopen("/Users/admin/Downloads/input_files/cars2.txt","r");
    while (fgets(line,sizeof(line),inFile)>0){
        printf("%s",line);
    }
    fclose(inFile);
    return 0;

}
