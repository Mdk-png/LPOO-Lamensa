package prueba;

import java.util.Scanner;

public class Ejercicio5 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
				
		System.out.println("Menu");
		System.out.println("1. Suma");
		System.out.println("2. Resta");
		System.out.println("3. Multiplicacion");
		System.out.println("4. Division");
		System.out.println("5. Salir");
		System.out.print("\nIngrese su opcion: ");
		int opcion = scan.nextInt();
		
		System.out.print("Ingrese el primer numero: ");
        double num1 = scan.nextDouble();
        System.out.print("Ingrese el segundo numero: ");
        double num2 = scan.nextDouble();
        double resultado = 0;
        boolean operacionValida = true;

		switch (opcion) {
            case 1 -> resultado = num1 + num2;
            case 2 -> resultado = num1 - num2;
            case 3 -> resultado = num1 * num2;
            case 4 -> {
                if (num2 != 0) {
                    resultado = num1 / num2;
                } else {
                    System.out.println("division por cero no permitida.");
                    operacionValida = false;
                }
            }
            default -> {
                System.out.println("opcion no valida.");
                operacionValida = false;
            }
        }
		if (operacionValida) {
            System.out.println("Resultado: " + resultado);
        }

	}

}
