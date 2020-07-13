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
