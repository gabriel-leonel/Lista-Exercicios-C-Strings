// 6. Invertendo uma String : Leia uma string e inverta a ordem de seus caracteres.

#include <stdio.h>

int main() {
    char str[30];
    int i, j, tamanhoString;

    printf("Digite uma string: ");
    scanf("%s", str);

    for (tamanhoString = 0; str[tamanhoString] != '\0'; tamanhoString++); // Conta o tamanho da string

    for (i = 0, j = tamanhoString - 1; i < j; i++, j--) { // i percorre a string da esquerda para a direita e j da direita para a esquerda
        char hold = str[i]; //  hold guarda o valor de str[i] antes de ser substituido
        str[i] = str[j];
        str[j] = hold;
    }

    printf("String invertida: %s\n", str);
}