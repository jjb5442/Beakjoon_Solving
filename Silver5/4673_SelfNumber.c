#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/4673

[Main Points]
1. Create an array selfNum[100001] and initialize it to 0

2. Do Self-Number Algorithm up to 1000

[Solution]
1. To Add all digits of a number in a given number,
  Use Nested Loops and ++ for that index

2. Print If array[i] has value 0

*/
int main()
{
    // To store 10000, Declare an array size of 10001
    int selfNum[10001] = {
        0,
    };

    for (int i = 1; i < 10000; i++)
    {
        int tmp1 = i;
        int tmp2 = i;
        while (tmp1 < 10000)
        {
            tmp2 = tmp1;
            while (tmp2 > 0)
            {
                tmp1 += tmp2 % 10;
                tmp2 /= 10;
            }
            // If tmp1 is bigger than 10000, Don't save
            if (tmp1 <= 10000)
                selfNum[tmp1]++;
        }
    }
    for (int i = 1; i <= 10000; i++)
    {
        // If there was no Self Number
        if (selfNum[i] == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}