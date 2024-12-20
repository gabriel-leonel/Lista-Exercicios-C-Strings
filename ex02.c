// 2. Concatenando Strings : Leia duas strings e concatene - as, imprimindo o resultado.Crie uma função para concatenar duas strings.

// BUG solucionado: Agora imprime as duas strings separadas utilizano o método fgets ao invés do scanf

#include <stdio.h>
#include <string.h>

char* concatenaString(char str1[], char str2[]){
    static char stringConcatenada[60];
    strcpy(stringConcatenada, str1); // Copia str1 para stringConcatenada
    strcat(stringConcatenada, str2); // Concatena str2 a stringConcatenada
    return stringConcatenada;
}

int main(){
    char str1[30], str2[30];
    printf("Digite a primeira string: ");
    fgets(str1, 30, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, 30, stdin);
    printf("Strings concatenadas: %s", concatenaString(str1, str2));
}
