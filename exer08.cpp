#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float salHora,numHoras,salTotal;

    printf("Digite o valor de sua hora: ");
    scanf("%f",&salHora);
    printf("Quantas horas trabalhou neste mes?: ");
    scanf("%f",&numHoras);

    salTotal = salHora*numHoras;

    printf("Voce recebera de salario total: %.2f",salTotal);
}