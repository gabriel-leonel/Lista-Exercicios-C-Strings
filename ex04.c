// 4. Comparando Strings : Leia duas strings e compare - as, indicando se são iguais ou diferentes.

#include <stdio.h>

int main(){
    char str1[30], str2[30];
    int i = 0, j = 0, flag = 0;
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);
    while (str1[i] != '\0' && str2[j] != '\0'){ // enquanto não chegar ao fim de uma das strings 
        if (str1[i] != str2[j]){ // se o caractere da primeira para a segunda no indice i forem diferentes
            flag = 1; // flag recebe 1 para indicar que as strings são diferentes
            break; // encerra o loop
        }
        i++;
        j++;
    }
    if (flag == 0){
        printf("As strings sao iguais.");
    } else {
        printf("As strings sao diferentes.");
    }
}