#include<stdio.h>
/*
problem website
https://www.acmicpc.net/problem/1712

[Main Points]
1. 고정비용, 가변비용, 판매비용, 총비용, 판매 수를 int형 변수로 선언

2. 고정비용+(가변비용*판매수) > 판매비용*판매수 조건이 만족할 동안 반복문을 이용해 판매수를 센다.


[Solution]
1. 고정비용, 가변비용, 판매비용, 판매 수를 int형 변수로 선언

2. 고정비용+(가변비용*판매수) = 판매비용*판매수 이 조건식을 판매수를 기준으로 정리한다.

3. 정리한 식을 바탕으로 나온 판매수는 총비용=총수입이 될 때이므로 +1을 한다.

4. 예외처리 기준은 적어도 판매비용이 가변비용보다 1원이라도 비싸야 한다.
*/

int main(){
    int fixed_cost, variable_cost, seling_cost, total;

    scanf("%d %d %d", &fixed_cost, &variable_cost, &seling_cost);

    if(variable_cost >= seling_cost){
        printf("-1");
        return 0;
    }

    total = fixed_cost/(seling_cost-variable_cost);

    printf("%d", total+1);
    
}