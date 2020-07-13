// Considerando que em um dado compilador uma variável do tipo unsigned int tem 4 bytes,
// construa uma função que receba quatro valores unsigned char como parâmetro, e retorne
// um unsigned int correspondente (imagine que os unsigned char estão em ordem, do menos
// ao mais significativo). Não é permitido utilizar operações de multiplicação ou potência,
// utilize obrigatoriamente apenas operações bitwise. Exemplo: uma chamada converteParaInt
// (3,1,0,0) deve retornar o valor 259.
#include <stdio.h>
#include <limits.h>

int converteParaInt(unsigned char a, unsigned char b, unsigned char c, unsigned char d) {
    unsigned int resp = 0;

    resp |= a;
    resp |= b << 8;
    resp |= c << 16;
    resp |= d << 24;

    return resp;
}

int main(int argc, char const *argv[]) {
    unsigned char a = 3;
    unsigned char b = 1;
    unsigned char c = 0;
    unsigned char d = 0;

    int resp = converteParaInt(a, b, c, d);
    printf("\nA resposta deve ser 259:: %d\n", resp);

    return 0;
}
