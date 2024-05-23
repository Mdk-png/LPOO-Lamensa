package prueba;

public class Ejercicio2 {

	public static void main(String[] args) {
		for(int x=50;x<=100; x++) {
			boolean primo = true;
            for (int y = 2; y < x; y++) {
                if (x % y == 0) {
                    primo = false;
                    break;
                }
            }
            if (primo) {
                System.out.println(x + " - primo");
            } else {
                System.out.print(x + " - divisores: ");
                for (int k = 1; k <= x; k++) {
                    if (x % k == 0) {
                        System.out.print(k + " ");
                    }
                }
                System.out.println();
            }
            
		}
	}

}
