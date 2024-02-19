package EasyProblems;

public class RemoveDuplicate {
    // arr=[1,1,2,2,3,3];

    public static void main(String[] args) {
        int [] arr = {1,1,2,2,3,3};
        int k = Dup(arr);

        for(int i=0;i<k;i++){
            System.out.print(arr[i]+" ");
        }
    }
    static int Dup(int[]arr){
        int n =arr.length;
        int i=0;
        for(int j=1;j<n;j++){
            if(arr[i]!= arr[j]){
                i++;
                arr[i] =arr[j];
            }
        }
        return i+1;
    }
}
