#include <stdio.h>

int main(void)
{
    float length, width, area;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter width: ");
    scanf("%f", &width);
    area = length * width;
    int perimeter = 2*(length + width);
    printf("area: %.2f\n", area);
    printf("perimeter: %.2f\n", perimeter);

}
