#include <stdio.h>
#include <stdbool.h>

bool reinaValida(int s[], int e);
bool reinas(int s[], int e, int n);


int main(void){

    int prueba[] = {0,0,0,0};
    bool solucion = reinas(prueba, 0, 4);
    for (int i = 0; i < 4; i++){
        printf("%d\n",prueba[i]);
    }

}

/*
s[] = es el arreglo de las columnas de la fila i 
e = es el indice de la fila que está intentando resolver
n = es la cantidad de reinas 
*/

bool reinas(int s[], int e, int n){
    bool solution = false;
    s[e] = 0;

    while (s[e] < n-1 && !solution){
        s[e] = s[e]+1;
        if (reinaValida(s, e)){
            if (e == n-1){
                solution = true;
            }
            else{
                solution = reinas(s, e+1, n);
            }
        }
    }
    return solution;

}

bool reinaValida(int s[], int e){
    for (int i = 0; i < e; i++){
        if (s[i] == s[e] || (s[i] - s[e] == i-e)){
            return false;
        }
    }

    return true;
}

