#include <stdio.h>
int main(void){

    printf("Vending Machine Stock\n");
    printf("------------------------------\n");

    //ribeye
    float price1 = 199.99;
    int quantity1 = 8;
    char select1 = 'R';

    //Ice cream
    float price2 = 69.99;
    int quantity2 = 13;
    char select2 = 'I';

    // blue cheese
    float price3 = 29.99;
    int quantity3 = 189;
    char select3 = 'B';

    //now i strat to print it
    printf("Item name: Ribeye\n");
    printf("Price: = $%.2f\n",price1);
    printf("Quantity Avalible: = %d\n",quantity1);
    printf("Selection Code: = %c\n",select1);

    printf("\n");

    printf("Item name: ice cream\n");
    printf("Price: = $%.2f\n",price2);
    printf("Quantity Avalible: = %d\n",quantity2);
    printf("Selection Code: = %c\n",select2);

    printf("\n");

     printf("Item name: blue cheese\n");
    printf("Price: = $%.2f\n",price3);
    printf("Quantity Avalible: = %d\n",quantity3);
    printf("Selection Code: = %c\n",select3);
}
