#include <stdio.h>

int main()
{
    int price = 0;
    int remise = 0;
    printf("Enter the price ($) of your product\n");
    scanf("%d", &price);
    printf("Enter the remise (%%) of your product\n");
    scanf("%d", &remise);
    price = price - price * remise / 100;
    printf("The new price of your product is %d$", price);
    return 0;
}