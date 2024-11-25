// 10. Substituindo um Caractere por Outro : Leia uma string, um caractere a ser substituído e um caractere substituto.Substitua todas as ocorrências do primeiro caractere pelo segundo.


#include <stdio.h>

int main() {
    char string[35], caractere, caractereSubstituto;

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("Digite o caractere a ser substituido: ");
    scanf("%c", &caractere);

    printf("Para qual caractere?: ");
    scanf(" %c", &caractereSubstituto);

    for (int i = 0; string[i] != '\0'; i++) { // percorrendo ate o final da string
        if (string[i] == caractere) { // se o caractere atual for igual ao caractere a ser substituido
            string[i] = caractereSubstituto; // substitui o caractere atual pelo caractere substituto
        }
    }

    printf("String apos substituicao: %s\n", string);
}