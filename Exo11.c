// Credits : Drici Oussama Graduated from ESI SBA :) :) :)
// Contact : Email : o.drici@esi-sba.dz
// Good Luck :) :) :)

// le programme ci dessous calcule le nouveau prix apres le remise

#include <stdio.h>

int main()
{
    int price = 15;
    float taux = 10.5;
    int remise = 0;
    remise = price * taux / 100;
    price = price - remise;
    printf("The new price of your product is %d$", price);
    return 0;
}