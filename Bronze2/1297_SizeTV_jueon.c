#include<stdio.h>
#include<math.h>

int main(){
    double height, width, total,diagonal, x, pd, ph, pw;

    scanf("%lf %lf %lf", &diagonal, &height, &width);

    pd =pow(diagonal, 2);
    ph = pow(height, 2);
    pw = pow(width, 2);

    x = pd/(ph+pw);
    x = sqrt(x);

    height = floor(height*x);;
    width = floor(width*x);

    printf("%d %d\n", (int)height, (int)width);

    return 0;
}