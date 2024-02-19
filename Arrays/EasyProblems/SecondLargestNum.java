package EasyProblems;

public class SecondLargestNum {
    static private int secondSmallest(int []arr,int n){
        if(n<2){
            return -1;
        }
        int small = Integer.MAX_VALUE;
        int secondSmall=Integer.MAX_VALUE;
        int i;
        for(i=0;i<n;i++){
            if(arr[i]<small){
                secondSmall=small;
                small=arr[i];
            } 
            else if(arr[i]<secondSmall && arr[i] !=small){
                secondSmall=arr[i];
            }
        }
        return secondSmall;
    }

    static private int SecondLargest(int[]arr,int n){
        if(n<2){
            return-1;
        }
        int large =Integer.MIN_VALUE;
        int Secondlarge =Integer.MIN_VALUE;
        int i;
        for(i=0;i<n;i++){
            if(arr[i]>large){
                Secondlarge = large;
                large =arr[i];
            }
            else if(arr[i]>Secondlarge && arr[i] != large){
                Secondlarge = arr[i];
            }
        }
        return Secondlarge;
    }
    public static void main(String[] args) {
        int []arr ={1,2,3,5,6,9,8};
        int n =arr.length;
        System.out.println(secondSmallest(arr, n));
        System.out.println(SecondLargest(arr, n));

    }
}
