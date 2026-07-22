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

    // Float vs double precision example
    printf("\n-- Float vs Double Precision --\n");
    float floatValue = 0.1f;
    double doubleValue = 0.1;
    float floatSum = 0.0f;
    double doubleSum = 0.0;

    for (int i = 0; i < 10; i++) {
        floatSum += floatValue;
        doubleSum += doubleValue;
    }

    printf("float  0.1f * 10 = %.9f\n", floatSum);
    printf("double 0.1  * 10 = %.17g\n", doubleSum);
    printf("float sum equals 1.0? %s\n", floatSum == 1.0f ? "yes" : "no");
    printf("double sum equals 1.0? %s\n", doubleSum == 1.0 ? "yes" : "no");

    // Functions
    printf("\n-- Functions --\n");
    int sum = add(7, 5);
    printf("add(7, 5) = %d\n", sum);

    return 0;
}