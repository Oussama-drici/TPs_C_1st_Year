// Credits : Drici Oussama Graduated from ESI SBA :) :) :)
// Contact : Email : o.drici@esi-sba.dz
// Good Luck :) :) :)

// Le but de cette algo est de faire les differents operations arithmitiques +,-,*,/,% et logiques == || > <

#include <stdio.h>

int main()
{
    int a = 2, b = 3, c = 5, d = 7;

    printf("a + b * c - d = %d\n", a + b * c - d);
    printf("a + (b * c) - d = %d\n", a + (b * c) - d);
    printf("(a + b) * c - d = %d\n", (a + b) * c - d);
    printf("a + b * (c - d) = %d\n", a + b * (c - d));
    printf("(a + b) * (c - d) = %d\n", (a + b) * (c - d));
    printf("d mod b = %d\n", d % b);
    printf("d div b = %d\n", d / b);
    printf("d == b = %d\n", d == b); // 0 represents false
    printf("d > b = %d\n", d > b);   // 1 represents false

    return 0;
}