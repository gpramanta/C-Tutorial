#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 25;
    double gpa = 3.73;
    char grade = 'A';
    char myName[] = "Komang Pramanta Gerinata";

    printf("Hello, my name is %s.\n", myName);
    printf("I am %d years old.\n", age);
    printf("I graduated with %c scores,\n", grade);
    printf("with GPA %f.\n", gpa);

    return 0;
}
