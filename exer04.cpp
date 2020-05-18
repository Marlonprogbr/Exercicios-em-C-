#include<stdio.h>
#include<stdlib.h>

int main(){
    float num1,num2,num3,num4,media;

    printf("Digite a nota do primeiro bimestre: ");
    scanf("%f",&num1);
    printf("Digite a nota do segundo bimestre: ");
    scanf("%f",&num2);
    printf("Digite a nota do terceiro bimestre: ");
    scanf("%f",&num3);
    printf("Digite a nota do quarto bimestre: ");
    scanf("%f",&num4);

    media = (num1+num2+num3+num4)/4;

    printf("A media dos 4 bimestres foi de : %.2f",media);

}