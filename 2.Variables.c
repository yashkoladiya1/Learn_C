#include<stdio.h>

int main(){

    /* variable = A reusable container for a value
       Behaves as if it were the value it contains.
    */

    int age = 24;
    printf("I am %d years old\n",age);

    float gpa = 1.8;
    printf("I got %f gpa\n",gpa);

    float gpa2 = 1.8;
    printf("I got %.2f gpa\n",gpa2);

    char food[] = "Pizza";
    printf("I like %s\n",food);

    char symbol = '$';
    printf("I Love %c\n",symbol);

    double temperature = 2.34;
    printf("Today's temperature is %lf",temperature);


    return 0;
}