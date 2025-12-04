#include<stdio.h>
int main(){
    float price1,price2,price3;
    float vat = 0.07;
    scanf("%f",&price1);
    float total_price1 = (price1 - ((price1*0.05)));
    float pay1 = total_price1 + total_price1 * vat;
    printf("price1 = %.2f\n", pay1);
    scanf("%f",&price2);
    float total_price2 = ((price1 + price2) - (((price1 + price2) * 0.15)));
    float pay2 = total_price2 + total_price2*vat;
    printf("price2 = %.2f\n", pay2);
    scanf("%f",&price3);
    float total_price3 = ((price1 + price2 + price3) - (((price1 + price2 + price3) * 0.30)));
    float pay3 = total_price3 + total_price3*vat;
    printf("price3 = %.2f\n", pay3);
}