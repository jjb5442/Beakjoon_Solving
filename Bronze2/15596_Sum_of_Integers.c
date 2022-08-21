#include<stdio.h>
/*
problem website
https://www.acmicpc.net/problem/2750

[Main Points]
1. 크기 3,000,000 int array.

2. 자료형에 유의할 것!

[Solution]
*/
long long sum(int *a, int n);

int main(){
    int n;
    long long result;

    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    result = sum(arr, n);

    printf("%lld", result);

}

long long sum(int *a, int n){
    long long sum=0;

    for(int i=0; i<n; i++){
        sum = sum + a[i];
    }

    return sum;
}