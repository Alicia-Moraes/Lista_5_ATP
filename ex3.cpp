#include<stdio.h>
#include<stdlib.h>

float celsius_para_fahrenheit (float celsius){
    return (celsius * 9 / 5) + 32; //conversao de celsius para fahrenheit
}

int main(){
    float graus, resultado;
    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &graus);
    resultado = celsius_para_fahrenheit(graus);
    printf("A temperatura em Fahrenheit e: %.2f", resultado); //imprime o resultado da conversao

getchar();
return 0;
}