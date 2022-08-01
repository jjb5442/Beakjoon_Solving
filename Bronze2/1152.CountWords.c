#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/1152

[Main Points]
1. Every words end with ' ' or '\0'


[Solution]
1. Scan input sentence by %[^\n]

2. Search array which value front is not ' ' and back is ' ' or '\0'

*/
int main()
{
    int num = 0;
    char tmp[1000001], a = 'a', b = 'b';
    scanf("%[^\n]s", tmp);

    for (int i = 0; tmp[i + 1] != '\0'; i++)
    {
        if (tmp[i] != ' ' && (tmp[i + 1] == ' ' || tmp[i + 1] == '\0'))
        {
            num++;
        }
    }

    printf("%d", num);

    return 0;
}