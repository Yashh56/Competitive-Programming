package EasyProblems;

public class SingleNumber {
    static int Once(int [] arr){
        int xor=0;
        int n =arr.length;
        for(int i=0;i<n;i++){
            xor=xor^arr[i];
        }
        return xor;
    }
    public static void main(String[] args) {
        int [] arr ={2,2,1,3,3,4,4};
        System.out.println(Once(arr));
    }
}
