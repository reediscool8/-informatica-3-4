#include <stdio.h>
int main(void)
{

    int a = 5; //Equal sign means assignment
    int b = 5;
    int c = 10;

    printf("%d == %d is %d \n", a, b, a == b); // Equal sign means comparison
    printf("%d == %d is %d \n", a, c, a != c); // ! menas not equal

    // create program to check if number is negative
    int number;
    printf(" Enter a number: "); //instrictions
    scanf("%d", &number); //scan

    if (number < 0){
        printf("%d is negative number. \n",number);

    } else {
        printf("%d is positive number. \n",number);
    }
}
