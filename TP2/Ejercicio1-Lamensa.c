#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
	char nombre[20];
	
	printf("Ingrese su nombre: ");
	scanf("%s", nombre);
	
	printf("Su nombre es: %s", nombre);

	printf("\n\nToque cualquier boton para finalizar\n");
	getch();

	return 0;
}
