// Credits : Drici Oussama Graduated from ESI SBA :) :) :)
// Contact : Email : o.drici@esi-sba.dz
// Good Luck :) :) :)

// Le but de cette algo est de faire la permutation de 2 nombres sans une variable intermidiare

#include <stdio.h>

int main()
{
    int a = 10, b = 5;
    b = b + a;
    a = b - a;
    b = b - a;
    printf("a = %d , b = %d", a, b);

    return 0;
}