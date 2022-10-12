#include <stdio.h>
#include <stdlib.h>
 // Prime number in C
int ehprimo(int num, int c){//Recursive loop function to display prime numbers.
    int i;
    int div = 0;
    if(num == 0){//Function stop and generated prime count and numbers.
        printf("\n\nNumeros gerados: %i", c);//Exibe the number of prime numbers generated.
     return 0;
    }
        
 
    for (i = 1; i <= num; i++) {//Loop
        if (num % i == 0) {//A prime number is a number divisible by 1 and itself, that is, only twice it is divided.
            div++;//This variable will count how many times it has been divided between 1 and itself.
        }
 
    }
    if (div == 2){// If div is equal to 2, it means that of every interval {1,N} it was only divided one, by and themselves. So it's a prime number.
        c++;//The C++ variable will count how many prime numbers have been counted.
        printf("%i  ", num);// Print C;
    }
 
 
 
 
    return ehprimo(num-1,c);// Function recursion meets the first stop condition.
 
}
 
int main() {//In the main function, the number that will define the interval {1,N} of prime numbers will be inserted.
    
    int num;
 
    scanf("%i", &num);
    ehprimo(num,0);
    return 0; 
}
