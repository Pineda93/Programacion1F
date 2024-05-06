import java.util.Scanner;

public class MyProgram extends ConsoleProgram
{
    public void run()
    {
        Scanner scanner = new Scanner(System.in);
        
        int numero = 0;
        do {
            System.out.print("Ingrese un numero: ");
            numero = scanner.nextInt();
        } while(numero > 0);
        System.out.print("Fin de ciclo do while");
        
        while (numero >=0) {
            System.out.print("Ingrese un numero: ");
            numero = scanner.nextInt();   
        }
        System.out.print("Fin de ciclo while");
    }
}
