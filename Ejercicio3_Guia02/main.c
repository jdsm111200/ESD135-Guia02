#include <stdio.h>

int main() {
    int filas, columnas;
    //ingresar las dimenciones de las matrices
    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &filas);
    printf("\n");
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &columnas);
    printf("\n");
    int matriz[filas][columnas];
    int suma=0;
    //llenar el arreglo
    for ( int i= 0; i < filas; i++) {
        for ( int j= 0;  j<columnas ; j++) {
            printf("Ingrese un numero: ");
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\n");
    //imprimir matriz
    printf("Elementos de la matriz..................\n");
    for (int i = 0;  i< filas; i++) {
        printf("\n");
        for (int j = 0;  j<columnas ; j++) {
            printf("%d\t",matriz[i][j]);
        }
    }
    //sumar todos los elementos de la matriz
    for (int k = 0; k <filas ; ++k) {
        for (int i = 0; i <columnas ; ++i) {
            suma=suma+matriz[k][i];
        }
    }
    //imprimir la suma de todos los elemetos de la matriz
    printf("\n");
    printf("La suma de todos los elementos de la matriz es %d",suma);
    return 0;
}