package com.mycompany.viikko3;

public class ObserveDemo {
    public static void main(String args[]){
    EventProvider provider = new EventProvider();
    OmaKuuntleijaLuokka kuuntelija = new OmaKuuntleijaLuokka();
    provider.setOmaLuokka(kuuntelija);
    provider.setLuku(10);

    }
}
class OmaKuuntleijaLuokka implements EventListener {
    public OmaKuuntleijaLuokka(){
        System.out.println("kuuntelijan luonti");
    }

    @Override
    public void lukuPaivitetty(int aLuku) {
        System.out.println("Luku päivitetty, uusi luku on " + aLuku);
    }
}
    interface  EventListener{
    public void lukuPaivitetty (int aLuku);
    }
class EventProvider {
    private int mLuku = 0;
    private EventListener mKuuntelija = null;
    public EventProvider(){
        System.out.println("Event providerin luonti");
    }
    public void setOmaLuokka(EventListener aKuuntelija){
        mKuuntelija = aKuuntelija;
    }
    public void setLuku (int aLuku) {
        if ( mLuku != aLuku){
            mLuku = aLuku;
            //Jos meillä on kuuntelija ilmoitetaan kuuntelijalle
            if ( mKuuntelija != null){
                System.out.println("kuuntelija löytyi");
                mKuuntelija.lukuPaivitetty(mLuku);
            }
        }
    }
}