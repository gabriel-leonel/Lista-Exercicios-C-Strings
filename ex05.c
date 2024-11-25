// 5. Convertendo para Maiúsculas / Minúsculas : Leia uma string e converta todas as letras para maiúsculas ou minúsculas.

#include <stdio.h>

int main()
{
    char string[40];
    int i;

    printf("Digite uma string: ");
    scanf("%s", string);

    if (string[0] >= 'a' && string[0] <= 'z') // se a primeira letra for minúscula
    {
        for (i = 0; string[i] != '\0'; i++)
        {
            string[i] = string[i] - 32; // A diferença entre a letra minúscula e maiúscula na tabela ASCII é 32
        }
        printf("String em maiusculas: %s\n", string);
    }
    else
    { // se for maiuscula
        for (i = 0; string[i] != '\0'; i++)
        {
            if (string[i] >= 'A' && string[i] <= 'Z')
            {
                string[i] = string[i] + 32; // Mesma coisa de maiuscula para minuscula
            }
        }
        printf("String em minusculas: %s\n", string);
    }
}