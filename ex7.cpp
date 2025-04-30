#include<stdio.h>
#include<stdlib.h>

void calcular_circulo(int raio, float *area, float *perimetro){
    const double pi = 3.141592653589793;
    *area = pi * (raio * raio);
    *perimetro = 2* pi * raio;
}
int main(){
    float raio, area, perimetro;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    calcular_circulo(raio, &area, &perimetro); //chama a funcao e substitui os valores de area e perimetro
    printf("Valor da area: %f\nValor do perimetro: %f\n", area, perimetro);

getchar();
return(0);
}