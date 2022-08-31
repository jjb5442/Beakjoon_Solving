#include<stdio.h>
#include<string.h>

/*
problem website
https://www.acmicpc.net/problem/2908

[Main Points]
1. int형 변수 3개.

2. 큰 세자리 정수를 거꾸로 출력한다.

3. 두개의 세자리 정수 크기를 비교한다.

[Solution]
1. int 배열 3개, int형변수 1개

2. 배열을 통해 정수 2개를 입력 받는다.

3. for문을 이용하여 두 정수를 거꾸로 만든다.

4. for문을 이용하여 배열에서 일반 정수로 만들어 비교한다.
*/

int main(){
    int num[2];
    int sum[2]={0,};
    int big;
    int ans[3];

    scanf("%d %d", &num[0], &num[1]);

    for(int i=0; i<2; i++){
        ans[0] = num[i]%10;
        ans[1] = num[i]/10%10;
        ans[2] = num[i]/100;
        int a=100;
        for(int j=0; j<3; j++){
            sum[i] = sum[i] + a*ans[j];
            a=a/10;
        }
        // printf("%d\n", sum[i]); 
    }
    
    big = (sum[0] > sum[1]) ? sum[0] : sum[1];

    printf("%d", big);
}