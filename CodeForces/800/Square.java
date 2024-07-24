import java.util.*;

public class Square {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) {
            int[][] a = new int[4][2];
            for (int j = 0; j < 4; j++) {
                for (int k = 0; k < 2; k++) {
                    a[j][k] = scanner.nextInt();
                }
            }
            int[] x = new int[4];
            for (int j = 0; j < 4; j++) {
                x[j] = a[j][0];
            }
            int dx = Arrays.stream(x).max().getAsInt() - Arrays.stream(x).min().getAsInt();
            System.out.println(dx * dx);
        }
    }
}
