#include <stdio.h>
#include <stdbool.h>

// A simple function that prints a message.
void say_hello(const char *name) {
    printf("Hello, %s! Welcome to C programming.\n", name);
}

// A function that adds two integers and returns the result.
int add(int a, int b) {
    return a + b;
}

int main() {
    // Two slashes like this is a comment. It is ignored by the compiler.

    // Data types examples
    int age = 22;                    // integer
    float pi = 3.14159f;             // floating-point number
    double price = 19.99;            // double-precision floating-point
    char grade = 'A' + 10;                // single character
    _Bool isStudent = 1;             // boolean type from <stdbool.h>
    const char *name = "Coder";    // string literal

    say_hello(name);

    printf("\n-- Data Types --\n");
    printf("age (int) = %d\n", age);
    printf("pi (float) = %.5f\n", pi);
    printf("price (double) = %.2f\n", price);
    printf("grade (char) = %c\n", grade);
    printf("isStudent (bool) = %s\n", isStudent ? "true" : "false");

    // If statements
    printf("\n-- If Statements --\n");
    if (age >= 18 ) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }

    if (price > 20.0) {
        printf("The item is expensive.\n");
    } else if (price > 10.0) {
        printf("The item has a moderate price.\n");
    } else {
        printf("The item is cheap.\n");
    }

    // Loops
    printf("\n-- Loops --\n");

    printf("for loop: numbers 1 through 5\n");
    for (int i = 1; i <= 5; i = i + 1) {
        printf("%d ", i);
    }
    printf("\n");

    printf("while loop: countdown from 3\n");
    int countdown = 3;
    while (countdown > 0) {
        printf("%d ", countdown);
        countdown--;
    }
    printf("\n");

    printf("do-while loop: run at least once\n");
    int left = 1;
    do {
        printf("left = %d\n", left);
        left--;
    } while (left > 0);

    // Example of both of the above (using if and loop)
    int sum_of_integers = 0;
    int a = 5;
    int b = 10;
    
    // This here is just a counter for how many times we want to run this loop
    int counter = 10;
    // A while loop keeps running the code between the CURLY braces {} until the condition in the brackets () is FALSE.
    while (counter > 0){
        // We are ASSSIGNING a new value to sum_of_integers here by using the = symbol. In order to increase the existing value of sum_of_integers, we add a new value to sum_of_integers, and assign that whole thing to itself.
        sum_of_integers = sum_of_integers + b;
        // We must decrease the counter, or we will have an infinite loop
        counter = counter - 1;
    }
    // This here is just to print the values of our variables.
    printf("sum_of_integers (int) = %d\n", sum_of_integers);
    printf("b (int) = %d\n", b);
    printf("a (int) = %d\n", a);
  
    // Functions
    printf("\n-- Functions --\n");
    int sum = add(7, 5);
    printf("add(7, 5) = %d\n", sum);

    return 0;
}