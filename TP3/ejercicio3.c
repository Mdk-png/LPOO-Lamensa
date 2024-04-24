// Encontrar el mayor y el menor elemento de un arreglo usando punteros y funciones.
#include <stdio.h>
#include <conio.h>

int array[] = {12, 3, 6, 44, -19, 23};
int mayor = 0, menor;
void mayormenor(int *array, int *mayor, int *menor, int *n);

int main(){
    int x;
    int n = sizeof(array) / sizeof(array[0]);
    for (x = 0; x < n; x++)
    {
        printf("valor %d: %d\n", x, array[x]);
    }

    mayormenor(array, &mayor, &menor, &n);
    
    printf("El mayor numero del arreglo es: %d\n", mayor);
    printf("El menor numero del arreglo es: %d\n", menor);

    printf("\nIngrese cualquier tecla para finalizar\n");
    getch();
    return 0;
}

void mayormenor(int *array, int *mayor, int *menor, int *n){
    int i;

    for (i = 0; i < *n; i++)
    {
        if (*(array + i) > *mayor)
        {
            *mayor = *(array + i);
        }
    }

    *menor = *(array + 0);
    for (i = 0; i < *n; i++)
    {
        if (*(array + i) < *menor)
        {
            *menor = *(array + i);
        }   
    }    
}