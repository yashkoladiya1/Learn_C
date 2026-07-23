#include<stdio.h>

int main(){

    // + - * / % ++ -- 

    int a = 10;
    int b = 5;
    int c,d,e,f,g=5,h=4;

    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g++;
    h--;


    printf("Addition %d + %d = %d\n",a,b,c);
    printf("Subtraction %d - %d = %d\n",a,b,d);
    printf("Multiplication %d * %d = %d\n",a,b,e);
    printf("Division %d / %d = %d\n",a,b,f);
    printf("Plus Plus = %d\n",g);
    printf("Minus Minus = %d\n",h);


    return 0;
}