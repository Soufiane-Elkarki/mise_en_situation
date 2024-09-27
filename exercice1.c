#include <stdio.h>

int main(){

    int base;
    int hauteur;
    int aire;
    int perimetre;

    printf("Entrez la base de triangle :");
    scanf("%d", &base);

    printf("Entrez la hauteur de triangle :");
    scanf("%d", &hauteur);

    aire = (base * hauteur) / 2 ;
    perimetre = 3 * base ;

    printf("l'aire de triangle est %d  : \n",aire);
    printf("lae perimetre de triangle est %d :",perimetre);
    

    return 0;
}