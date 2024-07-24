package MediumProblems;

import java.util.HashMap;

public class SubArraySum {

    public static int Solution(int[] arr, int k) {
        int n = arr.length;
        HashMap<Integer, Integer> mpp = new HashMap<>();
        int cnt = 0;
        int preSum = 0;
        mpp.put(0, 1);
        for (int i = 0; i < n; i++) {
            preSum += arr[i];

            if (mpp.containsKey(preSum - k)) {
                cnt += mpp.get(preSum - k);
            }
            mpp.put(preSum, mpp.getOrDefault(preSum, 0) + 1);
        }
        return cnt;
    }
}