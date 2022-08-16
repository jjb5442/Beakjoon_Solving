#include <stdio.h>
#include <math.h>
/*
problem website
https://www.acmicpc.net/problem/1159

[Main Points]
1. Check only arr[0] value

2. Use Alpabat array which size of 26 same as Alpabat count

[Solution]
1. Increase value which mapping with Array Index

2. Print Array value is Bigger than 5;

*/
int main()
{
    int num;
    scanf("%d", &num);

    // Process when Player is smaller than 5
    if (num < 5)
    {
        printf("PREDAJA");
        return 0;
    }

    char initial;
    // 97 ~ 122   a ~ z
    int player[26] = {0};
    int check = 0;

    for (int i = 0; i < num; i++)
    {
        // %*c  =>  Ignore value *
        // To Remove Enter value Scanf %*c front of value
        scanf("%*c %c %*s", &initial);
        player[initial - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (player[i] >= 5)
        {
            printf("%c", i + 'a');
            check = 1;
        }
    }
    if (!check)
    {
        printf("PREDAJA");
    }
    return 0;
}