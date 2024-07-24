package EasyProblems;

public class LinearSearch {
    static int  LS(int []arr,int num){
        int n =arr.length;
        for(int i=0;i<n;i++){
            if(arr[i]==num){
                return i;
            }        }
        return -1;
    }
    public static void main(String[] args) {
        int [] arr ={1,2,3,4,5,6};
        int num = 4;
        System.out.println(LS(arr, num));
        
    }
}
