
import java.util.Scanner;

public class ArrayColoring {
    static Scanner sc = new Scanner(System.in);

    static void solve(){
        int n = sc.nextInt();
        int arr[]= new int[n];
        int sum=0;

        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < arr.length; i++) {
            sum+=arr[i];
        }

        if(sum%2==0) System.out.println("YES");
        else System.out.println("NO");
    }
    public static void main(String[] args) {
        int t = sc.nextInt();
        while (t-->0) {
           solve(); 
        }        
    }
    
}