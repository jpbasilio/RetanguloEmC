#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    double base, altura, area, perimetro, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%lf", &base);
    printf("\nDigite a altura do retangulo: ");
    scanf("%lf", &altura);

    area = base*altura;
    perimetro = 2*(base+altura);
    diagonal = sqrt(base * base + altura * altura);

    printf("\nÁREA %.4lf", area);
    printf("\nPERIMETRO %.4lf", perimetro);
    printf("\nDIAGONAL %.4lf", diagonal);

    printf("\n\n");
    return 0;
}