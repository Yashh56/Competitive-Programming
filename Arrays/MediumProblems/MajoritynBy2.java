package MediumProblems;

public class MajoritynBy2 {
    public static int majorityInt(int[] arr) {
        int n = arr.length;
        int element = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (cnt == 0) {
                cnt = 1;
                element = arr[i];
            } else if (arr[i] == element) {
                cnt++;
            } else {
                cnt--;
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= element) {
                count++;
            }
            if (count > n / 2)
                return element;
        }
        return -1;
    }
}
