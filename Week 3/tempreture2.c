#include <stdio.h>

int main(void)
{
float tempreture, Fahrenheit;
printf("Enter Tempreture in C: ");
scanf("%f", &tempreture);


// Calculations
Fahrenheit = (tempreture / 1.8) + 32;//convertion

// Results
printf("°C %.2f = %.2f\n", tempreture, Fahrenheit);
//-40 C = -40 F
if(tempreture < 0){
    printf("❄️ Freezing weather\n");//If not below 0 then put 🥶 Very cold weather, and so on
}
else if(tempreture < 10){
    printf("🥶 Very cold weather\n");
}
else if(tempreture < 20){
    printf("🧥 Chilly weather\n");
}
else if(tempreture < 30){
    printf("🖼️ Normal weather\n");
}
else if(tempreture < 40){
    printf("☀️ Hot weather\n");
}
else if(tempreture > 40){
    printf("🔥 Very hot weather\n");
}
} 
