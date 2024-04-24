// Concatenar dos cadenas usando punteros y funciones.
#include <stdio.h>
#include <conio.h>
#include <string.h>

char array1[20];
char array2[20];
int x;
void junta(char *array1, char *array2);

int main(){
    strcpy(array1, "Hola como ");
    strcpy(array2, "andas");

    printf("Primer cadena: %s\n", array1);
    printf("Segunda cadena: %s\n", array2);

    junta(array1, array2);

    printf("\nIngrese cualquier tecla para finalizar\n");
    getch();
    return 0;
}

void junta(char *array1, char *array2){
    strcat(array1, array2);
    printf("El array final es: %s", array1);
}
