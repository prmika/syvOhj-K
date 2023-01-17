import java.util.ArrayList;

public class NumberSingleton {
    private ArrayList<Opiskelija> mNumber = new ArrayList<>();
    private static NumberSingleton instance = new NumberSingleton();

    public static NumberSingleton getInstance() {
        return instance;
    }

    private NumberSingleton () {
        mNumber = 0;
    }

    public int getNumber() {
        return mNumber;
    }
    public void updateNumber(int aNumber) {
        mNumber = aNumber;
    }
}
