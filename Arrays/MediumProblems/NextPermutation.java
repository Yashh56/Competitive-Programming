package MediumProblems;

/**
 * NextPermutation
 */
public class NextPermutation {

    static void solution(int[] arr, int n) {
        int ind = -1;
        int ind1 = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                ind = i;
                break;
            }
        }
        if (ind == -1) {
            reverse(arr, 0);
        } else {
            for (int i = n - 1; i >= 0; i--) {
                if (arr[i] > arr[ind]) {
                    ind1 = i;
                    break;
                }
            }
            swap(arr, ind, ind1);
            reverse(arr, ind + 1);
        }
    }

    static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    static void reverse(int[] arr, int start) {
        int n = arr.length;
        int i = start;
        int j = n - 1;
        while (i < j) {
            swap(arr, i, j);
            i++;
            j--;
        }
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3 };
        int n = arr.length;
        solution(arr, n);
        // System.out.println(solution(arr, n));
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
    }
}