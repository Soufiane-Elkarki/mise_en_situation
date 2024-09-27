#include <stdio.h>

int main(){

    float  temperature;

    printf("Saisir votre temperature :");
    scanf("%f", &temperature);

    if (temperature >= 38)
    {
        printf("Vous avez de la fievre .");
    }
    else{
        printf("Votre temperature est normal .");
    }
    
    return 0;
}