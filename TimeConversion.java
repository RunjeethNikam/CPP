import java.util.Scanner;

/**
 * TimeConversion
 */
public class TimeConversion {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String given = sc.nextLine();
        if(given.endsWith("AM")){
            if(given.startsWith("12")){
                given = given.replaceFirst("12", "00");
            }
            System.out.println(given.substring(0, given.length()-2));
        }
        else{
            given = given.substring(0, given.length()-2);
            String[] time = given.split(":");
            int te = Integer.parseInt(time[0]);
            if(te != 12){
                te += 12;
            }
            System.out.println(te+":" + time[1] + ":" + time[2]);
        }
    }
}