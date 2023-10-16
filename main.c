#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d ;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    printf("Enter the third value: ");
    scanf("%d", &c);
    d = c + b + a;
    printf("%d + %d + %d = %d\n", a,b,c,d);
    printf("\n");

    int myNum = 5;
    char myLetter = 'M';
    printf("My number is %d and my letter is %c", myNum, myLetter);
    printf("\n");

    //Create variables
    int integer = 15;
    float floatNum = 5.99;
    char charNum = 'C';
    printf("The integer is %d\n", integer);
    printf("Float number is %f\n", floatNum);
    printf("The letter is %c\n", charNum);
    printf("%n");

    float floatNumber = 5.2;
    printf("Six digits after the decimal point : %f\n", floatNumber);
    printf("One digit : %.1f\n", floatNumber);
    printf("%.2f\n", floatNumber);
    printf("%.3f\n", floatNumber);

    return 0;

}
