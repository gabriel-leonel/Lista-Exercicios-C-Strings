// 11. Quebrando uma String em Palavras : Leia uma frase e quebre - a em palavras, armazenando cada palavra em um vetor de strings.

#include <stdio.h>

int main() {
    char string[60], palavra[60][60];
    int j = 0, k = 0;

    printf("Digite uma frase: ");
    fgets(string, 60, stdin); // fgets pega a string com espaços, passando o tamanho da string e o stdin

    for (int i = 0; string[i] != '\0'; i++) { // percorrendo a string
        if (string[i] == ' ') { // se o caractere atual for um espaço
            palavra[j][k] = '\0'; // adiciona o caractere nulo no final da palavra
            j++;
            k = 0;
        } else { // se não for um espaço
            palavra[j][k] = string[i]; // adiciona o caractere atual na palavra
            k++;
        }
    }

    printf("Palavras da string:\n");
    for (int i = 0; i <= j; i++) { // percorre as palavras e imprime
        printf("%s\n", palavra[i]);
    }
}