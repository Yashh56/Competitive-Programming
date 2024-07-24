package EasyProblems;
// Using Two Pointers
public class MoveZeros {
    static void Move(int []arr) {
        int n = arr.length;
        int num =0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                num++;
            }
            else if(num>0){
                int temp =arr[i];
                arr[i]=0;
                arr[i-num] = temp;
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 0, 3, 0, 4,5,6,0,8,1 };
        Move(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
