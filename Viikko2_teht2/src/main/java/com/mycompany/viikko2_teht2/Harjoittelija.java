
package com.mycompany.viikko2_teht2;

class Harjoittelija extends Opiskelija{
    String työpaikka;
    float palkka;

    public String getTyöpaikka() {
        return työpaikka;
    }

    public void setTyöpaikka(String työpaikka) {
        this.työpaikka = työpaikka;
    }

    public float getPalkka() {
        return palkka;
    }

    public void setPalkka(float palkka) {
        this.palkka = palkka;
    }

    public Harjoittelija(String aNimi, String aOpiskelijanumero, String työpaikka, float palkka) {
        super(aNimi, aOpiskelijanumero);
        this.työpaikka = työpaikka;
        this.palkka = palkka;
        System.out.println("Harjoittelijan 4 parametrin rakentaja");
    }
    public Harjoittelija() {
        setNimi("-----");
        setOpintopisteet(0);
        this.työpaikka = "TYHJÄ";
        this.palkka = 0;
        System.out.println("Herjoittelijan oletus rakentaja");
    }
    public void tulostaTiedot() {
        System.out.println("Nimi: " + getNimi() ); 
 	System.out.println("Opintopisteet: " + getOpintopisteet());
        System.out.println("Työpaikka: " + työpaikka);
        System.out.println("Palkka: " + palkka);
    }   
}
