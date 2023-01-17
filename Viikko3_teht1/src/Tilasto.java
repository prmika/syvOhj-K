public class Tilasto {
    public static double summa(double x, double y) {
        return x + y;
    }

    public static double keskiarvo(double x, double y){
        return x * y / 2;
    }
    public static double minimi(double x, double y){
        if (x >= y){
        return y ;}
        else {return x;}
    }
    public static double maksimi(double x, double y){
        if (x >= y){
            return x ;}
        else {return y;}
    }
}
