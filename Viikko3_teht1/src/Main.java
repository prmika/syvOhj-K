public class Main {
    public static void main(String[] args){
        System.out.println("tehtävä 1");
        double x = 2.6;
        double y = 3.5;
        System.out.println(Tilasto.summa(x,y));
        System.out.println(Tilasto.keskiarvo(x,y));
        System.out.println(Tilasto.minimi(x,y));
        System.out.println(Tilasto.maksimi(x,y));
    }
}
