// Credits : Drici Oussama Graduated from ESI SBA :) :) :)
// Contact : Email : o.drici@esi-sba.dz
// Good Luck :) :) :)

// le but de cette algo est de diffirencier entre la division entier (div) et la division real (/) et de changer le type d'une variable

#include <stdio.h>

int main()
{
    int a = 3;
    int b = 74;

    float q1 = ((float)a + (float)b) / 5;
    int q2 = (a + b) / 5;
    int r2 = (a + b) % 5;
    printf("q1 = %f , q2 = %d , r2 = %d\n", q1, q2, r2);

    q1 = ((float)a + (float)b) / 5; // (float) => pour changer le type de variable de int a float pour faire la division real result = nombre decimal (ex: 38.888)
    q2 = (a + b) / 3;
    r2 = (a + b) % 3;
    printf("q1 = %f , q2 = %d , r2 = %d", q1, q2, r2);
    return 0;
}