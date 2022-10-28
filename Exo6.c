// Credits : Drici Oussama Graduated from ESI SBA :) :) :)
// Contact : Email : o.drici@esi-sba.dz
// Good Luck :) :) :)

#include <stdio.h>

int main()
{
    float TemperatureC = 0;
    float TemperatureF = 0;

    printf("Enter the temperature en Celcus\n");
    scanf("%f", &TemperatureC);
    TemperatureF = 9 * TemperatureC / 5 + 32;
    printf("Enter the temperature en Fehranhat is : %f", TemperatureF);

    return 0;
}