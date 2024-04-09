#include <string.h>
#include <stdio.h>
#include <conio.h>

int main(){
	int largo = 30;
	int x, y, cont = 0;
	char uno[largo];
	char vocales[10] = "AEIOUaeiou";
	
	printf("Ingrese una cadena de caracteres: ");
	scanf("%s", uno);
	
	for(x = 0; x < largo; x++){
		for(y = 0; y < 10; y++){
			if(uno[x] == vocales[y]){
				cont++;
			}
		}
	}
	
	printf("En la cadena habia %d vocales", cont);

	printf("\n\nToque cualquier boton para finalizar\n");
	getch();

	return 0;
}
