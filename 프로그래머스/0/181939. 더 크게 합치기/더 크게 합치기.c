#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    char num1[10];
    char num2[10];
    sprintf(num1, "%d%d", a,b);
    sprintf(num2, "%d%d", b,a);
    
    if(atoi(num1)>atoi(num2)){
        return atoi(num1);
    }
    else{
        return atoi(num2);
    }
}