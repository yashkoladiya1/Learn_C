
#include <stdio.h>

int main() {
    // Declaring variables of different C data types
    char letter = 'A';
    int age = 25;
    float pi = 3.14f;
    double high_precision = 3.1415926535;
    short small_num = 32000;
    long big_num = 1234567890L;
    unsigned int positive_only = 4000000000U;
    char text[] = "Hello, World!";

    // Printing values using format specifiers
    printf("char:          %c\n", letter);
    printf("int:           %d\n", age);
    printf("float:         %.2f\n", pi);
    printf("double:        %.10lf\n", high_precision);
    printf("short:         %hd\n", small_num);
    printf("long:          %ld\n", big_num);
    printf("unsigned int:  %u\n", positive_only);
    printf("string:        %s\n", text);

    return 0;
}
