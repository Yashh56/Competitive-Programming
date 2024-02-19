package MediumProblems;

public class KadaneAlgo {

    static long max (int arr[]){
        long sum=0;
        int n =arr.length;
        long maxi =Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];

            if(sum>maxi){
                maxi =sum;
            }

            if(sum<0){
                sum =0;
            }
        }
        return maxi;
    }
    
}