#include <stdio.h>

int main(){

    int nomber ;
    int i;
    int a;

    printf("Entrez un nomber entier :");
    scanf("%d", &nomber);

    a = nomber - 1 ;
        for (i <= 2  ;i < a   ; i++);
       if (nomber % i == 1)
        {
           printf("Ce nomber est premier .");
        }
        else{
             printf("Ce nomber est pas un nomber premier .");
        }
    return 0;
}