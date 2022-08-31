#include <stdlib.h>
/*
problem website
https://www.acmicpc.net/problem/1100

[Main Points]
1. Input by multi-dimensional arry

2. Check white and It is 'F'


[Solution]
1. Make arry size by 8 * 9 Cause of String has '\0'
2. Scanf Input file
3. Block is white when row + column is even
4. Check arr value is 'F'

*/

int main()
{
    char arr[8][9];
    int num = 0;
    for (int i = 0; i < 8; i++)
    {
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (((i + j) % 2 == 0) && arr[i][j] == 'F')
                num++;
        }
    }
    printf("%d", num);
    return 0;
}