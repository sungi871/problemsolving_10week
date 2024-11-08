#include<stdio.h>

int main(){
    int i;
    FILE *myFile; //myFile 포인터 변수 선언-->파일 작업 수행할 때 사용된다
    double price[2]={139.25,19.03};
    char *description[2]={"glove","CD"};

    myFile=fopen("/Users/admin/Downloads/input_files/price.dat","w");
    if (myFile == NULL){
        printf("\nFile Could Not Be Opened");
    }else {
        for (i=0;i<2;i+=1){
            fprintf(myFile,"%-9s %6.2f\n", description[i],price[i]);
        }
        fclose(myFile);
    }
    return 0;
}
