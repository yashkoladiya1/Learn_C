#include<stdio.h>

/*
Rules for Naming Identifiers in C
A programmer must follow a set of rules to create an identifier in C:

Identifiers can contain uppercase and lowercase alphabets (A–Z, a–z), digits (0–9), and the underscore (_).
The first character of an identifier must be a letter or an underscore.
Identifiers are case-sensitive.
Identifiers cannot be keywords in C (such as int, return, if, while etc.).
*/
int sum(int a, int b) {
    return a + b;
}

int main(){
// Creating a variable
    int val = 10;

// Creating a function
    void func() {}

    printf("%d", sum(10, 20));
    return 0;
}

/*
Naming Conventions
In C programming, naming conventions are not strict rules but are commonly followed suggestions by the programming community for identifiers to improve readability and understanding of code. Below are some conventions that are commonly used:

For Variables:
Use camelCase for variable names (e.g., frequencyCount, personName).
Constants can use UPPER_SNAKE_CASE (e.g., MAX_SIZE, PI).
Start variable names with a lowercase letter.
Use descriptive and meaningful names.

For Functions:
Use camelCase for fWunction names (e.g., getName(), countFrequency()).
Function names should generally be verbs or verb phrases that describe the action.

For Structures:
Use PascalCase for structure names (e.g., Car, Person).
Structure names should be nouns or noun phrases.
*/
