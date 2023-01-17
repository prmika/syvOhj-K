
package com.mycompany.viikko3;


public class Osoite {
    private String mKatu;
    private String mPostinumero;
    private String mKunta;
    
    public Osoite(String aKatu, String aPostinumero, String aKunta){
        mKatu = aKatu;
        mPostinumero = aPostinumero;
        mKunta = aKunta;
        System.out.println("Osoite luokan 3parametrin rakentaja");
    }

    public String getmKatu() {
        return mKatu;
    }

    public void setmKatu(String aKatu) {
        mKatu = aKatu;
    }

    public String getmPostinumero() {
        return mPostinumero;
    }

    public void setmPostinumero(String aPostinumero) {
        mPostinumero = aPostinumero;
    }

    public String getmKunta() {
        return mKunta;
    }

    public void setmKunta(String aKunta) {
        mKunta = aKunta;
    }
    
    
    
   public void tulostaTiedot(){
        System.out.println("Katu: " + mKatu);
        System.out.println("Postinumero: " + mPostinumero);
        System.out.println("Kunta: " + mKunta);
    }
}
