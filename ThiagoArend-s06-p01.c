#include <stdio.h>

#define NUM_DIGITOS 128

/*
Converte um numero decimal para binario, e
exibe o resultado na tela

Entrada: Numero decimal
Saída: Número binário
*/

int main() {
    int dec, dec_original, resto, i, n;
    int bin[NUM_DIGITOS] = {0}; // inicializa com 0

    printf("Informe um numero decimal: ");
    scanf("%d", &dec);

    dec_original = dec; // salva decimal original

    i = NUM_DIGITOS - 1; // preenchemos do final para o começo, pois o primeiro bit a sair é o menos significativo
    do {
        resto = dec % 2; // resto da divisao por 2
        bin[i] = resto;
        dec = dec / 2; // guarda quociente da divisao inteira
        i--;
    } while(dec != 0); // enquanto o quociente for dif. de zero

    printf("\nValor [%d] em binario: [", dec_original); // inicia laço na ultima pos. lida; i = i + 1
    for(i = i + 1; i < NUM_DIGITOS; i++) {
        printf("%d", bin[i]);
    }
    printf("]\n");

    return 0;
}
