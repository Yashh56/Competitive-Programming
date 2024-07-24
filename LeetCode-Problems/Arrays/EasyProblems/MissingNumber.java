package EasyProblems;

public class MissingNumber {
    static int missingNum(int[] arr, int n) {
        int xor1 = 0, xor2 = 0;
        for (int i = 0; i < n - 1; i++) {
            xor2 = xor2 ^ arr[i];
            xor1 = xor1 ^ (i + 1);
        }
        xor1 = xor1 ^ n;
        return (xor1 ^ xor2);
    }

    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5, 6, 7, 9 };
        int n = 9;
        System.out.println(missingNum(arr, n));

    }
}
