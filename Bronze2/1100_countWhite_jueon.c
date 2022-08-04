#include<stdio.h>

/*
problem website
https://www.acmicpc.net/problem/1100

[Main Points]
1. count index


[Solution]
1. input string
2. count index(white)
*/

int main(){
    char piece[8][9];
    int i, j, k;


    for(i=0; i<8; i++){
        scanf("%s", piece[i]);
    }

        printf("\n");


    for(k=0; k<8; k++){
            printf("%s\n", piece[k]);
    }

    int count=0;

    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
                if(i%2==0){
                        if(j%2==0){
                                if(piece[i][j] == 'F') count++;
                        }
                        
                }
                else if(j%2==1){
                        if(piece[i][j] == 'F') count++;
                }
        }
    }

    printf("%d", count);


}