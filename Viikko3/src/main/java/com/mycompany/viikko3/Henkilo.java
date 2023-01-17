
package com.mycompany.viikko3;


public class Henkilo {
    private String mNimi;
    private int mIka;
    private Osoite mOsoite;

    public String getmNimi() {
        return mNimi;
    }

    public void setmNimi(String aNimi) {
        mNimi = aNimi;
    }

    public int getmIka() {
        return mIka;
    }

    public void setmIka(int aIka) {
        mIka = aIka;
    }

    public Henkilo(String aNimi, int aIka, Osoite aOsoite) {
        mNimi = aNimi;
        mIka = aIka;
        mOsoite = aOsoite;
    }
    public Henkilo(String aNimi, int aIka) {
        mNimi = aNimi;
        mIka = aIka;
    }
    
    public void tulostaTiedot(){
        System.out.println("Nimi: " + mNimi);
        System.out.println("Ikä: " + mIka);
        if(mOsoite != null){
            mOsoite.tulostaTiedot();
        }
    }



}
