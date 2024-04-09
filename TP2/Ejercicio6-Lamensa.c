#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
	char palabra1[50];
	char palabra2[50];
	int contador;
	int i, j;

	printf("Ingrese 2 palabras\n");
	printf("palabra 1: ");
	scanf("%s", palabra1);

	printf("palabra 2: ");
	scanf("%s", palabra2);

	int largo1 = strlen(palabra1);
	int largo2 = strlen(palabra2); 

	if(largo1 != largo2){
		printf("No es un anagrama\n");
		return 0;
	}

	for(i = 0; i < largo1; i++){
		for(j = 0; j < largo1; j++){
			if(palabra1[i] == palabra2[j]){
				contador++;
				break;
			}
		}
	}

	if(contador == largo1){
		printf("Es un anagrama");
	} else{
		printf("No es un anagrama");
	}

	printf("\n\nToque cualquier boton para finalizar\n");
	getch();

	return 0;
}