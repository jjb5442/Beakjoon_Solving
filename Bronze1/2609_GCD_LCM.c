#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/2609

[Main Points]
1. Euclidean Algorithm
 a = bq + r ( 0 <= r < b )
 The GCD of a, b is the same as the GCD of b, r
 GCD(a, b) == GCD(b, r)

2. b = r1q + r2
   r1 = r2q + r3
   ......
   until r == 0

3. rx = ryq  =>  ry is GCD

4. LCM = a * b / GCD

[Solution]
1. Same as Main Points

*/
int main()
{
    int a, b, r;
    int gcd, lcm;
    scanf("%d %d", &a, &b);
    lcm = a * b;
    do
    {
        r = a % b;
        a = b;
        b = r;
    } while (r != 0);
    gcd = a;
    lcm /= gcd;
    printf("%d\n%d", gcd, lcm);

    return 0;
}