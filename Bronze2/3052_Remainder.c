#include<stdio.h>
#include <stdlib.h>

/*
problem website
https://www.acmicpc.net/problem/3052

// Jeoun

[Main Points]
1. array size of 10 3개

2. calculate remainder 42

3. 나머지가 모여 있는 배열 그리고 다른 배열에 하나씩 넣는다.
넣을 때마다 그 전에 중복된게 있으면 안 넣음.


[Solution]
1. Multiply three integers.

2. delare an array(integer) of size 10, reset it to 0;

3. Count until num is non-zero.

4. Calculates ussing the remainder of num as the index value of the array.

*/
int main(){
    int arr[10];
    int rem[10];
    int i, count =0, a=0;

    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
        rem[i] = arr[i]%42;
    }

    for(i=0; i<10; i++){
        count =0;
        for(int j=0; j<i; j++){
            if(rem[i] == rem[j]) count++;
        }
        if (count == 0) a++;
    }

    printf("%d", a);
    
    return 0;
}

// Jae Bin

[Main Points]

1. Initalize the array[42] to 0

2. Increase array[i] if Remainder is i

3. Count array values bigger than 0

[Solution]
1. Same as Main Points

*/
int main()
{
    int remainder[42] = {
        0,
    };
    int num, remain = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        remainder[num % 42]++;
    }
    for (int i = 0; i < 42; i++)
    {
        if (remainder[i] > 0)
            remain++;
    }
    printf("%d", remain);

    return 0;
}