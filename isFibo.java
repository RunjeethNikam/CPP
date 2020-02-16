import java.math.BigInteger;
import java.util.Scanner;

/**
 * isFibo
 */
public class isFibo {
    public static boolean check(BigInteger n){
        BigInteger x = n.sqrt();x = x.multiply(x);
        return (x.compareTo(n) == 0);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            BigInteger n = sc.nextBigInteger();
            BigInteger a = n.multiply(n).multiply(new BigInteger("5")).add(new BigInteger("4"));
            BigInteger b = n.multiply(n).multiply(new BigInteger("5")).subtract(new BigInteger("4"));
            if(check(a) || check(b)){
                System.out.println("IsFibo");
            }
            else{
                System.out.println("IsNotFibo");
            }
        }
    }
}