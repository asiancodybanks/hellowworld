#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // Seed the random number generator using the current time
    srand(time(NULL)); 

    // Generate a random number that is either 0 or 1
    int random_bit = rand() % 2; 

    printf("Random number: %d\n", random_bit);
   double money = 100.00;
   int a = 100;
   int b = 10;
   int counter = 10;
   if (random_bit == 0)
   {
   	a  - b;
   }
   if (random_bit == 1)
   	a + b;
    return 0;

}