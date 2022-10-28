// Credits : Drici Oussama Graduated from ESI SBA :) :) :)
// Contact : Email : o.drici@esi-sba.dz
// Good Luck :) :) :)

// Le but de cette algo est de calculer aire et volume de circle

#include <stdio.h>
#include <math.h>
int main()
{
    float Rayon = 0, aire = 0, volume = 0;
    const float P = 3.14; // const = le varible P unchangable (ne peut pas modifie P);

    printf("Entrer le rayon de circle\n");
    scanf("%f", &Rayon);
    aire = P * pow(Rayon, 2); // pow(value , power) pour calculer la puissance d'un nombre ex: Rayon puissance 2 .
    volume = P * pow(Rayon, 3) / 3;
    printf("Volume = %.2f, Aire = %.2f", aire, volume); // %.2f pour garder seulement 2 nombres apres la virgule
    return 0;
}