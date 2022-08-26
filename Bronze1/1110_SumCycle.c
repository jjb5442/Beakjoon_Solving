#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/1110

[Main Points]
1. Store the input value and Cycle through
  until you get the Starting value
   A + B = CD  ->  B + D = ............


[Solution]
1. a to Ten digit and b to One digit

2. cycle value is b * 10 + (a+b) % 10

3. Repeat Until init == cycle

*/
int main()
{
    int init, cycle, count = 0;
    int a, b;

    scanf("%d", &init);
    cycle = init;
    do
    {
        a = cycle / 10;
        b = cycle % 10;
        cycle = b * 10 + (a + b) % 10;
        count++;
    } while (init != cycle);

    printf("%d", count);
    return 0;
}