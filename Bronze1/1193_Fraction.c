#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/1193

[Main Points]
1. Finds x * (x + 1) / 2 with the largest value less than the input

2. Check x is odd or even

3. Fraction is  ( diff = input - sum( 1 ~ X) )
  X + 1 is Odd  : X + 2 - diff /  diff
  X + 1 is Even : diff         / X + 2 - diff

[Solution]
1. Same as Main Points

*/
int main()
{
    int x = 0, diff, input;
    scanf("%d", &input);
    while (x * (x + 1) / 2 < input)
    {
        x++;
    }
    x--;

    diff = input - x * (x + 1) / 2;

    if (x % 2 == 1)
        printf("%d/%d", diff, x + 2 - diff);
    else
        printf("%d/%d", x + 2 - diff, diff);

    return 0;
}