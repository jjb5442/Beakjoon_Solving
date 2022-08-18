#include <stdio.h>
#include <stdlib.h>
/*
problem website
https://www.acmicpc.net/problem/1362

[Main Points]
1. Check pet is in range of standard weight

2. Check pet is dye

[Solution]
1. Make 'live' valiable to check live or die

2. Prints the value corresponding to the status

*/
int main()
{
    int petWeight, standardWeight, live = 1;
    char act;
    int num, i = 1;

    while (1)
    {
        scanf("%d %d", &standardWeight, &petWeight);
        // End of Process
        if (standardWeight == 0)
            break;
        live = 1;
        while (1)
        {
            scanf("%*c %c %d", &act, &num);

            // Endding the Process
            if (act == '#')
                break;

            // Loop until act = '#'
            switch (act)
            {
            case 'F':
                petWeight += num;
                break;

            case 'E':
                petWeight -= num;
                if (petWeight <= 0)
                    live = 0;
                break;
            default:
                break;
            }
        }

        if (live == 0)
            printf("%d RIP\n", i++);
        else if (petWeight > standardWeight / 2 && petWeight < standardWeight * 2)
            printf("%d :-)\n", i++);
        else
            printf("%d :-(\n", i++);
    }
    return 0;
}