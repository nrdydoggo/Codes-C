#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
/*
int test()
{
    //공백포함 입력받기: "%[^\n]s"
    unsigned char in1[80];
    scanf("%s", in1); //문자열을 입력받을 땐, scanf함수를 쓸 때 &함수이름 형식이 아니다.
    printf("%s", in1);
}
*/


int main()
{
/*
문자열을 입력하면 입력한 문자의 자리수만큼 인덱스를 
카운트하고, 각 배열의 아스키코드와 문자를 출력
그 후 아스키코드를 호출해서 특정 문자가 나오면 
거기에 맞는 메세지가 뜨고, 그 외엔 정해진 문자를 출력
*/

    int lcount = 0;
    int count = 0;
    char string[80] = { 0 };
    printf("루프 종결조건 입력:");
    scanf_s("%d", &lcount);
    for (int i = 0; i <= lcount*2; i++) //종결조건(횟수)을 입력하면 거기에 절반밖에 실행이안되므로 *2.
    {
        if (lcount == 0)
            printf("\nError, 종결값은 시작값과 같을 수 없습니다.\n\n");//0을입력해버리면 반복문조건자체가 성립이안됨
            scanf("%c", &string[i]);
    }
    for (int c = 0; c <= 5; c++)//이 반복문이 종결하는 조건을 문자가 입력되는 인덱스 만큼으로 만들어 볼 것.(현재는 임의의숫자)
        printf("\n\n%d", string[c]);//문자열 배열의 문자가 입력된 인덱스를 각각 호출해서 아스키를 출력하기 위해 반복문을 사용.
        
 }


