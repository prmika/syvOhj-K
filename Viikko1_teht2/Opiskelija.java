public class Opiskelija {
	//Tietojäsenet alkuun
	private String mNimi;
	private String mOpiskelijanumero;
	private int mOpintopisteet = 0;

	public Opiskelija(){
	System.out.println("vakioparametri opiskelija luotu." );
	mNimi = "Tuntematon";
	mOpiskelijanumero = "xxxxx";
	mOpintopisteet = 0;
}	
	public Opiskelija(String aNimi, String aOpiskelijanumero){
	System.out.println("2 parametrin opiskelija luotu" );
	mNimi = aNimi;
	mOpiskelijanumero = aOpiskelijanumero;
}
	public void setNimi(String aNimi ){
	mNimi = aNimi;
}
	public String getNimi(){
	return mNimi;
}
	public void setOpintopisteet(int aOpintopisteet){
	mOpintopisteet = aOpintopisteet;
} 
	public int getOpintopisteet(){
	return mOpintopisteet;
}
	public void setOpiskelijanumero(String aOpiskelijanumero ){
	mOpiskelijanumero = aOpiskelijanumero;
}
	public String getOpiskelijanumero(){
	return mOpiskelijanumero;
}
	public void tulostatiedot(){
	System.out.println("Nimi: " + mNimi );
 	System.out.println("Opiskelijanumero: " + mOpiskelijanumero); 
 	System.out.println("Opintopisteet: " + mOpintopisteet); 

	}

}
