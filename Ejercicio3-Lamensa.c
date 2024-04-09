#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
	char palabra[30];
	char revez[30];
	int i, contador = 0;
    bool pali;

	printf("Ingrese una palabra: ");
	scanf("%s", palabra);

	int longitud = strlen(palabra);

	for(i = longitud - 1; i >= 0; i--){
		revez[contador] = palabra[i];
		contador++;
    }

	// printf("%s", revez);

	for(i = 0; i < longitud; i++){
		if(revez[i] != palabra[i]){
			pali = false;
            break;
		}else{
            pali = true;
        }
		
	}

    if (pali)
    {
	    printf("\nLa palabra es palindroma");
    } else{
        printf("\nLa palabra no es palindroma\n");
    }
    


}