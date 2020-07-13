// Imagine uma biblioteca em C que gerencie um novo tipo de strings. Neste tipo de dado, o tamanho da string é armazenado como um inteiro, de 4 bytes, nos primeiros bytes da string. Após esta informação, são colocados os bytes correspondentes aos caracteres da string. Note que ao final da sequência de caracteres da string não há um ‘\0'.
// imagine.png
// Crie a função imprimeNovaString que imprima uma string neste formato. A função deve receber um ponteiro para o início da string, na forma de um int *.
//
// void imprimeNovaString(int* s) {
//    ...
// }
//
// int main() {
//   int novaString[12];
// 
//   // Esta função não coloca um '\0' no final
//   copiaNovaString(novaString, "imagine");
//
//   imprimeNovaString(novaString);
//   return 0;
// }


#include <stdio.h>

void imprimeNovaString(int *string) {
    char *str = &string[0];
    printf("%d\n", sizeof(*str));
    // for(int i = 0; i <= 12; i++){
    //     for()
    //     char *letter = string[i];
    //     printf("%c\n", string[i]);
    // }
}

void copiaNovaString(int *string, char *str){
    int letters = 0;
    for(;str[letters] != '\0'; letters++){
        string[letters] = str[letters];
    }
}

int main() {
  int novaString[12];

  // Esta função não coloca um '\0' no final
  copiaNovaString(novaString, "imagine");

  imprimeNovaString(novaString);
  return 0;
}
