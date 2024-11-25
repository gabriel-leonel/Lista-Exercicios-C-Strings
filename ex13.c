// 13. Criando um Programa Simples de Busca e Substituição: (Desafio)
// Leia um texto, uma palavra a ser buscada e uma palavra para substituição. Substitua todas as ocorrências da primeira palavra pela segunda.

#include <stdio.h>

#include <string.h>

int main()
{
    char string[100], palavra[20], palavraSubstituta[20], resultado[120];
    int i = 0, j = 0, k, encontrada = 0;

    printf("Digite uma string: ");
    fgets(string, 100, stdin); // fgets pega a string com espaços, passando o tamanho da string e o stdin

    printf("Digite a palavra a ser substituida: ");
    scanf("%s", palavra);

    printf("Para qual palavra?: ");
    scanf("%s", palavraSubstituta);

    while (string[i] != '\0')
    {
        encontrada = 0;
        while (string[i + j] == palavra[j] && palavra[j] != '\0') // enquanto a palavra for igual a string e a palavra não for nula 
        {
            j++;
        }
        if (palavra[j] == '\0')
        {
            encontrada = 1;
            for (j = 0; palavraSubstituta[j] != '\0'; j++, k++)
            {
                resultado[k] = palavraSubstituta[j];
            }
            i += strlen(palavra); // strlen retorna o tamanho da string
        }
        if (encontrada == 0)
        {
            resultado[k] = string[i];
            i++;
            k++;
        }
    }
    resultado[k] = '\0';

    printf("String nova: %s\n", resultado);
}
