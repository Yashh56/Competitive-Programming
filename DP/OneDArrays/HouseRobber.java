package DP.OneDArrays;

/**
 * HouseRobber
 */


public class HouseRobber {
public int rob(int[] nums) {
      int prev=nums[0];
      int prev2=0;

      for(int i=1;i<nums.length;i++){
        int pick = nums[i];

        if(i>1) pick+=prev2;

        int nonPick = prev;

        int curr_i = Math.max(pick,nonPick);
        prev2=prev;
        prev=curr_i;
      }
      return prev;
    }
    
}