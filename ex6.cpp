#include<stdio.h>
#include<stdlib.h>

int eh_palindromo(int numero) {
    int original = numero;
    int invertido = 0;

    while (numero > 0) {
        int digito = numero % 10; //com o resto da divisao vai separando os digitos do numero
        invertido = invertido * 10 + digito;
        numero = numero / 10;
    }
    if (original == invertido){ //se o original for igual o invertido e palindromo
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int a;
    printf("Digite o numero: ");
    scanf("%d", &a);

    if (eh_palindromo(a)) {
        printf("%d eh palindromo.\n", a);
    } else {
        printf("%d nao eh palindromo.\n", a);
    }

getchar();
return 0;
}