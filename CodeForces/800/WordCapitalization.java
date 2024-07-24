import java.util.Scanner;

public class WordCapitalization {
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        String Input = sc.next();
        String Output = Input.substring(0,1).toUpperCase()+Input.substring(1);
        System.out.println(Output);
    }
}
