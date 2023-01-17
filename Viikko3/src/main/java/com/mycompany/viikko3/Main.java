
package com.mycompany.viikko3;

import java.util.Scanner;


public class Main {
    public static void main( String[] args ){
      Henkilo pekka = new Henkilo("Pekka", 20);
        
        Henkilo henkilot[] = new Henkilo[10];
        henkilot[0] =new Henkilo("Kalle", 20);

    Scanner scanner = new Scanner(System.in);
        System.out.println("Nimesi?");
    String nimi = scanner.nextLine();
    
        System.out.println("Nimesi: " + nimi);
        System.out.println("luku? ");
        int luku = scanner.nextInt();
        System.out.println("lukusi: " + luku);



    }
    
    
    
    
}
