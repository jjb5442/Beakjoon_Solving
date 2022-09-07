#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/9012

[Main Points]
1. Check the number of '(' and ')' is the same

2. Check if the last Parenthesis is ')'

[Solution]
1. Even if the number of '(' and ')' is the same,
   there should be no more parts of ')' than '('

*/

int main()
{
    int num;
    scanf("%d", &num);

    char parenthesis[51];
    while (num--)
    {
        int flag = 0, i = -1;
        scanf("%s", parenthesis);
        while (parenthesis[++i] != '\0')
        {
            if (parenthesis[i] == '(')
                flag--;
            else
                flag++;

            // When the number of ')' is greater than
            // the number of '('
            if (flag > 0)
                break;
        }

        if (flag == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}