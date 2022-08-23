#include <stdio.h>
#include <stdlib.h>
/*
problem website
https://www.acmicpc.net/problem/8958

[Main Points]
1. Create 'combo' variable to count countinuous 'O'

2. If value is 'X' or '\0'  sum += combo * (combo + 1) / 2

[Solution]
1. If 'O' is continue, increase 'combo'

2. When quiz meet 'X' or '\0' sum += combo * (combo + 1) / 2

*/
int main()
{
    int num, sum, combo;
    char quiz[81];

    scanf("%d", &num);

    // Loop input Numer count
    while (num--)
    {
        scanf("%s", quiz);
        int i = 0, sum = 0, combo = 0;

        while (quiz[i] != '\0')
        {
            if (quiz[i] == 'O')
            {
                combo++;
            }
            else if (quiz[i] == 'X')
            {
                // Sum of 1 ~ combo
                sum += combo * (combo + 1) / 2;
                combo = 0;
            }
            i++;
        }
        sum += combo * (combo + 1) / 2;
        printf("%d\n", sum);
    }

    return 0;
}