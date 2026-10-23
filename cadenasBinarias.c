#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void cadenaBinaria(int array[], int arraySize, int e);

int main(int argc, char *argv[]){

    if (argc != 2){
        printf("Error - cantidad invalida de argumentos.\n");
        return 0;
    }

    int n = atoi(argv[1]);
    int array[n];

    cadenaBinaria(array, n, 0);

}

void cadenaBinaria(int array[], int arraySize, int e){
    if (e == arraySize){
        for (int i = 0; i < arraySize; i++){
            printf("%d", array[i]);
        }
        printf("\n");
        return;
    }

    array[e] = 0;
    cadenaBinaria(array, arraySize, e+1);

    array[e] = 1;
    cadenaBinaria(array, arraySize, e+1);

}

