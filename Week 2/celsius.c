#include <stdio.h>

int main(void)
{
float tempreture, celsius;
printf("Enter Tempreture in F: ");
scanf("%f", &tempreture);


// Calculations
celsius = (tempreture - 32) / 1.8;

// Results
printf(" Tempreture in C: %.2f\n", celsius);
//-40 C = -40 F
}
