
import java.util.*;

public class DoremysPaint {

    static Scanner sc = new Scanner(System.in);

    public static void solve(){
        int n = sc.nextInt();
        Map<Integer,Integer> m= new HashMap<>();
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            m.put(x,m.getOrDefault(x, 0)+1);
        }
        if(m.size()>2) System.out.println("No");
        else if (m.size()==1) System.out.println("Yes");
        else{
            for(Map.Entry<Integer,Integer>entry:m.entrySet()){
                if(entry.getValue()<n/2){
                    System.out.println("No");
                    return ;
                }
            }
            System.out.println("Yes");
        }
    }

    public static void main(String[] args) {
        int t= sc.nextInt();
        while (t-->0) {
            solve();
        }
    }
}