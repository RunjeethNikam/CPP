import java.util.Calendar;

/**
 * DayOfTheProgrammer
 */
public class DayOfTheProgrammer {

    public static void main(String[] args) {
        Calendar dt = Calendar.getInstance();
        int dayOfYear = 256;
        int year = 1984;
        dt.set(Calendar.YEAR, year);
        dt.set(Calendar.DAY_OF_YEAR, dayOfYear);
        System.out.println(dt.get(Calendar.DATE));
    }
}