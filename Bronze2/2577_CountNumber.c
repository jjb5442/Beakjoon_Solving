#include<stdio.h>
/*
problem website
https://www.acmicpc.net/problem/2577

[Main Points]
1. Multiply three integers.

2. Convert integer to char.

3. Count each number.


[Solution]
1. Multiply three integers.

2. delare an array(integer) of size 10, reset it to 0;

3. Count until num is non-zero.

4. Calculates ussing the remainder of num as the index value of the array.
*/
int main(){
    int a, b, c, num;

    scanf("%d %d %d", &a, &b, &c);

    num = a*b*c;

    int arr[10]={0,};

    int num1, i=0;

    while (num != 0)
    {
        num1= num%10;
        num = num/10;

        arr[num1]+=1;
    }
    
    for(i=0; i<10; i++){
        printf("%d ", arr[i]);    
    }

    return 0;
}