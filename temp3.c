#include <stdio.h>
// 1.prototype
void c_to_f(void);
void f_to_c(void);

int main(void){
    printf("Temprature Converter \n");
    printf("1. Celsius to Fahrenheit \n");
    printf("2. Fahrenheit to Celsius \n");
    printf("Enter your otion: ");
    int user_response;
    scanf("%d", &user_response);

    if (user_response == 1){

        c_to_f();
    }else if (user_response == 2){
        f_to_c();
    }else {
        printf("Invalid option \n");
    }

}
void c_to_f(void){
float c;
printf("enter the temperature in celsius: ");
scanf("%f", &c);
float f = (c * 1.8) + 32;
printf("%.2f°c = %.2f°f\n", c, f);
}

void f_to_c(void){
float f;
printf("enter the temperature in farenheit: ");
scanf("%f", &f);
float c = (f - 32 ) / 1.8;
printf("%.2f°f = %.2f°c\n", f, c);
}

