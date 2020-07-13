// Considere uma matriz de 5000 x 5000 floats alocada dinamicamente, mas como um vetor.
// int main() {
//    float *mat = malloc(5000 * 5000 * sizeof *mat);
//    ...
// }
//
// Escreva funções que recebam a matriz como parâmetro e realizem as seguintes ações:
// Calcular e retornar o somatório de todos os elementos em posições pares (0,2,4,...) da matriz, tanto para linhas como para colunas.
// Calcular o maior valor de cada coluna da matriz, preenchendo por referência um vetor maior de 5000 floats.

#include <stdio.h>
#include <malloc.h>

float sumPairs(float *mat);
float *columnBiggest(float *mat);

int main(int argc, char const *argv[]) {
    float *mat = malloc(5000 * 5000 * sizeof *mat);
    printf("Resultado das pares: %.3f\n", sumPairs(mat));
    float *vec = columnBiggest(mat);

    for(int i = 0; i < 5000; i++){
        printf("%.3f ", vec[i]);
    }
    printf("\n");
    return 0;
}

float sumPairs(float *mat){
    float result = 0.0;
    for(int i = 0; i <= 25000000; i++){
        if( i % 2 == 0 ){
            result += mat[i];
        }
    }
    return result;
}

float *columnBiggest(float *mat){
    float *vec = malloc(5000 * sizeof *vec);
    float temp = 0.0;
    for(int row = 0; row < 5000; row++){
        for(int column = 0; column < 5000; column++){
            temp = mat[(row * 5000) + column];
            if(temp > vec[row]){
                vec[row] = temp;
            }
        }
    }
    return vec;
}
