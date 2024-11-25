// 3. Calculando o Comprimento : Leia uma string e calcule o seu comprimento, sem usar a função strlen.

#include <stdio.h>

int main(){
    char str[30];
    int i = 0;
    printf("Digite uma string: ");
    scanf("%s", str);
    while (str[i] != '\0'){ // '\0' é o caractere que indica o fim da string
        i++;
    }
    printf("Comprimento da string: %d", i);
}