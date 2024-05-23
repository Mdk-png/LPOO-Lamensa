package prueba;

import java.util.Scanner;

public class Ejercicio4 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
	    System.out.print("Ingrese la largo del arreglo: ");
	    int largo = scan.nextInt();

	    int[] arreglo = new int[largo];

		
	    for (int x = 0; x < largo; x++) {
	        System.out.print("Elemento " + (x + 1) + ": ");
	        arreglo[x] = scan.nextInt();
	    }
		
		for(int numero : arreglo) {
			System.out.println(numero);
		}
	}

}
