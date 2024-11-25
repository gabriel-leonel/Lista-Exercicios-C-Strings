// 9. Verificando se uma String é Palíndromo : Leia uma string e verifique se ela é um palíndromo(lê - se da mesma forma de trás para frente).
#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    printf("Digite uma string: ");
    scanf("%s", str);

    for (int i = 0, j = strlen(str) - 1; j > i; i++, j--) // i percorre a string da esquerda para a direita e j da direita para a esquerda
    {
        if (str[i] != str[j]) // Se os caracteres não forem iguais, a string não é um palindromo
        {
            printf("A string nao eh um palindromo.\n");
            return 0;
        }
    }

    printf("A string eh um palindromo.\n");
}