package HardProblems;

import java.util.ArrayList;
import java.util.List;

public class PascalTriangle {

    public List<Integer> generator(int row) {
        long ans = 1;
        List<Integer> ansrow = new ArrayList<>();
        ansrow.add(1);
        for (int col = 1; col < row; col++) {
            ans = ans * (row - col);
            ans = ans / col;
            ansrow.add((int) ans);
        }
        return ansrow;
    }

    // public List<List<Integer>>generate(int n){
    public List<List<Integer>> generate(int n) {
        List<List<Integer>> ans = new ArrayList<>();
        for (int row = 1; row <= n; row++) {
            ans.add(generator(row));
        }
        return ans;

    }
}