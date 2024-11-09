#include<stdio.h>

int main(){
    int i;
    FILE *myFile; //myFile 포인터 변수 선언-->파일 작업 수행할 때 사용된다
    double price[2]={139.25,19.03};
    char *description[2]={"glove","CD"};//두 상품의 이름을 저장하는 char 포인터 배열 선언,초기화

    myFile=fopen("/Users/admin/Downloads/input_files/price.dat","w");//price.dat파일을 쓰기 모드로 연다. 성공적으로 열리면 포인터 myFile반환, 실패시 NULL반환
    if (myFile == NULL){
        printf("\nFile Could Not Be Opened");
    }else {
        for (i=0;i<2;i+=1){
            fprintf(myFile,"%-9s %6.2f\n", description[i],price[i]);//파일이 열렸다면 description을 왼쪽 정렬로 9칸 출력하고 price를 소수점 두자리수까지 오른쪽 6칸 정렬
        }
        fclose(myFile);//오류 방지를 위해 파일을 닫아줌
    }
    return 0;
}
