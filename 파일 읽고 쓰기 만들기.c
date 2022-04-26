#include <stdio.h>

int main()
{
	//파일 사용하기: FILE *fp = fopen("파일명 혹은 파일 경로명", "모드 명령 부호");;

	FILE *fp = fopen("Savedat.dat", "w"); 
	
    //혹은

	FILE *fp;
	fp = fopen("Savedat.dat", "w");

	//모드 명령 부호 목록
	//r = 읽기, w = 쓰기, a = 파일존재시 열기, r+/w+ = 파일존재시 읽고 쓰기&없으면 에러반환,
	//a+ 파일존재시 맨끝에서 읽고 쓰기&없으면 새로 생성.
	//t = 파일을 텍스트모드로 열기, b = 파일을 이진(binary) 모드로 개방한다.
	/*
	-텍스트 모드 = [읽기] r / rt ,[쓰기] w / wt ,[추가] a / at
	-텍스트 갱신 모드 = [읽기] r+ / r+t ,[쓰기] w+ / w+t ,[추가] a+ / a+t
	-이진 모드 = [읽기]rb, [쓰기]wb, [추가]ab
	-이진 갱신 모드 = [읽기]r+b, [쓰기]w+b, [추가]a+b
	*/
	//항상 FILE 구조체와 *fp 포인터가 먼저 선언되어야 한다. fopen은 선언과 동시에 사용해도 되고 따로 선언해도 된다.
	fopen; //파일 열기, fopen("파일이름.확장명 / 드라이브라벨\:파일이름.확장명", "모드");
	fputs; fwrite; //파일에 특정 문자 쓰기, 되도록이면 fputs를 사용할 것 ㅣ fputs("문자", fp);
	fclose(fp);



	//파일 경로 써서 사용하기

	//파일 경로 추가시, 가장 루트의 드라이브 이름 + 파일이 존재하는 폴더 이름 + 파일이름으로 작성한다.
	//윈도우 경로 작성법하고는 다르게, 백슬래시를 두번 작성해줘야 한다.
	FILE* fp = fopen("C:\\Users\\illru\\Desktop\\Folders\\RPG WORLD\\RPG_WORLD\\SAVE\\test07152.txt", "w");

}