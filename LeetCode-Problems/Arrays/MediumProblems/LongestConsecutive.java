package MediumProblems;

import java.util.HashSet;
import java.util.Set;

/**
 * LongestConsecutive
 */
public class LongestConsecutive {

    public static int solution(int arr[]) {
        int n = arr.length;
        if (n == 0)
            return 0;
        int longest = 1;
        Set<Integer> set = new HashSet<>();
        for (int i = 0; i < n; i++) {
            set.add(arr[i]);
        }
        for (int it : set) {
            if (!set.contains(it - 1)) {
                int cnt = 1;
                int x = it;
                while (set.contains(x + 1)) {
                    x += 1;
                    cnt += 1;
                }
                longest = Math.max(longest, cnt);
            }
        }
        return longest;
    }

    public static void main(String[] args) {
        int[] a = { 100, 200, 1, 2, 3, 4 };
        int ans = solution(a);
        System.out.println("The longest consecutive sequence is " + ans);
    }
}