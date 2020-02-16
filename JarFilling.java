import java.math.BigInteger;
import java.util.Scanner;

/**
 * JarFilling
 */
public class JarFilling {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger N, M;
        N = sc.nextBigInteger(); M = sc.nextBigInteger();
        BigInteger sum = new BigInteger("0");
        for (int i = 0; i < M.intValue(); i++) {
            BigInteger a, b, k;
            a = sc.nextBigInteger(); b = sc.nextBigInteger(); k = sc.nextBigInteger();
            BigInteger x = b.subtract(a).add(new BigInteger(new String("1"))).multiply(k);
            sum = sum.add(x);
        }
        System.err.println(sum.divide(N));
        System.out.println(sum.divide(N));
    }
}