#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/11047

[Main Points]
1. Start at the end of the array and
   Find similar values that are smaller than the input

ex)   5000 > 4700 > 1000
      arr[i] = 5000  => i--
      arr[i] = 1000  => Break!

2. Divide the input by the value obtained above
  and assign the remainder to the input

[Solution]
1. Same as Main Points

*/

int main()
{
    int num, price;
    scanf("%d %d", &num, &price);

    int currency[num], count = 0;

    for (int i = 0; i < num; i++)
        scanf("%d", &currency[i]);

    for (int i = num - 1; i >= 0 && price > 0; i--)
    {
        if (price >= currency[i])
        {
            count += price / currency[i];
            price %= currency[i];
        }
    }

    printf("%d", count);

    return 0;
}