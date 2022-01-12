public class Helloworld {
	public static void main( String args[] ){

	//luodaan opiskelija kalle ja ville
	Opiskelija kalle = new Opiskelija("Kalle", "12345");
	Opiskelija ville = new Opiskelija();

	ville.tulostatiedot();

	ville.setNimi ( "Ville Virtanen" );
	ville.setOpiskelijanumero("45645");
	ville.setOpintopisteet(40);
	
	kalle.tulostatiedot();
	ville.tulostatiedot();
	//ei deleteä, roskienkeruu hoituu vapautuksen kun hoitaa
	
	}
}
