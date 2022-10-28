// Credits : Drici Oussama Graduated from ESI SBA :) :) :)
// Contact : Email : o.drici@esi-sba.dz
// Good Luck :) :) :)

// Le but de cette algo est de faire + - * / de 2 nombres entiers

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the 1st number\n");
    scanf("%d", &a);
    printf("Enter the 2st number\n");
    scanf("%d", &b);

    printf("a + b = %d\n", a + b); // on peut faire addition dans le pritf comme on peut aussi stocké le resultat dans une autre variable
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);

    return 0;
}