#include <stdio.h>
#include <string.h>

int main(){
	char string[30];

	printf("ingrese una cadena de caracteres: ");
	scanf("%s", string);
	
	char buscar;
	int i;
	char reemplazar;
	
	printf("Ingrese el caracter que quiere reemplazar en la cadena: ");
	scanf(" %c", &buscar);

	printf("Ingrese el caracter por el que lo quiere reemplazar: ");
	scanf(" %c", &reemplazar);

	int largo = strlen(string);
	
	for(i = 0; i < largo ; i++){
	    if(string[i] == buscar){
	        string[i] = reemplazar;
        }
	}

	printf("La cadena con los caracteres reemplazados: %s", string);

    return 0;
}