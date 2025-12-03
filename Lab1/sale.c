#include<stdio.h>
int main(){
    float price1,price2,price3;
    scanf("%f",&price1);
    float total_price1 = price1 - ((price1*0.05));
    printf("price1 = %.2f\n",total_price1);
    scanf("%f",&price2);
    float total_price2 = ((price1 + price2) - (((price1 + price2) * 0.15)));
    printf("price2 = %.2f\n", total_price2);
    scanf("%f",&price3);
    float total_price3 = ((price3 + price1 + price2) - (((price3+price1 + price2) * 0.30)));
    printf("price3 = %.2f\n", total_price3);
}