public class Solution {
    public int GetWinner(int[] arr, int k) {
        int n = arr.Length;
        int c = 0;
        int max = 0;
        int res = arr[0];
        if(k > n){
            for(int i = 0; i<n; i++){
                if(arr[i]>max){
                    max=arr[i];
                }
            }
            return max;
        }
        for(int i=1; i<n; i++){
            if(c==k){
                break;
            }
            if(arr[i] > res){
                res = arr[i];
                c = 0;
            }
            c++;
        }
        return res;
    }
}
