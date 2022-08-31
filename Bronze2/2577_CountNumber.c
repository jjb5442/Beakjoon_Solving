#include<stdio.h>
#include <stdlib.h>

/*
problem website
https://www.acmicpc.net/problem/2577

// Jeoun

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

// Jae Bin

[Main Points]
1. Name the variable 'multi' and get the value A X B X C

2. Create an array to store the count of each number

3. Count and print each number

[Solution]
1. To get each number Take muti % 10,
  and Divide muti by 10 to get the next number.

2. Print each count of a number using an index

*/
int main()
{
    int A, B, C;
    int muti, digit;
    int count[10] = {
        0,
    };

    scanf("%d %d %d", &A, &B, &C);

    // Get Mutiple value of A B C
    muti = A * B * C;

    // Until Muti is bigger than 0
    while (muti)
    {
        // Get Last number of Muti
        digit = muti % 10;
        // Increment the Count array index value
        // equal to the digit
        count[digit]++;
        // Divide by 10 to get the next muti number
        muti /= 10;
    }
    for (int i = 0; i < 10; i++)
        printf("%d\n", count[i]);

    return 0;
}