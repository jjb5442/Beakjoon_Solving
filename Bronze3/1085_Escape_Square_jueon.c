#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/1085

[Main Points]
1. How to find close distance to board.
 
[Solution]
1. use array to find minimum distance.
*/

int main() {
    int x, y, w, h;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    int num1, num2;

    num1 = w-x;
    num2 = h-y;

    int arr[4];
    arr[0] = x;
    arr[1] = y;
    arr[2] = num1;
    arr[3] = num2;
     
    int min;

    for(int i=0; i<4; i++){
        if(i==0) min = arr[i];
        if(min > arr[i]){
            min = arr[i];
        }
    }

    printf("%d", min);

    
}
