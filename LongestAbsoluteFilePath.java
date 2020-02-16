import java.util.Scanner;
import java.util.Stack;

/**
 * LongestAbsoluteFilePath
 */
public class LongestAbsoluteFilePath {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        int maxlen = 0;
        Stack stack = new Stack<> ();
        stack.push(0);
        String arr[] = input.split("\n");
        for(String s: arr){
            int hi = s.lastIndexOf("\t");
            int lev = hi +1;
            while(lev + 1 < stack.size())
            stack.pop();
            int len = (int)stack.peek() + s.length()-lev + 1;
            stack.push(len);
            if(s.contains("."))
            maxlen = Math.max(maxlen, len-1);
        }
        System.out.println(maxlen);
    }
}