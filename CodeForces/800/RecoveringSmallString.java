import java.util.Scanner;

public class RecoveringSmallString {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); // Number of test cases

        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt(); // Encoded sum for the current test case
            System.out.println(findSmallestWord(n));
        }
    }

    private static String findSmallestWord(int n) {
        // Iterate through all possible combinations of three letters
        for (int i = 1; i <= 26; i++) {
            for (int j = 1; j <= 26; j++) {
                for (int k = 1; k <= 26; k++) {
                    if (i + j + k == n) {
                        // Construct the word from the indices i, j, k
                        return "" + (char) ('a' + i - 1) + (char) ('a' + j - 1) + (char) ('a' + k - 1);
                    }
                }
            }
        }
        return ""; // In case no combination is found, which shouldn't happen as per problem
                   // constraints
    }
}
