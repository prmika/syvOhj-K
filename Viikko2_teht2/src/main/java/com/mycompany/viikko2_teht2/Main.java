
package com.mycompany.viikko2_teht2;

public class Main{
	public static void main( String[] args ){
        Opiskelija lyyli = new Harjoittelija();
	Opiskelija ville = new Harjoittelija("Ville", "12345", "Gofore", 2000);
       
        ville.tulostaTiedot();
            System.out.println("----------------");
        lyyli.tulostaTiedot();

	//ei deleteä, roskienkeruu hoituu vapautuksen kun hoitaa
	
	}
}
