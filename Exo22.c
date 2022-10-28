// Credits : Drici Oussama Graduated from ESI SBA :) :) :)
// Contact : Email : o.drici@esi-sba.dz
// Good Luck :) :) :)

// le but de cette algo est de entrainer avec les operations logiques == || != &&

#include <stdio.h>
#include <stdbool.h>
int main()
{
    char c;
    int m;
    printf("Enter a chatacter\n");
    scanf("%c", &c);
    printf("Enter an integer number\n");
    scanf("%d", &m);

    bool b1 = (c != 'r');
    bool b2 = (m == 7 || b1);

    printf("b1 = %d\n", b1); // il n'existe pas une methode pour afficher le boolean type : false ou true donc on affiche comme un entier
    printf("b2 = %d\n", b2); // 0 reprents false . 1 represents true

    return 0;
}