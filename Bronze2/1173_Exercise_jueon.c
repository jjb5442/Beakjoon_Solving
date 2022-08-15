#include<stdio.h>

int main(){
    int exercisetime, minpulse, maxpulse, inpulse, depulse;

    scanf("%d %d %d %d %d", &exercisetime, &minpulse, &maxpulse, &inpulse, &depulse);
    
    int excount=0;
    int mincount=0;
    int curpulse = minpulse;
    // curpulse - depulse < minpulse && curpulse + inpulse > maxpulse
    if(minpulse+ inpulse > maxpulse){
        mincount = -1;
        printf("%d", mincount);
        return 0;}

    while (excount<exercisetime)
    {
        
        if(curpulse + inpulse <= maxpulse){
            curpulse = curpulse + inpulse;
            // if(curpulse + inpulse > maxpulse) curpulse = maxpulse;
            excount+=1;
        }
        else {   
            if(curpulse - depulse < minpulse){
                curpulse = minpulse;
                mincount+=1;
            }
            
            else {
                curpulse = curpulse - depulse;
                mincount+=1;
        }
    }
    }
    
    
    printf("%d", mincount);

    return 0;
}