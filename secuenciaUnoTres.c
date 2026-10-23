#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void cadenaUnoTres(int array[], int size, int pos);

int main(int argc, char *argv[]){

    if (argc != 2){
        printf("Error - cantidad invalida de argumentos.\n");
        return 0;
    }

    int n = atoi(argv[1]);
    int array[n];

    cadenaUnoTres(array, n, 0);

}

void cadenaUnoTres(int array[], int size, int pos){
    if (pos == size){
        for (int i = 0; i < size; i++){
            printf("%d", array[i]);
        }

        printf("\n");
        return;
    }

    for (int i = 1; i < 4; i++){
        array[pos] = i;
        cadenaUnoTres(array, size, pos+1);
    }
}