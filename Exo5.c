// Credits : Drici Oussama Graduated from ESI SBA :) :) :)
// Contact : Email : o.drici@esi-sba.dz
// Good Luck :) :) :)

// Le but de cette algo est de calculer le courant

#include <stdio.h>

int main()
{
    float R = 0, V = 0, I = 0;
    printf("Enter the value of R (resistance)\n"); //     \n pour sauter une ligne
    scanf("%f", &R);
    printf("Enter the value of V (tension)\n");
    scanf("%f", &V);

    I = V / R;
    printf(" I (courant) = %f amp", I);

    return 0;
}