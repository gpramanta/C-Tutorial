#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("There once was a man named George.\n");
    printf("He was 70 years old.\n");
    printf("He liked the name George,\n");
    printf("but he did not like being 70.\n");
    printf("\n");

    char characterName[] = "John";
    char characterAge = 25;
    printf("There once was a man named %s.\n", characterName);
    printf("He was %d years old.\n", characterAge);
    printf("He liked the name %s,\n", characterName);
    printf("but he did not like being %d.\n", characterAge);
    printf("\n");

    characterAge = 36;
    printf("There once was a man named %s.\n", characterName);
    printf("He was %d years old.\n", characterAge);
    printf("He liked the name %s,\n", characterName);
    printf("but he did not like being %d.\n", characterAge);

    return 0;
}
