#include<stdio.h>
#include<string.h>

/*
problem website
https://www.acmicpc.net/problem/3052

[Main Points]
1. 문자열 하나를 선언하여 입력을 받는다.

2. 반복문을 이용하여 빈칸의 개수를 세고 1을 더한다.


[Solution]
1. 문자열 하나를 선언하여 입력을 받는다.

2. for문을 이용하여 문자열 앞 뒤에 있는 빈칸의 개수를 센다.

3. 반복문을 이용하여 문자열 전체의 빈칸의 개수를 세고 1을 더한다.

4. 전체 문자열 빈칸 - 앞 빈칸 - 뒤 빈칸
*/

int main(){
    char arr[1000000];
    int count=0, front=0, behind=0;

    scanf("%[^\n]s", arr);

    for(int i=0; arr[i] ==' '; i++) front++;
    // printf("front = %d\n", front);

    for(int i=strlen(arr)-1; arr[i]==' '; i--) behind++;
    // printf("behind = %d\n", behind);

    for(int i=0; i<strlen(arr); i++){
        if(arr[i] == ' ') count++;
    }
    count = count-front-behind;
    printf("%d", count+1);
}