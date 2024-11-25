// 1. Leitura e Impressão:
// Leia uma string e a imprima na tela.
// Leia duas strings e as imprima em linhas separadas.

#include <stdio.h>

int main()
{
    char str1[30];
    char str2[30], str3[30];

    printf("Digite uma string: ");
    scanf("%s", str1);
    printf("String digitada: %s\n\n\n", str1);

    printf("Digite a segunda string: ");
    scanf(" %s", str2);
    printf("Digite a terceira string: ");
    scanf(" %s", str3);

    printf("String 2: %s\nString 3: %s", str2, str3);
}