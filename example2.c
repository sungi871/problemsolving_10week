#include <stdio.h>
#include <stdlib.h> // exit 함수를 사용하기 위한 헤더 추가

void main() {
    int a, sum = 0;
    FILE *inFile, *outFile;
    
    // 입력 파일 열기
    inFile = fopen("myinFile.txt", "r");
    if (inFile == NULL) {
        printf("Input file could not be opened.\n");
        exit(1);
    }
    
    // 출력 파일 열기
    outFile = fopen("myoutFile.txt", "w");
    if (outFile == NULL) {             //파일 생성을 못하는 경우가 생길 '수' 있으니 넣기
        printf("Output file could not be opened.\n");
       // 이 줄은  gpt가 넣음 fclose(inFile); // 입력 파일을 닫고 종료
        exit(1);
    }

    // 입력 파일에서 정수를 읽고 합산
  //Read and sum the integers from the input file and write the sum to the output file
    while (fscanf(inFile, "%d", &a) == 1) { // 파일 끝까지 반복
        sum += a;
    }
    
    // 결과를 출력 파일에 작성
    fprintf(outFile, "The sum is %d\n", sum);
    
    // 파일 닫기
    fclose(inFile);
    fclose(outFile);
}
