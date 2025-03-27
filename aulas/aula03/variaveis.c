#include <stdio.h>

int main(){

    char tecla; 
    tecla = 'A';
    printf("tecla = %c\n", tecla);
    tecla = 100;
    printf("tecla = %c\n", tecla);

    int numero = 10;
    printf("numero = %i\n", numero); 

    {
        int numero = 20; 
        printf("numero = %i\n", numero);
    }

    float media = 9.5f;
    printf("media = %.1f\n", media);

    double dizima = 2.3333333f;
    printf("dizima = %.8f\n", dizima);



    return 0;
}