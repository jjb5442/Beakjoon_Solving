#include<stdio.h>
/*
problem website
https://www.acmicpc.net/problem/2750

[Main Points]
1. declare int array size of 1000, two int variable.
2. 첫째 줄에 수의 개수를 입력받고, 그 수만큼 for문을 이용해 배열에 수를 입력받는다.
3. 최솟값을 찾아 배열 맨앞에 넣는다. 그 다음 인덱스에 계속 반복해서 넣는다.


[Solution]
1. declare int array size of 1000, two int variable.
2. 첫째 줄에 수의 개수를 입력받고, 그 수만큼 for문을 이용해 배열에 수를 입력받는다.
3. 버블정렬을 이용해 오름차순으로 정렬한다.
(첫번째 for문 조건이 num-1, 두번째 for문 조건이 num-j-1을 생각해내는데 오래걸렸다.)
*/

int main(){
    int arr[1000];
    int num, tmp;

    scanf("%d", &num);

    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    for(int j=0; j<num-1; j++){
        for(int i=0; i<num-j-1; i++){
            if(arr[i] >= arr[i+1]){
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
    }
        
    for(int i=0; i<num; i++){
        printf("%d\n", arr[i]);
    }
}