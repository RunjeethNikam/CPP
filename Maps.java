import java.util.HashMap;
import java.util.Map;

/**
 * Maps
 */
public class Maps {

    public static void main(String[] args) {
        Map<String, Integer> hm = new HashMap<>();
        hm.put("a", 100);
        // Set<Map.Entry<String, Integer>> st = hm.entrySet();
        for (Map.Entry<String, Integer> me : hm) {
            System.out.println(me.getKey()+" "+me.getValue());
        }
    }
}