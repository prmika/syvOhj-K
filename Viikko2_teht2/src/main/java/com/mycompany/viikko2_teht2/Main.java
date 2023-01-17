
package com.mycompany.viikko2_teht2;

public class Main{
	public static void main( String[] args ){
        Opiskelija lyyli = new Harjoittelija();
	Opiskelija ville = new Harjoittelija("Ville", "12345", "Gofore", 2000);
        Harjoittelija testimies= new Harjoittelija();
        testimies.setNimi("Testimies");
        Opiskelija kaisa = new Opiskelija("Kaisa", "93848");
       
        ville.tulostaTiedot();
            System.out.println("----------------");
       kaisa.tulostaTiedot();
            System.out.println("----------------");
            testimies.tulostaTiedot();
            System.out.println("----------------");
        lyyli.tulostaTiedot();

	//ei deleteä, roskienkeruu hoituu vapautuksen kun hoitaa
	
	}
}
