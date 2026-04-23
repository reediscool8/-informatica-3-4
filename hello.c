#include <stdio.h>

int main(void)
{
    char name [49];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Hello %s!\n", name);
    char fcolor [49];
    printf("Enter Favorite Color: ");
    scanf("%s", &fcolor);
    printf("Your favorite color is %s!\n", fcolor);
}
