package Beginner900;

import java.util.*;

public class MinimizeInversion {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0) {

        int n = sc.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        HashMap<Integer, Integer> mp = new HashMap<>();

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            b[i] = sc.nextInt();
            mp.put(a[i], b[i]);
        }
        Arrays.sort(a);
        Arrays.sort(b);

        for (int i : a) {
            System.out.print(i);
        }
        System.out.println();
        for (int i : a) {
            System.out.print(mp.get(i));
        }
        System.out.println();   
        }
    }
}

