#include <stdio.h>

int main(void)
{
float length, width, area, perimeter;

printf("Enter the length: ");
scanf("%f", &length);

printf("Enter the width: ");
scanf("%f", &width);

// Calculations
area = length * width;
perimeter = 2 * (length + width);

// Results
printf(" area: %.2f\n", area);
printf("perimeter: %.2f\n", perimeter);

}
