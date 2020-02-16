import java.math.BigInteger;
import java.util.Scanner;

/**
 * Restaurant
 */
public class Restaurant {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            BigInteger l = sc.nextBigInteger(), b = sc.nextBigInteger();
            BigInteger gcd = l.gcd(b);
            gcd = gcd.multiply(gcd);
            BigInteger box = l.multiply(b);
            System.out.println(box.divide(gcd));
        }
    }
}