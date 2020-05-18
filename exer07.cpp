#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float raio,area;

    printf("Digite o raio do circulo: ");
    scanf("%f",&raio);

    area = 3.1415926535898*pow(raio,2);

    printf("O dobro da area do circulo e de %.2f",area*2);
}