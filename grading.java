import java.util.Scanner;
import java.util.Vector;

/**
 * grading
 */
public class grading {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for(int a0 = 0;a0 < n;a0++){
            int grade = in.nextInt();
            System.out.println(getRoundedGrade(grade));
        }
    }
    public static int getRoundedGrade(int grade){
        if(grade >= 38){
            int mod5 = grade%5;
            if(mod5 > 2){
                grade += 5-mod5;
            }
        }
        return grade;
    }
}