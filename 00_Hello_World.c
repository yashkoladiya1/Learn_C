/*
 * Program: Hello World in C
 * Purpose: Demonstrates basic C syntax, header files, functions, and output.
 */

// #include is a preprocessor command that imports library files.
// <stdio.h> stands for "Standard Input Output Header".
// It provides built-in functions like printf() for output and scanf() for input.
#include <stdio.h>

// int: Indicates that the main function will return an integer value back to the OS.
// main(): The execution entry point. Every C program MUST have a main() function.
// (): Holds parameters passed to the function (empty here means no arguments).
int main() {

    // printf(): A standard library function used to display formatted text to the screen.
    // "Hello World!\n": The string literal to be printed.
    // \n: An escape sequence that creates a new line after the text.
    // ; (Semicolon): Marks the end of a statement in C.
    printf("Hello World!\n");

    // return 0: Sends the value 0 back to the operating system.
    // In C, returning 0 signals that the program executed and finished successfully.
    return 0;
} // Closing brace: Marks the end of the main() function block.
