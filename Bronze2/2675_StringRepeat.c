#include<stdio.h>
#include<string.h>

/*
problem website
https://www.acmicpc.net/problem/2675

[Main Points]
1. int형 변수 2개, 문자열 하나를 선언한다.

2. 첫번째 줄에 테스트 케이스 개수 만큼 for문을 이용한다,

3. for문 안에서 반복횟수와 문자열을 입력받는다.

4. 또 안에 for문을 만든다. i는 문자열의 길이;

5. 그 안에 for(또는 while)을 이용하여 반복횟수만큼 출력한다.


[Solution]
1. 문자열 하나를 선언하여 입력을 받는다.

2. for문을 이용하여 문자열 앞 뒤에 있는 빈칸의 개수를 센다.

3. 반복문을 이용하여 문자열 전체의 빈칸의 개수를 세고 1을 더한다.

4. 전체 문자열 빈칸 - 앞 빈칸 - 뒤 빈칸
*/

int main(){
    int test, repeat, i, j, l;
    char s[20];

    scanf("%d", &test);

    for(i=0; i<test; i++){
        scanf("%d", &repeat);
        scanf("%s", s);
        for(j=0; j<strlen(s); j++){
            for(l=0; l<repeat; l++){
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }
}