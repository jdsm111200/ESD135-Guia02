#include <stdio.h>

int main() {
    //declaramos variables
    int fila, columna, i, j, opcion1, opcion2, suma = 0;
    //pedimos dimension de la matriz
    printf("ingrese filas de la matriz");
    scanf("%d", &fila);
    printf("ingrese columnas de la matriz");
    scanf("%d", &columna);
    //declaramos la matriz
    int matriz1[fila][columna];
    //llenamos el arreglo
    printf("llene el arrelo ");
    printf("\n");
    for (i = 0; i < fila; i++) {
        for (j = 0; j < columna; j++) {
            printf("ingrese el dato(fila[%d]columna[%d]);", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    //menu que pregunta que desea hacer
    printf(" ingrese una opcion: \n1:sumar filas, 2:sumar columnas otro:salir");
    scanf("%d", &opcion1);
    while (opcion1 > 0 && opcion1 < 3) {
        //si eligio filas
        if (opcion1 == 1) {
            suma = 0;
            printf("que fila desea sumar?");
            scanf("%d", &opcion2);
            if (opcion2 >= 0 && opcion2 <= fila) {
                for (j = 0; j < columna; j++) {
                    suma = suma + matriz1[opcion2][j];
                }
                printf("la suma es: %d", suma);
                printf("\n");
            } else {
                printf("esa fila no existe");
                printf("\n");
            }
        } else {
            //si eligio columnas
            suma = 0;
            printf("que columna desea sumar?");
            scanf("%d", &opcion2);
            if (opcion2 >= 0 && opcion2 <= columna) {
                for (i = 0; i < fila; i++) {
                    suma = suma + matriz1[opcion2][i];
                }
                printf("la suma es: %d", suma);
                printf("\n");
            } else {
                printf("esa fila no existe");
                printf("\n");
            }
        }
        printf(" ingrese una opcion: \n1:sumar filas, 2:sumar columnas otro:salir");
        scanf("%d", &opcion1);
    }
    return 0;
}