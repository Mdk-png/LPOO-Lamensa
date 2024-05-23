package prueba;

import java.util.Scanner;

public class Ejercicio3 {

	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int numero;
        boolean primo;
                        
        do {
        	System.out.print("Introduce un numero: ");
        	numero = scan.nextInt();
        	
    		primo = true;
            for (int x = 2; x < Math.sqrt(numero); x++) {
            	if (numero % x == 0) {
            		primo = false;
                    break;
                }
            }
        
        if(numero<=100 || !primo) {
        	System.out.println("el numero no es mayor que 100 o no es primo. Prueba nuevamente.");
        }
        }
        
        while(numero<=100 || !primo);
        System.out.println("el numero introducido es mayor que 100 y primo");
	


	
	
	
	}

}
