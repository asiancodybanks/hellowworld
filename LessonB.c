#include <stdio.h>
#include <string.h>

int main() {

    int myAge = 43; // an int variable

    // The symbol & means pointer, it points to a memory address.
    printf("%d", myAge);  // Outputs the value of myAge (43)
    printf("%p\n", &myAge); // Outputs the memory address of myAge (0x7ffe5367e044)

    
    int age;

    // Reading an integer input
    printf("Give me your age:");
    scanf("%d", &age); // This has the & (pointer) because it's an int

    // Reading a string input
    char name[100];
    printf("Give me your name:");
    scanf("%s", name); // This DOES NOT have & (pointer) because it's an string

    // Print results
    printf("So your name is %s, and your age is %d, correct?\n", name, age);
    
    // strcmp is a function for string comparison, returns 0 if same
    if (strcmp(name, "Ben") == 0) {
        printf("You're not allowed near here");
    }

    // Hint: for this week assignment, loop at Lesson A, Part 5

    return 0;
}