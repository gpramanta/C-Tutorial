#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello\nWorld");
    printf("Hello\"World");
    printf("\n");
    printf("\n");
    printf("%d", 500);
    printf("\n");
    printf("\n");
    printf("My favorite number is %d", 500);
    printf("\n");
    printf("\n");
    printf("My favorite %s is %d", "number", 500);
    printf("\n");
    printf("\n");
    printf("My favorite %s is %f", "number", 500.23456);
    printf("\n");
    printf("\n");
    int favNum = 350;
    printf("My favorite %s is %d", "number", favNum);
    printf("\n");
    printf("\n");
    int myNum = 88;
    char myChar = 'z';
    printf("My favorite %c is %d.", myChar, myNum);

    return 0;
}
