#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int even_sum=0;
    int odd_sum = 0;
    if(n%2==0){
        for(int i=1; i<=n; i++){
            if(i%2==0){
                even_sum+=i*i;
            }
        }
        return even_sum;
    }
    else{
        for(int i=1; i<=n; i++){
            if(i%2!=0){
                odd_sum+=i;
            }
        }
        return odd_sum;
    }
}