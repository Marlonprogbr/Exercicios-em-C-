#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main(){
    float raio,area;

    printf("Digite o raio do circulo: ");
    scanf("%f",&raio);

    area = 3.1415926535898*pow(raio,2);

    printf("A Area do circulo e de %.2f",area);


}