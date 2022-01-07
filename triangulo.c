// Juliana de Faria Duarte Ribeiro | Número USP: 12684969
#include <stdio.h>
#include <math.h>

void fnImprimeAngulo(double lMaior, double lEsquerda, double lDireita)
{
    if (pow(lMaior,2) == pow(lEsquerda,2) + pow(lDireita,2) ) //RETO
        printf("Classificacao em funcao dos angulos: RETO\n");

    else if (pow(lMaior,2) < pow(lEsquerda,2) + pow(lDireita, 2)) //AGUDO
        printf("Classificacao em funcao dos angulos: AGUDO\n");

    else if (pow(lMaior, 2) > pow(lEsquerda,2) + pow(lDireita,2)) //OBTUSO
        printf("Classificacao em funcao dos angulos: OBTUSO\n");
}
int main()
{
double l1, l2, l3, area, p;

scanf("%lf", &l1);
scanf("%lf", &l2);
scanf("%lf", &l3);

if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2) //Verifica se o triângulo é válido
{
    printf("Medidas dos lados formam um triangulo VALIDO\n");

//LADOS DO TRIÂNGULO
    if (l1 == l2 && l2 == l3) //Equilátero
        printf("Classificacao em funcao dos lados: EQUILATERO\n");

    else if((l1 != l2) && (l2 != l3) && (l1 != l3)) //Escaleno
        printf("Classificacao em funcao dos lados: ESCALENO\n");

    else //Isósceles
        printf("Classificacao em funcao dos lados: ISOSCELES\n");

//ÂNGULOS DO TRIANGULO
    if (l1 > l2 && l1 > l3) //se l1 é o maior lado
        fnImprimeAngulo(l1,l2,l3);

    else if (l2 > l1 && l2 > l3) //se l2 é o maior lado    
        fnImprimeAngulo(l2,l1,l3);

    else //se l3 é o maior lado
        fnImprimeAngulo(l3,l2,l1);
//ÁREA
    p = (l1 + l2 + l3) / 2;
    area = sqrt(p*(p-l1)*(p-l2)*(p-l3));
    printf("Area do triangulo: %g\n", area);
}
else //Se o lado não for válido
    printf("Medidas dos lados formam um triangulo INVALIDO\n");

return 0;
}