#include <stdio.h>

int main() {
    int filas, columnas;
    //ingresar las dimenciones de las matrices
    printf("Ingrese el numero de filas de las dos matrices: ");
    scanf("%d", &filas);
    printf("\n");
    printf("Ingrese el numero de columnas de las dos matrices: ");
    scanf("%d", &columnas);
    printf("\n");
    int matriz1[filas][columnas], matriz2[filas][columnas], matrizS[filas][columnas];

    //llenar las matrices
    for (int i = 0; i < 2; ++i) {
        printf("Ingrese los datos de la matriz %d.......\n", i + 1);
        for (int k = 0; k < filas; ++k) {
            for (int j = 0; j < columnas; ++j) {
                printf("Ingrese un numero: ");
                if (i == 0)
                    scanf("%d", &matriz1[k][j]);
                else
                    scanf("%d", &matriz2[k][j]);
            }
        }
        printf("\n");
    }

    //imprimir las dos matrices
    printf("\n");
    for (int k = 0; k < 2; ++k) {
        printf("Matriz %d..................\n", k + 1);
        for (int i = 0; i < filas; ++i) {
            printf("\n");
            for (int j = 0; j < columnas; ++j) {
                if (k == 0)
                    printf("%d\t", matriz1[i][j]);
                else
                    printf("%d\t", matriz2[i][j]);
            }
        }
        printf("\n");
    }

    //suma las matrices
    for (int l = 0; l < filas; ++l) {
        for (int i = 0; i < columnas; ++i) {
            matrizS[l][i] = matriz1[l][i] + matriz2[l][i];
        }
    }
    printf("\n");

    //imprime la suma de las dos matrices;
    printf("La suma de las dos matrices son.......\n ");
    for (int m = 0; m < filas; ++m) {
        printf("\n");
        for (int i = 0; i < columnas; ++i) {
            printf("%d\t", matrizS[m][i]);
        }
    }
    return 0;
}