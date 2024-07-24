import java.util.Scanner;

public class MakeItWhite {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            String word = sc.next();
            int first = word.indexOf("B");
            int last = word.lastIndexOf("B");
            int ans = last - first;

            if (first == -1)
                System.out.println(0);

            ans+=1;
            System.out.println(ans);
        }
    }
}