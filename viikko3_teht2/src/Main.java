import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main( String[] args ) {
        Osoite x = new Henkilo("Pekka", 20, new Osoite());
    int i = 0;
        System.out.println("1. add new person");
        System.out.println("2. Delete person");
        System.out.println("3. Print Persons");
        System.out.println("4. stop");
        Scanner scanner = new Scanner(System.in);

        i = scanner.nextInt();

        while(i != 4){
            if (1 == 1){
                List<String> kulli = new ArrayList<>();
                System.out.println("Enter name of the person");
                kulli

            }
            i = scanner.nextInt();
        }

    }
}
