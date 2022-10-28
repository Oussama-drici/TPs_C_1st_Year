// Credits : Drici Oussama Graduated from ESI SBA :) :) :)
// Contact : Email : o.drici@esi-sba.dz
// Good Luck :) :) :)

// Le but de cette algo est de minimiser le nombre de billets d'argent a payer

#include <stdio.h>

int main()
{
    int price = 0;
    printf("Enter the price\n");
    scanf("%d", &price);

    int billet_1000 = price / 1000;
    price = price - billet_1000 * 1000;
    int billet_500 = price / 500;
    price = price - billet_500 * 500;
    int billet_200 = price / 200;
    price = price - billet_200 * 200;
    int billet_100 = price / 100;
    price = price - billet_100 * 100;
    int billet_50 = price / 50;
    price = price - billet_50 * 50;
    int billet_1 = price;

    printf("You have to pay %d of 1000$ and %d of 500$ and %d of 200$ and %d of 100$ and %d of 50$ and %d of 1$", billet_1000, billet_500, billet_200, billet_100, billet_50, billet_1);
    return 0;
}