public class Henkilo extends Osoite{
    private String mNimi;
    private int mIka;
    private Osoite mOsoite = null;
    private static int counter = 0;

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
        counter++;
    }
    public Henkilo() {
        mNimi = "Nimi";
        mIka = 0;
        counter++;
    }
    public int getHloLkm(){
        return counter;
    }

    public void tulostaTiedot(){
        System.out.println("Nimi: " + mNimi);
        System.out.println("Ikä: " + mIka);
        if(mOsoite != null) {
            mOsoite.tulostaTiedot();
        }
    }



}