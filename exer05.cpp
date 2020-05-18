#include<stdio.h>
#include<stdlib.h>

int main(){
    float metros,cm;

    printf("Digite quantos metros gostaria de converter para centimetros: ");
    scanf("%f",&metros);

    cm = metros*100;

    printf("%.0f metros tem %.0f centimetros",metros,cm);



}