#include <stdio.h>

int factorial(int n){
    if( n == 0)
        return 1; 
    else
        return n*factorial(n-1);
}

int main(){

    printf("%d", factorial(20));
    
    return 0;
}