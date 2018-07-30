#include <stdio.h>

int fibo(int n){
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else 
        return fibo(n-1) + fibo(n-2);
}

int main(){
    int i;
    
    for(size_t i = 0; i < 15; i++)
    {
        printf("%d ", Fibo(i));
    }
    
    
    return 0;
}