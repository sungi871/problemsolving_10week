# 10주차 문제해결기법 복습
함수 기능은 모두 비슷
## putchar
수는 단일 문자를 출력할 때 사용하는 함수입니다. 표준 출력(일반적으로 화면)에 하나의 문자를 출력하는 데 유용합니다
putchar(int cahr)
## fprintf
데이터를 형식화하여 파일에 출력할 때 사용된다.
fprintf(/* 파일 포인터 변수명 */,/* 형식 지정 문자열(%d,%f..)*/,출력할 데이터)
## fputs

## fputc

## fscanf

fscaf(/* 파일 포인터 변수명*/, /* 형시ㅣㄱ 지정 문자열 */, /* &출력할 데이터 */)
## fgets

fgets(string-name/* 읽은 내용을 저장할 배열 */, n/* 읽을 최대 문자 수 */, file-pointer)
## fgetc

### 다른 점
 - 파일 포인터가 필요함
 - 마지막에 EOF필수
### EOF
#### fprintf
 - 함수가 0보다 큰 수를 반환했는지 확인하기. 성공적으로 읽었다면 읽은 항목의 개수를 반환함. 0보다 크면 성공적으로 읽었다는 뜻
 - 파일의 끝에 도달했을 때 0보다 큰 수를 반환하지 않고 EOF를 반환합니다. 보통 -1로 정의됨.
##### to test the end of file
 - if(fsacnf(inFile/* 파일포인터 */, "%d", &a) !=EOF)
 - if(fsacnf(inFile/* 파일포인터 */, "%d", &a) >0)
 - if(fsacnf(inFile/* 파일포인터 */, "%d", &a) ==1)
