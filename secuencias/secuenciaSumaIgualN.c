#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void sumaIgualN(int array[], int size, int pos, int accum);

int main(int argc, char *argv[]){

    if (argc != 2){
        printf("Error - cantidad invalida de argumentos.\n");
        return 0;
    }

    int n = atoi(argv[1]);
    int array[n];

    sumaIgualN(array, n, 0, 0);

}

void sumaIgualN(int array[], int n, int pos, int accum){

    if (accum >= n){

        if (accum == n){
            for (int i = 0; i < pos; i++){
                printf("%d", array[i]);
            }

            printf("\n");
        }

        return;
    }

    array[pos] = 1;
    sumaIgualN(array, n, pos+1, accum + array[pos]);


    array[pos] = 2;
    sumaIgualN(array, n, pos+1, accum + array[pos]);
}