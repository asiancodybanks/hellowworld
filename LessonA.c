#include <stdio.h>
#include <stdbool.h>
/**
 * This is an introduction to the basics of C.
 * Whenever you see a line that starts with //, that is a comment. 
 * Comments are not considered part of the code, and are ignored by the compiler.
 * Additionally, using fordward slash / and star *  like in this comment
 * creates a comment block, and you can end a comment block with star * and slash /
 */
int main() {

    /*
    Part 1: Data Types
    In C, we have different data types to represent different kinds of data


    An integer is a whole number, positive or negative, up to 32 binary bits.
    This means that the number must range from -2,147,483,648 to 2,147,483,647

    float and double both represent numbers with decimals, with double having
    double the bits of a float, so it is more accurate

    bool is short for boolean, which is just a flag for true or false. (which
    is 1 or 0 under the hood)

    char represents a SINGLE character. in order to make a word (known as a string)
    you must create a list of characters. You can indicate that with a * before the
    variable name.

    Part 2: Assignment of variables

    When you want to store a piece of data, you store it in a VARIABLE.
    We denote this with the data type, name of variable, and value of the variable.

    As you can see in the example below, int is the data type, age is the name of the
    variable, and 22 is the value of the variable. Also note, every line in C must
    end with a semicolon ";" to indicate the end of a line.
    */
    int age = 22;                    // integer
    float pi = 3.14159f;             // floating-point number
    double price = 19.99;            // double-precision floating-point
    bool isStudent = 1;             // boolean type from <stdbool.h>
    char grade = 'A' + 10;                // single character
    char *name = "Coder";    // string literal

    /**
     * Part 3: Using variables
     * When you have declared a variable, you can refer to them with just their
     * variable name. For example, if we have declared int age = 22; we can use age
     * just by writing "age", like below.
     * 
     * The % symbol is a format specifier, it acts as a placeholder for a variable.
     * For example, the %d below stands for decimal (base-10), which allows us to print
     * the variable age with printf. Different data types have different format specificers,
     * as seen below.
     */
    printf("\n-- Data Types --\n");
    printf("age (int) = %d\n", age);
    printf("pi (float) = %.5f\n", pi);
    printf("price (double) = %.2f\n", price);
    printf("grade (char) = %c\n", grade);
    printf("isStudent (bool) = %s\n", isStudent ? "true" : "false");
    printf("name (char*) = %s\n", name);

    /**
     * Part 4: If statements
     * 
     * If statements allow for running code only if some condition is met.
     * You can see below that it consists of a declaration of "if", followed by
     * brackets (), which house the condition that it is checking, then followed by
     * curly braces {}, which house the code that will run if the condition is true.
     * The braces themselves are not required to be followed by a semicolon (;), but any
     * code in the curly braces {} must still be followed by a semicolon (;).
     * 
     * The condition must resolve to some true or false result. Doing comparison operations
     * like greater than (>) less than (<) or greater or equal to (>=) will result in a true
     * or false. In order to check for a specific value, we must use TWO (==) equal signs,
     * as a single equal sign (=) represents ASSIGNMENT (as seen above), not COMPARISON.
     * 
     * We can also have branch paths by using "else if" and "else".
     * else if uses a different condition, and it only runs if the above if statement is false.
     * you can stack multiple "else if" in a row. "else" runs if all other if statements resolved
     * to false.
     */
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

    /*
    Part 5: Loops

    Loops allow us to do something multiple times. There are two kinds of loops,
    for loops and while loops.

    For loops starts with a "for", followed by braces (), with the conditions of the
    loop encapsulated entirely in the braces. We start with an initialization (int i = 1;),
    followed by a condition that is checked every loop (i <= 5;) and our loop keeps running
    as long as that condition is not true. This is our condition to finish the loop. Finally,
    at the end of every loop, we run the iterator (i = i + 1) which allows us to advance
    our initial variable so that we may progress through our loop.

    While loops are more simple, as they only have a "while", followed by a condition ()
    in braces. The while loop keeps running as long as the condition in the braces is
    true. As such, we must create our own system to ensure that the condition eventually
    allows us to exit a loop. The example below uses a "countdown" variable that we initialize
    outside of the loop, then check inside the condition (countdown > 0), and finally, and the 
    end of the code, but inside the loop, we decrease "countdown" so that we may eventually
    exit the loop.
    */
    printf("\n-- Loops --\n");

    printf("for loop: numbers 1 through 5\n");
    for (int i = 1; i <= 5; i = i++) {
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

    /**
     * Below is an example of everything we have done above.
     * 
     * We are going to write a script that calculates the sum of all even numbers,
     * up to 10.
     */
    printf("\n-- Final example --\n");
    int sum_of_integers = 0;
    
    // This here is just a counter for how many times we want to run this loop
    int counter = 1;
    // A while loop keeps running the code between the CURLY braces {} until the condition in the brackets () is FALSE.
    while (counter < 10){
        // This "counter % 2 == 0" just checks if a number is odd or even.
        if (counter % 2 == 0) {
            // We are ASSSIGNING a new value to sum_of_integers here by using the = symbol. In order to increase the existing value of sum_of_integers, we add a new value to sum_of_integers, and assign that whole thing to itself.
            sum_of_integers = sum_of_integers + counter;
        }
        // We must decrease the counter, or we will have an infinite loop
        counter = counter + 1;
    }
    // This here is just to print the values of our variables.
    printf("Sum of even numbers (int) = %d\n", sum_of_integers);


    // Return ends the function, so it's usually at the end here.
    return 0;

    /**
     * Comments don't get run anyways, so comment being here doesn't affect anything.
     * 
     * Feel free to experiment and change anything in this file! If anything breaks,
     * you can also undo back to the start, or reset back to the commit.
     * 
     * Don't be shy with running the code, it's basically free, and running your code
     * often lets you catch any glaring issues with the code early. 
     */
}