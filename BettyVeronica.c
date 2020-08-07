#include <stdio.h>

int p(int n){
    int factorial = 1;
    while (n > 1){
        factorial *= n--;    
    }  
    return factorial; 
}

int main(){
    char waitEnter;
    printf("Calculos de Betty y Veronica  \n");
    printf("p(10) = %d \n", p(10));
    printf("p(3) = %d \n", p(3));
    waitEnter = getchar();
    return 0;
}
