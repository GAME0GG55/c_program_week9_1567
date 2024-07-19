#include <stdio.h>
#include<string.h>
int callusename()
{
    //declarative string
    char fristname[] = "";
    char lastname[] = "";

    printf("Enter strings of frist name:");
    scanf("%s",&fristname);
    printf("%s\n", fristname);

    printf("Enter strings of last name:");
    scanf("%s",&lastname);
    printf("%s\n", lastname);
}