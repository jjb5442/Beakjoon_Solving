#include<stdio.h>
#include<string.h>
/*
problem website
https://www.acmicpc.net/problem/8598

[Main Points]
1. Declare int variables, char array size of 80;

2. using while until smaller than num

3. count 'O', but when apaer 'X' reset count.


[Solution]
1. Multiply three integers.

2. delare an array(integer) of size 10, reset it to 0;

3. Count until num is non-zero.

4. Calculates ussing the remainder of num as the index value of the array.
*/
int main(){
    int num, i, count=0, score=0;
    char quize[80];
    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%s", quize);

        for(int j=0; j<strlen(quize); j++){
            if(quize[j] == 'O'){
                count++;
            }
            else{
                count =0;
            }
            score = score + count;
        }

        printf("%d\n", score);
        
        score = 0;
        count =0;
    }

    
}