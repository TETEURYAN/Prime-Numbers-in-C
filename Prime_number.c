#include <stdio.h>
#include <stdlib.h>
 
int ehprimo(int num, int c){
    int i;
    int div = 0;
    if(num == 0){
        printf("\n\nNumeros gerados: %i", c);
     return 0;
    }
        
 
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            div++;
        }
 
    }
    if (div == 2){
        c++;
        printf("%i  ", num);
    }
 
 
 
 
    return ehprimo(num-1,c);
 
}
 
int main() {
 
    int num;
 
    scanf("%i", &num);
    ehprimo(num,0);
    return 0;
}